#include <stdio.h>

void string_print( unsigned char* str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        printf("%c", *(str + i));
    }
    printf("\n");
}

unsigned int string_compare ( unsigned char* str1, unsigned char* str2)
{
    unsigned int i;
    for ( i = 0; str1[i] && str2[i]; i++)
    {
        if (str1[i] == str2[i] || str1[i] - str2[i] == 'a' - 'A' || str1[i] - str2[i] == 'A' - 'a')
        {
            /* code */
        }
        else if ( str1[i] < str2[i] || str1[i] - 'A' < str2[i] - 'A' || str1[i] - 'a' < str2[i] - 'a')
        {
            return -1;
        }
        else if ( str1[i] > str2[i] || str1[i] - 'A' > str2[i] - 'A' || str1[i] - 'a' > str2[i] - 'a')
        {
            return 1;
        } 
    }

    if (str1[i] == 0 && str2[i] != 0)
    {
        return -1;
    }
    else if (str1[i] != 0 && str2[i] == 0)
    {
        return 1;
    }
    
    return 0;
}

void swap_pointerToChar ( unsigned char** ppx, unsigned char** ppy)
{
    unsigned char* temp = *ppx;
    *ppx = *ppy;
    *ppy = temp;
}

void swap_pointer ( signed int** ppx, signed int** ppy)
{
    signed int* temp = *ppx;
    *ppx = *ppy;
    *ppy = temp;
}

void arrayOfStrings_print ( unsigned char* * arr, double size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        string_print(*(arr + i));
        // for (unsigned int j = 0; arr[i][j]; j++)
        // {
        //     printf("%c", arr[i][j]);
        // }
        // printf("\n");
    } 
}

unsigned int arrayOfStrings_IsStringExist ( unsigned char* * arr, double size, unsigned char* str1)
{
    for (unsigned int i = 0; i < size; i++)
    {
        if ( string_compare ( str1, *(arr + i)) == 0  )
        {
            return 1;
        }
    }

    return 0; 
}

//sorting
void array_bubbleSort ( unsigned char** arr, double size)
{
    unsigned int sortedFlag = 0;

    for (unsigned int j = 0; j < size; j++)
    {
        sortedFlag = 0;

        for (unsigned int i = 0; i < size - 1 - j; i++)
        {
            if ( string_compare ( *(arr + i),  *(arr + i + 1)) == 1)
            {
                //swap_pointerToChar ( arr + i, arr + i + 1 );
                swap_pointer ( arr + i, arr + i + 1 );
                sortedFlag++;
            }
        }
        if ( sortedFlag == 0)
        {
            return;
        }
        
    }
}




int main ()
{
    unsigned char* arr[] = {"ahmed", "ahmedg","ahmed", "khalad", "asmaa"};

    arrayOfStrings_print ( arr, 3);

    if ( arrayOfStrings_IsStringExist (  arr, 3, "ali") )
    {
        printf("exist !! \n" );
    }
    else
    {
        printf("not exist !! \n" );
    }

    array_bubbleSort (  arr, 5);
    arrayOfStrings_print ( arr, 5);
}

