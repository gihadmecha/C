
#include "myArray.h"

void array_print ( signed int arr[], signed int size)
{
    for (signed int index = 0; index < size; index++)
    {
        printf ("%d ", *(arr + index));
    }

    printf ("\n");
}

void array_printChar ( unsigned char arr[], signed int size)
{
    for (signed int index = 0; index < size; index++)
    {
        printf ("%c ", *(arr + index));
    }

    printf ("\n");
}

signed int array_search ( signed int arr[], signed int size, signed int number)
{
    for (signed int index = 0; index < size; index++)
    {
        if (*(arr + index) == number)
            return index;
    } 

    return -1;
}

//binary search
signed int array_sorted_search ( signed int arr[], signed int size, signed int number)
{
    signed int firstElementIndex = 0;
    signed int lastElementIndex = size - 1;
    signed int middleElementIndex;

    while ( firstElementIndex  <= lastElementIndex )
    {
        middleElementIndex = (lastElementIndex + firstElementIndex) / 2;

        if ( arr[middleElementIndex] == number )
            return middleElementIndex;
        else if ( number < arr[middleElementIndex] )
            lastElementIndex = middleElementIndex - 1;
        else if ( arr[middleElementIndex] < number )
            firstElementIndex = middleElementIndex + 1;
    }

    return -1;
}

signed int array_searchLastIndexOfNumber ( signed int arr[], signed int size, signed int number)
{
    signed int lastNumberIndex = -1;

    for (signed int index = 0; index < size; index++)
    {
        if (*(arr + index) == number)
            lastNumberIndex = index;
    }

    return lastNumberIndex;
}

void array_getMaxAndMin ( signed int arr[], signed int size, signed int* max, signed int* maxIndex, signed int* min, signed int* minIndex)
{
    *max = *arr;
    *maxIndex = 0;
    *min = *arr;
    *minIndex = 0;

    for (signed int index = 1; index < size; index++)
    {
       if (*max < *(arr + index))
       {
            *max = *(arr + index);
            *maxIndex = index;
       }  
       else if (*(arr + index) < *min)
       {
            *min = *(arr + index);
            *minIndex = index;
       }
    }  
}

signed int array_getIndexOfMax ( signed int arr[], signed int size)
{
    signed int max = *arr;
    signed int indexOfMax = 0;

    for (signed int index = 1; index < size; index++)
    {
        if (max < *(arr + index))
        {
            max = *(arr + index);
            indexOfMax = index;
        }
    }

    return indexOfMax;
}

signed int array_getIndexOfMin ( signed int arr[], signed int size)
{
    signed int min = *arr;
    signed int indexOfMin = 0;

    for (signed int index = 1; index < size; index++)
    {
        if (*(arr + index) < min)
        {
            min = *(arr + index);
            indexOfMin = index;
        }
    }
    
    return indexOfMin;
}

signed int array_betweenTwoNumbers ( signed int arr[], signed int maxSize,signed int number1, signed int number2)
{
    signed int noOfNumbers;
    signed int index = 0;

    for (signed int number = number1 + 1; number < number2 && index < maxSize; number++)
    {
        *(arr + index) = number;
        index++;
    }
    for (signed int number = number1 - 1; number > number2 && index < maxSize; number--)
    {
        *(arr + index) = number;
        index++;
    }

    //return size
    return index;
}

signed int array_mostRepeatedNumber (signed int arr[], signed int size)
{
    signed int numberCounter = 0;
    // mostRepeatedNumber initialization = ?
    signed int mostRepeatedNumber;
    signed int noOfRepeats = 0;

    for (signed int index_i = 0; index_i < size; index_i++)
    {
        for (signed int index_j = index_i; index_j < size; index_j++)
        {
            if (*(arr + index_j) == *(arr + index_i))
                numberCounter++;
        }
        
        if (noOfRepeats < numberCounter)
        {
            noOfRepeats = numberCounter;
            mostRepeatedNumber = *(arr + index_i);
        }

        numberCounter = 0;
    }
    
    return mostRepeatedNumber;
}

//frequency array
signed int array_oOfN_mostRepeatedNumber ( signed int arr[], signed int arrSize)
{
    signed int* repeatsCounter;
    signed int minElement = arr[0];
    signed int maxElement = arr[0];
    signed int maxRepeats = 0;
    signed int mostRepeatedNumber;

    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        if (minElement > arr[arrIndex])
            minElement = arr[arrIndex];
        
        if (maxElement < arr[arrIndex])
            maxElement = arr[arrIndex];
    }

    signed int numbersRange = ( (maxElement + 1) - minElement );

    repeatsCounter = (signed int*) calloc (numbersRange, sizeof (int));
    
    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        repeatsCounter[ arr[arrIndex] - minElement ]++;
    }
    
    for (signed int repeatsCounterIndex = 0; repeatsCounterIndex < numbersRange; repeatsCounterIndex++)
    {
        if ( maxRepeats < repeatsCounter[ repeatsCounterIndex ] )
        {
            maxRepeats = repeatsCounter[ repeatsCounterIndex ];
            mostRepeatedNumber = repeatsCounterIndex + minElement;
        }
    }

    free (repeatsCounter);
    
    return mostRepeatedNumber;
}

//frequency array
signed int array_oOfN_mostRepeatedMono ( signed int arr[], signed int arrSize)
{
    signed int monoes[10] = {0};
    signed int monoesSize = sizeof (monoes) / sizeof (monoes[0]);
    signed int maxNoOfRepeats = 0;
    signed int mostRepeatedMono;

    for ( signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        monoes[ arr[arrIndex] ]++;
    }

    for (signed int monoesIndex = 0; monoesIndex < monoesSize; monoesIndex++)
    {
        if ( maxNoOfRepeats < monoes[monoesIndex] )
        {
            maxNoOfRepeats = monoes[monoesIndex];
            mostRepeatedMono = monoesIndex;
        }
    }

    return mostRepeatedMono;
}

