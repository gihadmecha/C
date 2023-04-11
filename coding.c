#include "coding.h"

int u8IsPowerOfThree (unsigned int u32Number)
{
   
}

int* isPower (int arr_count, int* arr, int* result_count)
{
  
}

int arraySum ( int numbers_count, int* numbers)
{
  
}

int maximum_XOR (int a, int b)
{
   
}

int addNumbers2 (float a, float b)
{
   
}

int checkEvenOrOdd (unsigned int u32InputNumber)
{
    
}

int u8CountOnes(unsigned int u32InputNumber)
{
    
}

void vidReverseArray(int as32ArraySize, int* as32Array)
{
   
}

int vidPrintMaxZeros (unsigned char u8Number)
{
   
}

int u8OutputArray[256];
int* pu8PrintReverseExclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{

}

char array[4];
char* lastLetters (char* word)
{
    unsigned int index;
    for ( index = 0; word[index]; index++);
    array[0] = word[index-1];
    array[1] = ' ';
    array[2] = word[index-2];
    array[3] = 0;
    return array;
}

long calculateAmount (int prices_count, int* prices)
{
    int minPrice = prices[0];
    for (unsigned int index = 1; index < prices_count; index++)
    {
        if (minPrice < prices[index])
            prices[index] -= minPrice;

        else if (minPrice >= prices[index])
        {
            minPrice = prices[index];
            prices[index] = 0;
        }
    }

    long pricesSum = 0;
    for (unsigned int index = 0; index < prices_count; index++)
    {
        pricesSum += prices[index];
    }
    return pricesSum;
}

char* strtok (char* str, char* s)
{

}

void fizzBuzz (int n)
{
    for (unsigned int index = 1; index <= n; index++)
    {
        if ((index % 3 == 0) && (index % 5 == 0))
            printf ("FizzBuzz\n");
        else if ((index % 3 == 0) && (index % 5 != 0))
            printf ("Fizz\n");
        else if ((index % 3 != 0) && (index % 5 == 0))
            printf ("Buzz\n");
        else if ((index % 3 != 0) && (index % 5 != 0))
            printf ("%d\n", index);
    }
}

int minNum (int samDaily, int kellyDaily, int difference)
{
    int samSolved = difference + samDaily;
    int kellySolved = kellyDaily;

    if ( (kellyDaily > samDaily) || ((kellyDaily == samDaily) && difference == 0) )
    {
        int day =1;
        while (kellySolved < samSolved)
        {
            samSolved += samDaily;
            kellySolved += kellyDaily;
            day++;
        }

        return day;
    }
    else
        return -1;
    
    return 0;
}

int s32FindMostOccuring (int as32Array_count, int* as32Array)
{
    int maxChain = 1;
    int counter = 1;
    int maxRepeatedNumber = as32Array[0];

    for (signed int index = 0; index < as32Array_count-1; index++)
    {
        if (as32Array[index] == as32Array[index+1])
        {
            counter++;
        }
        else
        {
            if (maxChain <= counter)
            {
                maxChain = counter;
                maxRepeatedNumber = as32Array[index];
            }
            counter = 1;
        }
    }

    return maxRepeatedNumber;
}

int u8FindLast (int au32Array_count, int* au32Array, int u32ItemToFind)
{
    int lastIndexOfItem = -1;
    for (unsigned int index = 0; index < au32Array_count; index++)
    {
        if (u32ItemToFind == au32Array[index])
        {
            lastIndexOfItem = index;
        }
    }
    return lastIndexOfItem;
}

int u32FindLongestConsecutiveOccurance (int as32Array_count, int* as32Array, int u32Number)
{
    int longestChain = 0;
    int counter = 0;

    if (as32Array_count == 0)
        return 0;

    if (as32Array == 0)
        return 0;

    for (unsigned int index = 0; index < as32Array_count-1; index++)
    {
        if (u32Number == as32Array[index])
            counter++;
        
        else
        {
            if (counter > longestChain)
                longestChain = counter;
            
            counter = 0;
        }
    }
    return longestChain;
}