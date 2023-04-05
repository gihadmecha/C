#include "coding.h"

int u8IsPowerOfThree (unsigned int u32Number)
{
    if (u32Number == 0 || u32Number == 1)
        return 1;

   /* while (u32Number > 1)
    {
        if (u32Number/3 == u32Number/3.0)
        {
            u32Number /= 3;
        }
        else
        {
            return 1;
        }
    }

    return 0;*/

    while(u32Number % 3 == 0)
    {
        if (u32Number == 3)
            return 0;

        u32Number /= 3;
    }

    return 1;
}


int* isPower (int arr_count, int* arr, int* result_count)
{
    int noOfOnes = 0;
    int* result = (int*) malloc (arr_count * sizeof(int));

    if (result != 0)
    {
        *result_count = arr_count;
        for (int i = 0; i < arr_count; i++)
        {
            for (int j = 0; j < 32; j++)
            {
                noOfOnes = noOfOnes + ((arr[i]>>j) & 1); 
                // if ((arr[i]>>j) & 1)
                //     noOfOnes++;
            }

            if (noOfOnes == 1)
                result[i] = 1;
            else
                result[i] = 0;

            noOfOnes = 0;
        }
    }
    else
        *result_count = 0;

    return result;
}

int arraySum ( int numbers_count, int* numbers)
{
    int sum = 0;

    for (int i = 0; i < numbers_count; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

int maximum_XOR (int a, int b)
{
    int max;
    int xor;
    for (int i = a; i <= b; i++)
    {
        for (int j = i; j <= b; j++)
        {
            xor = i ^ j;
            printf ("%d ^ %d = %d\n", i, j, xor);

            if (i == a)
                max = xor;

            if (max < xor)
                max = xor;
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
   //if (u32InputNumber & 1 == 0)
   if (u32InputNumber % 2 == 0)
        return 0;
    else 
        return 1;
}