signed char array_mostRepeatedChar ( signed char arr[], signed int size, signed int* noOfRepeats)
{
    signed int numberCounter = 0;

    // number initialization = ?
    signed char number;

    *noOfRepeats = 0;

    for (signed int index_i = 0; index_i < size; index_i++)
    {
        for (signed int index_j = index_i; index_j < size; index_j++)
        {
            if ( *(arr + index_j) == *(arr + index_i) )
                numberCounter++;
        }

        if (*noOfRepeats < numberCounter)
        {
            *noOfRepeats = numberCounter;
            number = *(arr + index_i);
        }

        numberCounter = 0;
    }
    
    return number;
}

//signed int array_sorted_mostRepeatedNumber ( signed int arr[], signed int size, signed int* longest)
signed int array_longestChain ( signed int arr[], signed int size, signed int* longest)
{
    signed int number;
    signed int numberCounter = 1;
    *longest = 0;

    for (signed int index = 0; index < size; index++)
    {
        if ( *(arr + index) == *(arr + (index + 1)) )
            numberCounter++;
        else
        {
            if (*longest < numberCounter)
            {
                *longest = numberCounter;
                number = *(arr + index);
            }

            numberCounter = 1;
        }    
    }
    
    return  number;
}

void array_reverse (signed int arr[], signed int size)
{
    for (signed int index = 0; index < size / 2; index++)
    {
        swap (  (arr + index),  ( (arr + (size - 1)) - index ) );
    }
}

void array_reverseChar ( unsigned char arr[], signed int size)
{
    for (signed int index = 0; index < size/2; index++)
    {
        swap_char ( arr + index,  arr + ((size -1) - index) );
    }
}

signed int array_swap ( signed int arr1[], signed int arr2[], signed int arr1Size, signed int arr2Size)
{
    signed int size;

    if (arr1Size < arr2Size)
        size = arr1Size;
    //if arr2Size < arr1Size
    else
        size = arr2Size;

    for (signed int index = 0; index < size; index++)
    {
        swap ( (arr1 + index), (arr2 + index));
    }
    
    return size;
}

signed int array_copy ( signed int arrCopy[], signed int arrOrigin[], signed int sizeCopy, signed int sizeOrigin)
{
    signed int size;

    if (sizeCopy < sizeOrigin)
        size = sizeCopy;
    //if sizeOrigin < sizeCopy
    else 
        size = sizeOrigin;

    for (signed int index = 0; index < size; index++)
    {
        *(arrCopy + index) = *(arrOrigin + index);
    }
    
    return size;
}

signed int array_copyChar ( unsigned char arrCopy[], unsigned char arrOrigin[], signed int sizeCopy, signed int sizeOrigin)
{
    signed int size;

    if (sizeCopy < sizeOrigin)
        size = sizeCopy;
    //if sizeOrigin < sizeCopy
    else 
        size = sizeOrigin;

    for (signed int index = 0; index < size; index++)
    {
        *(arrCopy + index) = *(arrOrigin + index);
    }
    
    return size;
}

signed int array_longestChainOfNumber ( signed int arr[], signed int size, signed int number)
{
    signed int numberCounter = 0;
    signed int longest = 0;

    for (signed int index = 0; index < size; index++)
    {
        if ( *(arr + index) == number)
            numberCounter++;
        else if ( numberCounter !=  0)
        {
            if (longest < numberCounter)
                longest = numberCounter;

            numberCounter = 0;
        }
    }
    
    return longest;
}

signed int array_longestSequenceChain ( signed int arr[], signed int size)
{
    signed int sequenceCounter = 0;
    signed int longestSequence = 0;

    for (signed int index = 0; index < size - 1; index++)
    {

        if ( *(arr + index) == *(arr + (index + 1)) - 1 )
            sequenceCounter++;

        else
        {
            sequenceCounter++;
            
            if (longestSequence < sequenceCounter)
                longestSequence = sequenceCounter;

            sequenceCounter = 0;
        }
    }

    return longestSequence;  
}

signed int array_merge1 (  signed int arr1[],  signed int arr2[], signed int arr3[], signed int arr1Size, signed int arr2Size, signed int arr3Size)
{
    signed int size;

    if (arr1Size < arr2Size)
        size = arr1Size * 2;
    //if arr2Size < arr1Size
    else
        size = arr2Size * 2;

    if (arr3Size < size)
        size = arr3Size;

    signed int arr1Index = 0;
    signed int arr2Index = 0;
    for (signed int arr3index = 0; arr3index < size; arr3index += 2)
    {
        *(arr3 + arr3index) = *(arr1 + arr1Index);
        *(arr3 + (arr3index + 1)) = *(arr2 + arr2Index);

        arr1Index++;
        arr2Index++;
    }

    return size;    
}

signed int array_merge2 ( signed int arr1[], signed int arr2[], signed int arr3[], signed int arr1Size, signed int arr2Size, signed int arr3Size)
{
    signed int size;
    
    size = arr1Size + arr2Size;

    if (arr3Size < size)
        size = arr3Size;

    signed int arr1Index = 0;
    signed int arr2Index = 0;
    for (signed int arr3Index = 0; arr3Index < size; arr3Index += 2)
    {
        if (arr1Index < arr1Size && arr2Index < arr2Size)
        {
            *(arr3 + arr3Index) =  *(arr1 + arr1Index);
            *(arr3 + (arr3Index + 1)) =  *(arr2 + arr2Index);
            arr1Index++;
            arr2Index++;
        }
        else if (arr1Index < arr1Size)
        {
            *(arr3 + arr3Index) =  *(arr1 + arr1Index);
            *(arr3 + (arr3Index + 1)) =  *(arr1 + (arr1Index + 1));
            arr1Index += 2;
        }
        else if (arr2Index < arr2Size)
        {
            *(arr3 + arr3Index) =  *(arr2 + arr1Index);
            *(arr3 + (arr3Index + 1)) =  *(arr2 + (arr2Index + 1));
            arr2Index += 2;
        }   
    } 

    return size; 
}

signed int array_removePrime (    signed int arr[], signed int size)
{
    signed int  primeCounter = 0;

    for (signed int index = 0; index < size; index++)
    {
        if (IsPrime (*(arr + index)))
        {
            *(arr + index) = 0;
            primeCounter++;
        }
    }
    
    return primeCounter;
}

