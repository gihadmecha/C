#include <stdio.h>
#include "myMathsLibrary.h"

void array_print( int* arr,  int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d  ", *(arr + i));
    }
    printf("\n");
}

signed int array_search( int* arr, int size , signed int number)
{
    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            return i;
        }
    }

    return -1;
}

signed int array_searchlastIndex( int* arr, int size , int number)
{ 
    signed int index = -1;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            index = i;
        }
    }

    return index;
}

signed int array_max( int* arr, double size)
{
    signed int max;

    for (unsigned int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = *arr;
        }

        if (max < *(arr + i))
        {
            max = *(arr + i);
        } 
    }

    return max;
}

signed int array_min( int* arr, double size)
{
    signed int min;

    for (unsigned int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            min = *arr;
        }

        if (min > *(arr + i))
        {
            min = *(arr + i);
        } 
    }

    return min;
}

signed int array_mostRepeated( int* arr,  int size)
{
    unsigned int count = 0;
    unsigned int max;
    signed int mostRepeated;

    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = 0; j < size; j++)
        {
            if( *(arr + j) == *(arr + i) )
            {
                count++;
            }
        }

        if ( i == 0)
        {
            mostRepeated = *arr;
            max = count;
        }

        if ( count > max)
        {
            mostRepeated = *(arr + i);
            max = count;
        }

        count = 0;
    }

    return mostRepeated;
}

unsigned char array_mostRepeatedChar ( unsigned char* arr, double size)
{
    unsigned int count = 0;
    unsigned int max;
    unsigned char mostRepeated;

    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = i; j < size; j++)
        {
            if( *(arr + j) == *(arr + i) )
            {
                count++;
            }
        }

        if ( i == 0)
        {
            mostRepeated = *arr;
            max = count;
        }

        if ( count > max)
        {
            mostRepeated = *(arr + i);
            max = count;
        }

        count = 0;
    }

    return mostRepeated;
}

void array_reverse( signed int* arr,  signed int size)
{
    for (unsigned int i = 0; i < size / 2; i++)
    {
        signed int swap = *(arr + i);
        *(arr + i) = *(arr + size - (1 + i));
        *(arr + size - (1 + i)) = swap;
    }
}

unsigned int array_swap( signed int* arr, signed int* ar2,  signed int arrSize, signed int ar2Size)
{
    unsigned int size;
    if ( arrSize < ar2Size)
    {
        size = arrSize;
    }
    else
    {
        size = ar2Size;
    }
    
    for (unsigned int i = 0; i < size; i++)
    {
        signed int swap = *(arr + i);
        *(arr + i) = *(ar2 + i);
        *(ar2 + i) = swap;
    }

    return size;
}

unsigned int array_longestChain(signed int* arr, double size , double number)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            count++;
        }
        else 
        {
            if(longest < count)
            {
                longest = count;
            }

            count = 0;
        }
    }

    return longest;
}

unsigned int array_longestChainOfAnyNumber(signed int* arr, double size , signed int* number)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == *(arr + (i + 1)))
        {
            count++;
        }
        else 
        {
            count++;

            if(longest < count)
            {
                longest = count;
                *number = *(arr + i);
            }

            count = 0;
        }
    }

    return longest;
}

unsigned int array_merge ( signed int* ar1, signed int* ar2, signed int* ar3, double ar1Size, double ar2Size, double ar3Size)
{
    double size = ar1Size + ar2Size;

    if ( size > ar3Size)
    {
        size = ar3Size;
    }

    unsigned int j = 0;
    unsigned int i = 0;


    for ( ; i < size && j < ar1Size && j < ar2Size; i = i + 2)
    {
        *(ar3 + i) = *(ar1 + j);
        *(ar3 + (i + 1)) = *(ar2 + j);
        j++;
    }
    

    if ( j  >= ar1Size)
    {
        for ( ; i < size; i++)
        {
            *(ar3 + i) = *(ar2 + j);
            j++;
        }    
    }
    else if ( j  >= ar2Size)
    {
        for ( ; i < size; i++)
        {
            *(ar3 + i) = *(ar1 + j);
            j++;    
        }      
    }
    
    return size;
}

unsigned int array_removePrime( int* arr, int size)
{
    unsigned int count = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( IsPrime(*(arr + i)))
        {
            *(arr + i) = 0;
            count++;
        }
    }

    return count;
}

void array_removeRepeatedNumbers  ( signed int* arr, double size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = 0; j < size; j++)
        {
            if( *(arr + i) == *(arr + j) &&  i != j)
            {
               *(arr + j) = 0; 
               *(arr + i) = 0;
            }
        }
    }
}

double array_scan( int* arr, int maxSize)
{
    double size;
    printf("Enter the size of the array less than 100: ");
    scanf("%lf", &size);

    if (size > maxSize)
    {
        size = maxSize;
    }
    

    for (unsigned int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i);
        scanf("%d", arr + i);
    }

    return size;
}

unsigned int array_betweenTwoNumbers( signed int* arr, double number_1, double number_2)
{
    double max;
    double min;
    unsigned int size = 0;

    if ( number_1 > number_2 )
    {
        max = number_1;
        min = number_2;
    }
    else
    {
        min = number_1;
        max = number_2;
    }

    if( min == (signed int)min)
    {
        signed int i;
        for ( i = min +1; i < max; i++)
        {
            *(arr + size) = i;
            size++;
        }
    }
    else
    {
        signed int i;
        for ( i = min - ( min - (signed int)min ); i < max; i++)
        {
            *(arr + size) = i;
            size++;
        }
    }

    return size;
}

void array_zeroDetector ( signed int* arr)
{
    unsigned int i = 0;
    unsigned int flag = 0;
    unsigned int firstZeroIndex;
    unsigned int secendZeroIndex;

    while ( flag != 2)
    {
        if( *(arr + i) == 0)
        {
            flag++;

            if( flag == 1)
            {
                firstZeroIndex = i;                                                                                
            }
            else
            {
                secendZeroIndex = i;
            }
        }

        i++;
    }

    for( unsigned int count = 1; count <= 3; count++)
    {
        signed int swap = *(arr + firstZeroIndex + count);
        *(arr + firstZeroIndex + count) = *(arr + secendZeroIndex + count);
        *(arr + secendZeroIndex + count) = swap;
    }  
}

signed int array_biggestDifferenceBetweenTwoElement( signed int* arr, double size)
{
    signed int difference;
    signed int biggest;

    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = i; j < size; j++)
        {
            difference = *(arr + j) - *(arr + i);

            if( i == 0 && j == 0)
            {
                biggest = difference;
            }

            if( difference > biggest)
            {
                //bigger = *(arr + j);
                //smaller = *(arr + i);
                biggest = difference;
            }
        }
    }

    return biggest;
}

