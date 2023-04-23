#include "coding.h"

int u8IsPowerOfThree (unsigned int u32Number)
{
    if (u32Number == 0 || u32Number == 1)
        return 1;

    while (u32Number % 3 == 0)
    {
        if (u32Number == 3)
            return 0;

        u32Number /= 3;
    }

    return 1;
}

int* isPower (int arr_count, int* arr, int* result_count)
{
    unsigned int onesCounter = 0;

    unsigned int* result = (unsigned int*) malloc (arr_count * sizeof(unsigned int));

    for (unsigned int index = 0; index < arr_count; index++)
    {
        for (unsigned int bit = 0; bit < 8; bit++)
        {
            if (arr[index]>>bit & 1)
                onesCounter++;
        }

        if (onesCounter == 1)
            result[index] = 1;
        else
            result[index] = 0;

        onesCounter = 0;
    }

    *result_count = arr_count;
    return result;
}

int arraySum ( int numbers_count, int* numbers)
{
    int sum = 0;
    for (unsigned int index = 0; index < numbers_count; index++)
    {
        sum += numbers[index];
    }
    return sum;
}

int maximum_XOR (int a, int b)
{
    int max;

    for (unsigned int L = a; L <= b; L++)
    {
        for (unsigned int R = L; R <= b; R++)
        {
            if (L == a)
                max = L ^ R;

            if (max < (L ^ R))
                max = L ^ R;
        }
    }

    return max;
}

int addNumbers2 (float a, float b)
{
    return a + b;
}

int checkEvenOrOdd (unsigned int u32InputNumber)
{
    return u32InputNumber & 1;
}

int u8CountOnes(unsigned int u32InputNumber)
{
    int onesCounter = 0;
    for (unsigned int index = 0; index < 32; index++)
    {
        if (u32InputNumber>>index & 1)
            onesCounter++;
    }
    return onesCounter;
}

int vidPrintMaxZeros (unsigned char u8Number)
{
    int firstOne = 0;
    int max = 0;
    int counter = 0;
    for (unsigned int index = 0; index < 8; index++)
    {
        if (u8Number>>index & 1)
        {
            if (max < counter)
                max = counter;

            counter = 0;
            firstOne = 1;
        }
        else if (firstOne == 1)
        {
            counter++;
        }
    }
    return max;
}