signed int array_removeRepeatedSortedNumbers (signed int arr1[], signed int arr2[], signed int size1, signed int size2)
{
    signed int arr2Index = 1;   
    *arr2 = *arr1;
    for (signed int arr1Index = 0; arr1Index < size1 - 1 && arr2Index < size2; arr1Index++)
    {
        if (*(arr1 + arr1Index) != *(arr1 + (arr1Index + 1)))
        {
            *(arr2 + arr2Index) = *(arr1 + (arr1Index + 1));
            arr2Index++;
        }
    }

    return arr2Index;
}

signed int array_scan ( signed int arr[], signed int size)
{
    signed int noOfElements;
    printf ("Enter no. of Elements less than %d: ", size);
    scanf ("%d", &noOfElements);

    if (size < noOfElements)
        noOfElements = size;

    for (signed int index = 0; index < noOfElements; index++)
    {
        printf ("Enter Element %d: ", index +1);
        scanf ("%d", arr + index);
    }
    
    return noOfElements;
}

signed int array_zeroDetector ( signed int arr[])
{
    signed firstZeroIndex ;
    signed secondZeroIndex ;
    signed zeroFlag =  0;

    for (signed int index = 0; zeroFlag < 2; index++)
    {
        if (*(arr + index) == 0)
        {
            zeroFlag++;

            if (zeroFlag == 1)
                firstZeroIndex = index;
            else if (zeroFlag == 2)
                secondZeroIndex = index;
        }
    }

    for (signed int counter = 1; counter <= 3; counter++)
    {
        swap ( arr + (firstZeroIndex + counter),  arr + (secondZeroIndex + counter) );
    }

    return secondZeroIndex + 4;
}

signed int array_biggestDifferenceBetweenTwoNumbers ( signed int arr[], signed int size, signed int* smallNumber, signed int* bigNumber)
{
    signed int difference;
    signed int biggestDifference = -1;

    for (signed int index_i = 0; index_i < size; index_i++)
    {
        for (signed int index_j = index_i; index_j < size; index_j++)
        {
            difference = *(arr + index_j) - *(arr + index_i);
            
            if (biggestDifference < difference)
            {
                *smallNumber = *(arr + index_i);
                *bigNumber = *(arr + index_j);
                biggestDifference = difference;
            }
        }
    }
    
    return biggestDifference;
}

signed int array_charArrayToInt ( unsigned char arr[], signed int size)
{
    signed int number = 0;
    signed int signFlag = 0;

    for (signed int index = 0; index < size ; index++)
    {
        if( arr[index] == '-')
        {
            signFlag = 1;
            index++;
        }

        number = number * 10 + (arr[index] - '0');
    }

    if (signFlag)
        number = -number;

    
    return number;
}

signed int array_compareChar (  unsigned char arr1[], unsigned char arr2[], signed int arr1Size, signed int arr2Size)
{
    if ( arr1Size != arr2Size )
        return 0;

    for (signed int index = 0; index < arr1Size; index++)
    {
        if ( arr1[index] != arr2[index] )
            return 0;
    }
    
    return 1;
}

signed int array_compareChar2 (  unsigned char arr1[], unsigned char arr2[], signed int arr1Size, signed int arr2Size)
{
    for (signed int index = 0; index < arr1Size && index < arr2Size; index++)
    {
        if ( arr1[index] > arr2[index] )
            return 1;
        else if ( arr1[index] < arr2[index] )
            return -1;
    }

    if ( arr1Size > arr2Size )
        return  1;
    else if ( arr1Size < arr2Size)
        return -1;

    return 0;
}

//You have an array of integers all numbers in the array repeated 2 times
//except one number repeated one time only find this number
signed int array_oOfN_findNotTwiceRepeatedNumber ( signed int arr[], signed int size)
{
    signed int notTwiceRepeatedNumber = arr[0];

    for (signed int index = 1; index < size; index++)
    {
        notTwiceRepeatedNumber ^= arr[index];
    }
    
    return notTwiceRepeatedNumber;
}

//frequency array
signed int array_oOfN_copyWithoutRepeatedNumbers ( signed int arrOrigin[], signed int** arrCopy, signed int arrOriginSize)
{
    //signed int repeatsCounter[];  ??
    signed int* repeatsCounter;        

    signed int minElement = arrOrigin[0]; 
    signed int maxElement = arrOrigin[0];

    for (signed int arrOriginIndex = 0; arrOriginIndex < arrOriginSize; arrOriginIndex++)
    {
        if (minElement > arrOrigin[arrOriginIndex])
            minElement = arrOrigin[arrOriginIndex];

        if (maxElement < arrOrigin[arrOriginIndex])
            maxElement = arrOrigin[arrOriginIndex];
    }

    signed int numbersRange =  ( (maxElement + 1) - minElement );

    repeatsCounter = (signed int*) calloc (numbersRange , sizeof (int));
    
    *arrCopy = (signed int*) malloc (numbersRange * sizeof (int));
    
    signed int arrCopyIndex = 0;
    for (signed int arrOriginIndex = 0; arrOriginIndex < arrOriginSize; arrOriginIndex++)
    {
        repeatsCounter[ arrOrigin[arrOriginIndex] - minElement ]++;

        if ( repeatsCounter[ arrOrigin[arrOriginIndex] - minElement ] == 1 )
        {
            *(*arrCopy + arrCopyIndex) = arrOrigin[arrOriginIndex];
            arrCopyIndex++;
        }  
    }

    return arrCopyIndex;
}

void array_bubbleSort ( signed int arr[], signed int size )
{
    signed int sortFlag;
    signed int done = 0;

    do
    {
        sortFlag = 0;

        for (signed int index = 0; index < (size - 1) - done; index++)
        {
            if ( arr[index] > arr[index + 1])
            {
                swap ( arr + index, arr + (index + 1) );
                sortFlag++;
            }
        }

        done++;

    }while ( sortFlag > 1 );
}

void array_selectionSort ( signed int arr[], signed int size)
{
    signed int maxIndex;
    signed int max;

    for (signed int index_j = 0; index_j < size; index_j++)
    {
        max = arr[0];

        for (signed int index_i = 0; index_i < size - index_j; index_i++)
        {
            if ( max <= arr[index_i] )
            {
                max = arr[index_i];
                maxIndex = index_i;
            }   
        }    

        swap ( arr + maxIndex, arr + ( (size - 1) - index_j) );
    }
}

