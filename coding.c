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
  unsigned int noOfOnes = 0;

  *result_count = 0;

  int* result = (int*) malloc (arr_count * sizeof(int));
  
  if (result != NULL)
  {
    *result_count = arr_count;
    for (unsigned int i = 0; i < arr_count; i++)
    {
        for (unsigned int j = 0; j < 32; j++)
        {
            if ( arr[i]>>j & 1)
                noOfOnes++;
        }

        if (noOfOnes == 1)
            result[i] = 1;
        else
            result[i] = 0;

        noOfOnes = 0;
    }
  }

  return result;
}

int arraySum ( int numbers_count, int* numbers)
{
   int sum = 0;
   for (unsigned int i = 0; i < numbers_count; i++)
   {
        sum += numbers[i];
   }
   return sum;
}

int maximum_XOR (int a, int b)
{
   int Xor;
   int max;

   for (unsigned int i = a; i < b; i++)
   {
        for (unsigned int j = i; j < b; j++)
        {
            Xor = i ^ j;

            if (i == a)
                max = Xor;

            if (max < Xor)
                max = Xor;
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
    int noOfOnes = 0;
    for (unsigned int i = 0; i < 32; i++)
    {
        if (u32InputNumber>>i & 1)
            noOfOnes++;
    }
    return noOfOnes;
}


void swap_int (int* input1, int* input2)
{
    int temp = *input1;
    *input1 = *input2;
    *input2 = temp;
}
void vidReverseArray(int as32ArraySize, int* as32Array)
{
    for (unsigned int i = 0; i < as32ArraySize/2; i++)
    {
        swap_int (as32Array + i, as32Array + (as32ArraySize - 1) - i);
    }
}

int vidPrintMaxZeros (unsigned char u8Number)
{
    int noOfZeroes = 0;
    int max = 0;
    int firstOneFlag = 0;
    for (unsigned int i = 0; i < 8; i++)
    {
        if (u8Number>>i & 1)
        {
            firstOneFlag = 1;

            if (max < noOfZeroes)
                max = noOfZeroes;

            noOfZeroes = 0;
        }
        else if (firstOneFlag == 1)
        {
            noOfZeroes++;
        }
    }
    return max;
}

int u8OutputArray[256];
int* pu8PrintReverseExclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{
        if (u8UpprNumber > u8LowerNumber)
        {
            *result_size = u8UpprNumber - u8LowerNumber - 1;

            for (unsigned int i = 0; i < *result_size; i++)
            {
                u8OutputArray[i] = u8UpprNumber - 1 - i;
            }
        }    
        else
        {
            *result_size = 2;
            u8OutputArray[0] = 0xFF;
            u8OutputArray[1] = 0xFF;
        }

    return u8OutputArray;
}