void swap_int (int* number1, int* number2)
{
    unsigned int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
void vidReverseArray(int as32ArraySize, int* as32Array)
{
    for (unsigned int index = 0; index < as32ArraySize/2; index++)
    {
        swap_int ( as32Array+index, as32Array+as32ArraySize-index-1);
    }
}

int u8OutputArray[256];
int* pu8PrintReverseExclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{
    //int* result;
    if (u8LowerNumber < u8UpprNumber)
    {
        *result_size = u8UpprNumber - u8LowerNumber - 1;
        //result = (int*) malloc ((*result_size)*sizeof(int));
        for (unsigned int index = 0; index < *result_size; index++)
        {
            //result[index] = u8UpprNumber - index - 1;
            u8OutputArray[index] = u8UpprNumber - index -1;
        }
    }
    else
    {
        *result_size = 2;
        //result = (int*) malloc ((*result_size)*sizeof(int));
        u8OutputArray[0] = 0xFF;
        u8OutputArray[1] = 0xFF;
    }
    //return result;
    return u8OutputArray;
}

char arr[4];
char* lastLetters (char* word)
{
    unsigned int index = 0;
    for (index = 0; word[index]; index++);
    arr[0] = word[index-1];
    arr[1] = ' ';
    arr[2] = word[index-2];
    arr[3] = 0;
    return arr;
}

long calculateAmount (int prices_count, int* prices)
{
    int min;
    long sum = 0;

    for (unsigned int index = 0; index < prices_count; index++)
    {
        if (index == 0)
        {
            min = prices[0];
        }
        else if (min > prices[index])
        {
            min = prices[index];
            prices[index] = 0;
        }
        else
        {
            prices[index] -= min;
        }

        sum += prices[index];
    }
    return sum;
}

char* strtok (char* str, char* s)
{

}

void fizzBuzz (int n)
{
    for (unsigned int index = 1; index <= n; index++)
    {
        if (index%3== 0 && index%5== 0)
            printf ("FizzBuzz\n");
        else if (index%3== 0)
            printf ("Fizz\n");
        else if (index%5== 0)
            printf ("Buzz\n");
        else
        printf ("%d\n", index);
    }
}

int minNum (int samDaily, int kellyDaily, int difference)
{
    int days = 0;
    int samSolved = difference;
    int kellySolved = 0;
    if (kellyDaily > samDaily)
    {
        while (kellySolved <= samSolved)
        {
            samSolved += samDaily;
            kellySolved += kellyDaily;
            days++;
        }
        return days;
    }
    else
    {
        return -1;
    }
}

int s32FindMostOccuring (int as32Array_count, int* as32Array)
{
    int counter = 0;
    int max = 0;
    int requiredNumber;

    if (as32Array == 0)
        return;

    if (as32Array_count > 0)
    {
        requiredNumber = as32Array[0];
        for (unsigned int index = 0; index < as32Array_count-1; index++)
        {

            if (as32Array[index] == as32Array[index+1])
            {
                counter++;
            }
            else
            {
                if (max <= counter)
                {
                    max = counter;
                    requiredNumber = as32Array[index];
                }
                counter = 0;
            }
        }
    }
    
    return requiredNumber;
}

int u8FindLast (int au32Array_count, int* au32Array, int u32ItemToFind)
{
    int requiredIndex = -1;
    for (unsigned int index = 0; index < au32Array_count; index++)
    {
        if (au32Array[index] == u32ItemToFind)
            requiredIndex = index;
    }
    return requiredIndex;
}

int u32FindLongestConsecutiveOccurance (int as32Array_count, int* as32Array, int u32Number)
{
    signed int counter = 0;
    int max = 0; 
    for (unsigned int index = 0; index < as32Array_count; index++)
    {
        if (as32Array[index] == u32Number)
            counter++;
        else 
        {
            if (max < counter)
                max = counter;

            counter = 0;
        }
    }
    return max;
}

unsigned int u32ClearBit (unsigned int u32Number, unsigned int u8BitNumber)
{
    return u32Number & (~(1<<u8BitNumber));
}

/*
int partition (int* badNumbers, int low, int high)
{
    int pivot = badNumbers[high];
    int index = low;
    int i;
    for (i = low; i < high; i++)
    {
        if (badNumbers[i] < badNumbers[high])
        {
            if (i != index)
            {
                swap_int (badNumbers+i, badNumbers+index);
            }
            index++;
        }
    } 
    swap_int (badNumbers+index, badNumbers+high);
    return index;
}

void quick (int* badNumbers, int low, int high)
{
    if (low < high)
    {
        int p_index = partition (badNumbers, low, high);
    }
}

int goodSegment (int badNumbers_count, int* badNumbers, int lower, int upper)
{
    quick (badNumbers, 0, badNumbers_count-1);
}
*/

int superPower (int z)
{
    int multi = 1;
    int stopFlag;
    for (unsigned int base = 2; base <= z; base++)
    {
        multi = 1;
        for (unsigned int power = 1; power <= z; power++)
        {
            stopFlag = power;
            multi *= base;

            if (power != 1)
            {
                if (multi == z)
                {
                    //printf ("equal %d\n", multi);
                    return 1;
                }
                else if (multi > z)
                {
                    //printf ("bigger %d\n", multi);
                    break;
                }
            }
        }

        if (stopFlag == 2)
            return 0;
    }
    return 0;
}

int fourthBit (int number)
{
   return (number>>3) & 1; 
}

int maxIndex (int s, int badIndex)
{
    int i = 0;
    int j = 1;
    int requiredIndex;
    for (int index = 0; index < s; index++)
    {
        i = i + j;
        i++;
        j++;
    }
}

static int onesIndexArray[32];
int* getOneBits (int n, int* result_count)
{
    int firstOne = 0;
    int counter = 0;
    *result_count = 0;
    for (signed int index = sizeof(int)*8-1; index >= 0; index--)
    {
        if ((n>>index) & 1)
        {
            if (firstOne == 0)
            {
                firstOne = 1;
            }
            counter++;
            onesIndexArray[*result_count] = counter;
            (*result_count)++;
        }
        else
        {
            if (firstOne == 1)
                counter++;
        }
    }
    return onesIndexArray;
}

int changeAds (int base10)
{
    int lastOneIndex = -1;
    int resultNumber = base10;
    for (unsigned int index = 0; index < 32; index++)
    {
        if ((base10>>index) & 1)
            lastOneIndex = index;
    }

    for (unsigned int index = 0; index <= lastOneIndex; index++)
    {
        resultNumber ^= 1<<index;
    }

    return resultNumber;
}