void array_countingSort ( signed int arr[], signed int arrSize)
{
    signed int maxIndex = array_getIndexOfMax ( arr, arrSize);
    signed int minIndex = array_getIndexOfMin ( arr, arrSize);
    signed int min = arr[minIndex];
    signed int max = arr[maxIndex];

    signed int  numbersRange =  ( (max + 1) - min );

    signed int* repeatsCounter = (signed int*) calloc ( numbersRange, sizeof (int));

    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        repeatsCounter[ arr[arrIndex] - min ]++;
    }

    signed int arrIndex = 0;
    for (signed int repeatsCounterIndex = 0; repeatsCounterIndex < numbersRange; repeatsCounterIndex++)
    {
        for (signed int repeats = 0; repeats < repeatsCounter[repeatsCounterIndex]; repeats++)
        {
            arr[arrIndex] = min + repeatsCounterIndex;
            arrIndex++; 
        }
    }

    free (repeatsCounter); 
}

//You have an array of 100 element contain all number from 0 t0 100 except
//one number, write c function to find the missed number (try in O(n)).
signed int array_missedNumber ( signed int arr[], signed int arrSize)
{
    //maxNumber = 100;
    //minNumber = 0;
    //numbersRange = (100 + 1) - 0 = 101

    signed int repeatsCounter[101] = {0};

    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        repeatsCounter [ arr[arrIndex] ]++;
    }

    for (signed int repeatsCounterIndex = 0; repeatsCounterIndex < 101; repeatsCounterIndex++)
    {
        if ( repeatsCounter [ repeatsCounterIndex ] == 0 )
            return repeatsCounterIndex;
    }
}

signed int array_repeatedNumber ( signed int arr[], signed int arrSize)
{
    //maxNumber = 100
    //minNumber = 1
    //numberRange = (maxNumber + 1) - minNumber = (100 + 1) - 1 = 100

    signed int repeatsCounter[100] = {0};

    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        repeatsCounter[ arr[arrIndex] - 1]++;
    }
    
    for (signed int repeatsCounterIndex = 0; repeatsCounterIndex < 100; repeatsCounterIndex++)
    {
        if ( repeatsCounter [ repeatsCounterIndex ] == 2 )
            return repeatsCounterIndex + 1;
    }
}

void array_ofArrayOf5Int_print ( signed int arr[][5], signed int arrSize)
{
    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        array_print ( *(arr + arrIndex), arrSize );

        // for (signed int elementIndex = 0; elementIndex < 5; elementIndex++)
        // {
            // printf ("%d ", *( *(arr + arrIndex) + elementIndex ));
        // }
        
        // printf ("\n");
        
    }
    
}

void array_ofArrayOf3Int_print ( signed int arr[][3], signed int arrSize)
{
    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        array_print ( *(arr + arrIndex), arrSize );

        // for (signed int elementIndex = 0; elementIndex < 5; elementIndex++)
        // {
            // printf ("%d ", *( *(arr + arrIndex) + elementIndex ));
        // }
        
        // printf ("\n");
        
    }
    
}

void array_ofArrayOf3Char_print ( unsigned char arr[][3], signed int row, signed int column)
{
    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        array_printChar ( *(arr + rowIndex), column );

        // for (signed int elementIndex = 0; elementIndex < 5; elementIndex++)
        // {
            // printf ("%d ", *( *(arr + arrIndex) + elementIndex ));
        // }
        
        // printf ("\n");
        
    }
}

signed int array_ofArrayOf3Char_searchForSmallArray ( unsigned char bigArr[][3], signed int bigArrSize, unsigned char smallNeededArr[], signed int smallNeededArrSize)
{
    for (signed int arrIndex = 0; arrIndex < bigArrSize; arrIndex++)
    {
        if ( array_compareChar ( *(bigArr + arrIndex), smallNeededArr, 3, smallNeededArrSize)  )
        {
            return arrIndex;
        }
    }
    return -1;
}

//binary search
signed int array_arrayOf3Char_sortedSearch ( unsigned char bigArray[][3], signed int row, signed int column, unsigned char smallNeededArray[], signed int smallNeededArraySize)
{
    signed int firstRowIndex = 0;
    signed int lastRowIndex = row - 1;

    signed int middleRowIndex;
    
    while ( firstRowIndex  <= lastRowIndex )
    {
        middleRowIndex = (firstRowIndex + lastRowIndex) / 2;

        if ( array_compareChar2 ( *(bigArray + middleRowIndex), smallNeededArray, column, smallNeededArraySize ) == 0 )
            return middleRowIndex;
        else if ( array_compareChar2 ( *(bigArray + middleRowIndex), smallNeededArray, column, smallNeededArraySize ) == -1)
            lastRowIndex = middleRowIndex - 1;
        else if ( array_compareChar ( *(bigArray + middleRowIndex), smallNeededArray, column, smallNeededArraySize ) == 1)
            firstRowIndex = middleRowIndex + 1;
    }

    return -1;
}

void array_ofArrayOf10Int_print ( signed int arr[][10], signed int arrSize)
{
    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        array_print ( *(arr + arrIndex), arrSize );

        // for (signed int elementIndex = 0; elementIndex < 5; elementIndex++)
        // {
            // printf ("%d ", *( *(arr + arrIndex) + elementIndex ));
        // }
        
        // printf ("\n");
        
    }
    
}

void array_OfArrayOf5Int_printZigzag ( signed int arr[][5], signed int arrSize)
{
      for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
      {
        if ( arrIndex % 2 == 0)
        {
            array_print ( *(arr + arrIndex), arrSize);
        }
        else
        {
            for (signed int elementIndex = 4; elementIndex >= 0; elementIndex--)
            {
                printf ("%d ", *( *(arr + arrIndex) + elementIndex ));
            }

            printf ("\n");
        }
      }     
}

signed int array_ofArrayOf3Int_IsdiagonalsEqual ( signed int arr[][3], signed int row, signed int column)
{
    if (row != column)
        return 0;

    signed int diagonal1 = 0;
    signed int diagonal2 = 0;

    for (signed int rowIndex = 0, columnIndex = 0; rowIndex < row && columnIndex < column; rowIndex++, columnIndex++)
    {
        if ( rowIndex == columnIndex )
            diagonal1 += arr[rowIndex][columnIndex];
    }
    
    for (signed int rowIndex = 0, columnIndex = column - 1; rowIndex < row && columnIndex >= 0; rowIndex++, columnIndex--)
    {
            diagonal2 += arr[rowIndex][columnIndex];
    }

    if ( diagonal1 == diagonal2 )
        return 1;
    else
        return 0;
}

signed int* array_ofArrayOf19Int_dynamic ( )
{
    signed int row;
    printf ("Enter the No. of Rows: ");
    scanf ("%d", &row);

    signed int column = 10;

    signed int element = 0;

    signed int (*arr)[10] = calloc ( row * column, sizeof (int));

    *( *(arr + 2) + 3 ) = 3;
    // for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    // {
    //     for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
    //     {
    //         arr[rowIndex][columnIndex] = element;
    //         element ++;
    //     }      
    // }

    return arr;
}

signed int** array_ofPointersToInt_dynamic ( )
{
    signed int row;
    printf ("Enter the No. of Rows: ");
    scanf ("%d", &row);

    signed int column;
    printf ("Enter the No. of columns: ");
    scanf ("%d", &column);

    signed int** arr = calloc (row, sizeof (signed int*));

    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        *(arr + rowIndex) = calloc (column, sizeof (signed int));
    }
    
    *( *(arr + 2) + 3 ) = 3;

    return arr;
}

void array_ofPointersToInt ( signed int* arr[], signed int row, signed column)
{
    for (signed int arrIndex = 0; arrIndex < row; arrIndex++)
    {
        array_print (*(arr + arrIndex), column);
    }
}

void array_of9Arrayof3ArrayOf3Int_sudokuPrint (signed int arr[][3][3], signed int square, signed int row, signed int column)
{
    printf ("\n");

    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int squareIndex = 0; squareIndex < 3; squareIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                printf ( "%d ", arr[squareIndex][rowIndex][columnIndex] );
            }
            
            printf ("|");
        }
        
        printf ("\n");
    }
    
    for (signed int columnIndex = 0; columnIndex < 19; columnIndex++)
    {
        printf ("-");

        if ( columnIndex == 5 || columnIndex == 11)
        {
            printf ("+"); 
        }
    } 
    printf ("\n"); 


    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int squareIndex = 3; squareIndex < 6; squareIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                printf ( "%d ", arr[squareIndex][rowIndex][columnIndex] );
            }
            
            printf ("|");
        }
        
        printf ("\n");
    }

    for (signed int columnIndex = 0; columnIndex < 19; columnIndex++)
    {
        printf ("-");

        if ( columnIndex == 5 || columnIndex == 11)
        {
            printf ("+"); 
        }
    } 
    printf ("\n"); 


    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int squareIndex = 6; squareIndex < 9; squareIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                printf ( "%d ", arr[squareIndex][rowIndex][columnIndex] );
            }
            
            printf ("|");
        }
        
        printf ("\n");
    }
    
    printf ("\n");
}

void array_of9Arrayof3ArrayOf3Int_sudokuSet (signed int arr[][3][3], signed int square, signed int row, signed int column)
{
    // for (signed int squareIndex = 1; squareIndex <= square; squareIndex++)
    // {
        // for (signed int rowIndex = 1; rowIndex <= row; rowIndex++)
        // {
            // for (signed int columnIndex = 1; columnIndex <= column; columnIndex++)
            // {
                // // printf ("sudoku[%d][%d][%d] = ", squareIndex, rowIndex, columnIndex);
                // // scanf ("%d", &arr[squareIndex-1][rowIndex-1][columnIndex-1]);

            // }
        // }
    // }
    
    arr[0][0][0] = 0;    arr[0][0][1] = 0;    arr[0][0][2] = 5;    arr[1][0][0] = 0;    arr[1][0][1] = 0;    arr[1][0][2] = 0;    arr[2][0][0] = 8;    arr[2][0][1] = 0;    arr[2][0][2] = 0;
    arr[0][1][0] = 8;    arr[0][1][1] = 1;    arr[0][1][2] = 6;    arr[1][1][0] = 0;    arr[1][1][1] = 0;    arr[1][1][2] = 5;    arr[2][1][0] = 4;    arr[2][1][1] = 2;    arr[2][1][2] = 7;
    arr[0][2][0] = 7;    arr[0][2][1] = 0;    arr[0][2][2] = 2;    arr[1][2][0] = 6;    arr[1][2][1] = 0;    arr[1][2][2] = 0;    arr[2][2][0] = 0;    arr[2][2][1] = 1;    arr[2][2][2] = 9;
    arr[3][0][0] = 2;    arr[3][0][1] = 0;    arr[3][0][2] = 0;    arr[4][0][0] = 0;    arr[4][0][1] = 0;    arr[4][0][2] = 7;    arr[5][0][0] = 3;    arr[5][0][1] = 0;    arr[5][0][2] = 1;
    arr[3][1][0] = 6;    arr[3][1][1] = 9;    arr[3][1][2] = 0;    arr[4][1][0] = 1;    arr[4][1][1] = 0;    arr[4][1][2] = 8;    arr[5][1][0] = 7;    arr[5][1][1] = 0;    arr[5][1][2] = 0;
    arr[3][2][0] = 3;    arr[3][2][1] = 7;    arr[3][2][2] = 1;    arr[4][2][0] = 5;    arr[4][2][1] = 0;    arr[4][2][2] = 0;    arr[5][2][0] = 0;    arr[5][2][1] = 4;    arr[5][2][2] = 0;
    arr[6][0][0] = 0;    arr[6][0][1] = 6;    arr[6][0][2] = 0;    arr[7][0][0] = 9;    arr[7][0][1] = 0;    arr[7][0][2] = 2;    arr[8][0][0] = 0;    arr[8][0][1] = 0;    arr[8][0][2] = 0;
    arr[6][1][0] = 1;    arr[6][1][1] = 0;    arr[6][1][2] = 3;    arr[7][1][0] = 0;    arr[7][1][1] = 4;    arr[7][1][2] = 0;    arr[8][1][0] = 9;    arr[8][1][1] = 7;    arr[8][1][2] = 0;
    arr[6][2][0] = 5;    arr[6][2][1] = 8;    arr[6][2][2] = 0;    arr[7][2][0] = 7;    arr[7][2][1] = 0;    arr[7][2][2] = 0;    arr[8][2][0] = 2;    arr[8][2][1] = 6;    arr[8][2][2] = 4;


    // arr[0][0][0] = 9;    arr[0][0][1] = 4;    arr[0][0][2] = 5;    arr[1][0][0] = 2;    arr[1][0][1] = 7;    arr[1][0][2] = 1;    arr[2][0][0] = 8;    arr[2][0][1] = 3;    arr[2][0][2] = 6;
    // arr[0][1][0] = 8;    arr[0][1][1] = 1;    arr[0][1][2] = 6;    arr[1][1][0] = 3;    arr[1][1][1] = 9;    arr[1][1][2] = 5;    arr[2][1][0] = 4;    arr[2][1][1] = 2;    arr[2][1][2] = 7;
    // arr[0][2][0] = 7;    arr[0][2][1] = 3;    arr[0][2][2] = 2;    arr[1][2][0] = 6;    arr[1][2][1] = 8;    arr[1][2][2] = 4;    arr[2][2][0] = 5;    arr[2][2][1] = 1;    arr[2][2][2] = 9;
    // arr[3][0][0] = 2;    arr[3][0][1] = 0;    arr[3][0][2] = 8;    arr[4][0][0] = 4;    arr[4][0][1] = 6;    arr[4][0][2] = 7;    arr[5][0][0] = 3;    arr[5][0][1] = 9;    arr[5][0][2] = 1;
    // arr[3][1][0] = 6;    arr[3][1][1] = 9;    arr[3][1][2] = 4;    arr[4][1][0] = 1;    arr[4][1][1] = 3;    arr[4][1][2] = 8;    arr[5][1][0] = 7;    arr[5][1][1] = 5;    arr[5][1][2] = 2;
    // arr[3][2][0] = 3;    arr[3][2][1] = 7;    arr[3][2][2] = 1;    arr[4][2][0] = 5;    arr[4][2][1] = 2;    arr[4][2][2] = 9;    arr[5][2][0] = 6;    arr[5][2][1] = 4;    arr[5][2][2] = 8;
    // arr[6][0][0] = 4;    arr[6][0][1] = 6;    arr[6][0][2] = 7;    arr[7][0][0] = 9;    arr[7][0][1] = 5;    arr[7][0][2] = 2;    arr[8][0][0] = 1;    arr[8][0][1] = 8;    arr[8][0][2] = 3;
    // arr[6][1][0] = 1;    arr[6][1][1] = 0;    arr[6][1][2] = 3;    arr[7][1][0] = 8;    arr[7][1][1] = 4;    arr[7][1][2] = 6;    arr[8][1][0] = 9;    arr[8][1][1] = 7;    arr[8][1][2] = 5;
    // arr[6][2][0] = 5;    arr[6][2][1] = 8;    arr[6][2][2] = 0;    arr[7][2][0] = 7;    arr[7][2][1] = 1;    arr[7][2][2] = 3;    arr[8][2][0] = 2;    arr[8][2][1] = 6;    arr[8][2][2] = 4;

}

void array_of9Arrayof3ArrayOf3Int_sudokuSetCopy (signed int arrCopy[][3][3], signed int arrOrigin[][3][3], signed int square, signed int row, signed int column)
{
    for (signed int squareIndex = 0; squareIndex < square; squareIndex++)
    {
        for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                arrCopy[squareIndex][rowIndex][columnIndex] = arrOrigin[squareIndex][rowIndex][columnIndex];
            }
        }
    }
}

signed int squareSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputRowIndex, signed int inputColumnIndex, signed int number)
{
    for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
    {
        for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
        {
            if ( rowIndex != inputRowIndex && columnIndex != inputColumnIndex)
            {
                if ( sudoku[inputSquareIndex][rowIndex][columnIndex] == number )
                return 1;
            }
        } 
    }  

    return 0;
}

signed int bigRowSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputRowIndex, signed int number)
{
    if ( inputSquareIndex < 3)
    {
        for (signed int squareIndex = 0; squareIndex < 3; squareIndex++)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
                {
                    if ( sudoku[squareIndex][inputRowIndex][columnIndex] == number )
                        return 1;
                } 
            } 
        }  

    }
    else if ( inputSquareIndex >= 3 && inputSquareIndex < 6)
    {
        for (signed int squareIndex = 3; squareIndex < 6; squareIndex++)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
                {
                    if ( sudoku[squareIndex][inputRowIndex][columnIndex] == number )
                        return 1;
                } 
            }  
        } 
    }
    else if ( inputSquareIndex < 9)
    {
        for (signed int squareIndex = 6; squareIndex < 9; squareIndex++)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
                {
                    if ( sudoku[squareIndex][inputRowIndex][columnIndex] == number )
                        return 1;
                } 
            }  

        }
    }

    return 0;
}

signed int bigColumnSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputColumnIndex, signed int number)
{
    if ( inputSquareIndex == 0 || inputSquareIndex == 3 || inputSquareIndex == 6)
    {
        for (signed int squareIndex = 0; squareIndex <= 6 ; squareIndex+=3)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
                {
                    if ( sudoku[squareIndex][rowIndex][inputColumnIndex] == number )
                        return 1;
                } 
            } 
        }  
    }
    else if ( inputSquareIndex == 1 || inputSquareIndex == 4 || inputSquareIndex == 7)
    {
        for (signed int squareIndex = 1; squareIndex <= 7; squareIndex+=3)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
                {
                    if ( sudoku[squareIndex][rowIndex][inputColumnIndex] == number )
                        return 1;
                } 
            } 
        } 
    }
    else if ( inputSquareIndex == 2 || inputSquareIndex == 5 || inputSquareIndex == 8)
    {
        for (signed int squareIndex = 2; squareIndex <= 8; squareIndex+=3)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
                {
                    if ( sudoku[squareIndex][rowIndex][inputColumnIndex] == number )
                        return 1;
                } 
            } 
        }
    }

    return 0;
}

void array_of9Arrayof3ArrayOf3Int_sudokoInput (signed int sudoku[][3][3], signed int* inputSquareIndex, signed int* inputRowIndex, signed int* inputColumnIndex, signed int* inputNumber)
{
        printf ("\nchoose allowed space !!\n");
        array_of9Arrayof3ArrayOf3Int_sudokuPrint ( sudoku, 9, 3, 3);

        *inputNumber = -1;

        do
        {
            printf ("Enter square Index from 1 to 9 = ");
            scanf ("%d", inputSquareIndex);
            *inputSquareIndex = *inputSquareIndex - 1;
        }while (*inputSquareIndex < 0 || *inputSquareIndex >= 9);

        do
        {
            printf ("Enter row Index from 1 to 3 = ");
            scanf ("%d", inputRowIndex);
            *inputRowIndex = *inputRowIndex - 1;
        }while (*inputRowIndex < 0 || *inputRowIndex >= 3);

        do
        {
            printf ("Enter column Index from 1 to 3 = ");
            scanf ("%d", inputColumnIndex);
            *inputColumnIndex = *inputColumnIndex - 1;
        }while (*inputColumnIndex < 0 || *inputColumnIndex >= 3);

        while (*inputNumber < 1 || *inputNumber > 9)
        {
            printf ("Enter a number from 1 to 9 = ");
            scanf ("%d", inputNumber);
        }
}

signed int array_of9Arrayof3ArrayOf3Int_sudokoSearchAvailableSpace ( signed int sudoku[][3][3], signed int square, signed int row, signed int column)
{
    for (signed int squareIndex = 0; squareIndex < square; squareIndex++)
    {
        for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                if ( sudoku[squareIndex][rowIndex][columnIndex] == 0 )
                    return 1;
            } 
        }  
    }
    
    return 0;
}

void array_of9Arrayof3ArrayOf3Int_sudokoPlay (signed int sudoku[][3][3], signed int square, signed int row, signed int column)
{
    signed int inputSquareIndex;
    signed int inputRowIndex;
    signed int inputColumnIndex;
    signed int inputNumber;

    signed int sudokuSet[9][3][3];

    array_of9Arrayof3ArrayOf3Int_sudokuSetCopy ( sudokuSet, sudoku, square, row, column);

    while ( array_of9Arrayof3ArrayOf3Int_sudokoSearchAvailableSpace ( sudoku, square, row, column) )
    {
        array_of9Arrayof3ArrayOf3Int_sudokoInput ( sudoku, &inputSquareIndex, &inputRowIndex, &inputColumnIndex, &inputNumber);

        while ( squareSearch (sudoku, inputSquareIndex, inputRowIndex, inputColumnIndex, inputNumber) || sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] != 0 || bigRowSearch ( sudoku, inputSquareIndex, inputRowIndex, inputNumber) || bigColumnSearch ( sudoku, inputSquareIndex, inputColumnIndex, inputNumber) )
        {
            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] != 0)
                printf ("\nspace( %d, %d, %d) is not allowed space !!\n ", inputSquareIndex + 1, inputRowIndex + 1, inputColumnIndex + 1);

            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 && squareSearch (sudoku, inputSquareIndex, inputRowIndex, inputColumnIndex, inputNumber))
                printf ("\n%d is duplicated in the square %d !!\n ", inputNumber, inputSquareIndex + 1);
                
            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 && bigRowSearch ( sudoku, inputSquareIndex, inputRowIndex, inputNumber) )
                printf ("\n%d is duplicated in the same big row !!\n ", inputNumber);
                
            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 && bigColumnSearch ( sudoku, inputSquareIndex, inputColumnIndex, inputNumber))
                printf ("\n%d is duplicated in the same big column !!\n ", inputNumber);
                    
            if ( sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 )
                sudoku[inputSquareIndex][inputRowIndex][inputColumnIndex] = inputNumber;

            array_of9Arrayof3ArrayOf3Int_sudokoInput ( sudoku, &inputSquareIndex, &inputRowIndex, &inputColumnIndex, &inputNumber);
        }   

        sudoku[inputSquareIndex][inputRowIndex][inputColumnIndex] = inputNumber; 
    }    

    array_of9Arrayof3ArrayOf3Int_sudokuPrint ( sudoku, 9, 3, 3);

    printf ("Congratulation !!\n");
}

void array_of9Arrayof3ArrayOf3Int_sudoku ()
{
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  -------+--------+------
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  -------+--------+------
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0

    signed int sudoku[9][3][3] = {0};

    signed int square = 9;
    signed int row = 3;
    signed int column = 3;

    array_of9Arrayof3ArrayOf3Int_sudokuSet ( sudoku, square, row, column);

    array_of9Arrayof3ArrayOf3Int_sudokoPlay (sudoku, square, row, column);
}



/*

//binary search
signed int array_search_binary( int* arr, int size , signed int number)
{
    signed int first = 0;
    signed int last = size - 1;
    signed int middle;

    while (first <= last)
    {
        middle = (last + first) / 2;
    
        if (arr[middle] == number)
        {
            return middle;
        }
        else if (arr[middle] > number)
        {
            last = middle - 1;
        }
        else if (arr[middle] > number)
        {
            first = middle + 1;
        }
    }
    
    return -1;
}


//frequecy array
signed int array_mostRepeated_2( signed int* arr, unsigned int size)
{
    signed int max;
    signed int min;
    signed int mostRepeated;
    unsigned int count;

    for (unsigned int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = *arr;
            min = *arr;
        }

        if ( arr[i] > max)
        {
            max = arr[i];
        }
        
        if ( arr[i] < min )
        {
            min = arr[i];
        }
    }

    unsigned int* counter = (unsigned int*) calloc ( ((max - min) + 1) , sizeof(unsigned int) );
    if (counter == NULLPTR)
    {
        
        unsigned int count = 0;
        unsigned int max;
        signed int mostRepeated;

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

    for (unsigned int i = 0; i < size; i++)
    {
       counter[arr[i] - min]++;
    }

    for (unsigned int i = 0; i < (max - min) + 1; i++)
    {
       if (i == 0)
        {
            mostRepeated = i + min;
            count = *counter;
        }

        if ( counter[i] > count)
        {
            mostRepeated = i + min;
            count = counter[i];
        }
    }

    free(counter);

    return mostRepeated;
}

//frequecy array
unsigned int array_mostRepeated_mono( unsigned int* arr,  double size)
{
    unsigned int max;
    unsigned int mostRepeated;

    unsigned int counter[10] = {0};

    for (unsigned int i = 0; i < size && arr[i] >= 0 && arr[i] <= 9 ; i++)
    {
        counter[arr[i]]++;
    }

    for(unsigned int i = 0; i <= 9; i++)
    {
        if (i == 0)
        {
            max = counter[i];
            mostRepeated = i;
        }

        if( counter[i] > max)
        {
            max = counter[i];
            mostRepeated = i;
        }        
     }
    
    return mostRepeated;
}

//frequecy array
unsigned char array_mostRepeatedChar ( unsigned char* arr, double size)
{
    unsigned int max;
    unsigned int mostRepeated;

    unsigned int counter[256] = {0};

    for (unsigned int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }

    for(unsigned int i = 0; i < 256; i++)
    {
        if (i == 0)
        {
            max = counter[i];
            mostRepeated = i;
        }

        if( counter[i] > max)
        {
            max = counter[i];
            mostRepeated = i;
        }        
     }
    
    return mostRepeated;
}

void array_reverseChar( signed char* arr,  signed int size)
{
    for (unsigned int i = 0; i < size / 2; i++)
    {
        signed int swap = *(arr + i);
        *(arr + i) = *(arr + size - (1 + i));
        *(arr + size - (1 + i)) = swap;
    }
}

//frequency array
signed int array_findMissedNumber ( signed int* arr, double size)
{
    signed int counter[100] = {0};

    for (unsigned int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }
    
    for (unsigned int i = 0; i <= 100; i++)
    {
        if ( counter[i] == 0)
        {
            return i;
        }
    } 
}

//frequency array
signed int array_findRepeatedNumber ( signed int* arr, double size)
{
    signed int counter[100] = {0};

    for (unsigned int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }
    
    for (unsigned int i = 0; i <= 100; i++)
    {
        if ( counter[i] > 1)
        {
            return i;
        }
    } 
}

//frequency array
signed int array_findNoRepeatedNumber ( signed int* arr, double size)
{
    signed int max = array_getMax ( arr, size);
    signed int min = array_getMin ( arr, size);

    unsigned int rangeSize = (max - min) + 1;

    signed int* counter = (signed int*) calloc (rangeSize, sizeof(signed int));

    if (counter != NULLPTR)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            counter[ arr[i] - min ]++;
        }
        
        for (unsigned int i = 0; i <= 100; i++)
        {
            if ( counter[i] == 1)
            {
                return i + min;
            }
        } 
    }

    free(counter);
}


signed int array_findNoRepeatedNumber_2 ( signed int* arr, double size)
{
    signed int result = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        result ^= arr[i];
    }

    return result;
}

//binary search
// signed int array_findNoRepeatedNumberFromSortedArray ( signed int* arr, double size)
// {
//     signed int first = 0;
//     signed int last = size - 1;
//     signed int middle;

//     while ( first < last)
//     {
//         middle = ( first + last ) / 2;

//         if ( arr[middle] != arr[middle + 1] && arr[middle] != arr[middle - 1])
//         {
//             return arr[middle];
//             printf("%d \n ", arr[middle]);
//         }
//         else
//         {
//             last = middle - 1;
//             middle = ( first + last ) / 2;
//             printf("not: %d \n", arr[middle]);
//         }
//     }
    
//     last = size - 1;

//     while ( first < last)
//     {
//         middle = ( first + last ) / 2;

//         if ( arr[middle] != arr[middle + 1] && arr[middle] != arr[middle - 1])
//         {
//             return arr[middle];
//             printf("%d \n ", arr[middle]);
//         }
//         else
//         {
//             first = middle + 1;
//             middle = ( first + last ) / 2;
//             printf("not: %d \n", arr[middle]);
//         }
//     }
// }

unsigned int array_searchAndReturnPreviousElements ( signed int* arr, double size, signed int* ar2, double ar2Size, double number)
{
    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            return i;
        }
        else
        {
            if( i < ar2Size )
            {
                ar2[i] = arr[i];
            }
            else
            {
                return i;
            }
        }
    }
}


//sorting
void array_bubbleSort ( signed int* arr, double size)
{
    unsigned int sortedFlag = 0;

    for (unsigned int j = 0; j < size; j++)
    {
        sortedFlag = 0;

        for (unsigned int i = 0; i < size - 1 - j; i++)
        {
            if ( arr[i] > arr[i + 1])
            {
                swap ( arr + i, arr + i + 1);
                sortedFlag++;
            }
        }
        if ( sortedFlag == 0)
        {
            return;
        }
        
    }
    
}

//sorting
void array_selectionSort ( signed int* arr, double size)
{
    for (unsigned int j = 0; j < size; j++)
    {
        signed int maxIndex = array_maxIndex( arr, size   - j);

        swap ( arr + maxIndex, arr + (unsigned int)size - 1 - j );
    } 
}

//sorting
void array_countingSort ( signed int* arr, double size)
{
    signed int max = array_getMax ( arr,  size);
    signed int min = array_getMin ( arr,  size);
    
    unsigned int counterSize = ((max - min) + 1);

    unsigned int* counter = (unsigned int*) calloc ( counterSize, sizeof(unsigned int) );

    if (counter != NULLPTR)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            counter[arr[i] - min]++;
        }

        unsigned int arrIndex = 0;
        for (unsigned int i = 0; i < counterSize; i++)
        {
            for (unsigned int j = 0; j < counter[i]; j++)
            {
                arr[arrIndex] = i + min;
                arrIndex++;
            }
            
        }
    }

    free(counter);
}
*/