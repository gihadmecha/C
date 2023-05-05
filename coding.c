#include "coding.h"

// uint8 PwmGenerator (uint8 DutyCycle)
// {
//     static int counter = 0;

//     if (DutyCycle < 0 || DutyCycle > 10)
//         return 2;

//     if (counter == 10)
//     {
//         counter = 0;
//     }

//     if (counter < DutyCycle)
//     {
//         counter++;
//         return 1;
//     }
//     else
//     {
//         counter++;
//         return 0;
//     }
// }

// uint8 LedFlasher (uint8 OnofInterval)
// {
//     static int counter = 0;
//     static uint8 status = 1;

//     if (OnOffInterval < 1 || OnOffInterval > 10)
//         return 0xFF;

//     if (counter >= OnOffInterval)
//     {
//         status != status;
//         counter = 0;
//     }
    
//     counter++;

//     return status;
// }

// uint8 ControlFan (uint8 Temp)
// {
//     static int state = 0;

//     if (Temp >= 50)
//         state = 1;
//     else if (Temp <= 30)
//         state = 0;

//     return state;
// }

// uint8 SawtoothGenerator ()
// {
//     static uint8 step = 0;
//     return step++;
// }

// uint8 Dec2SevenSeg (uint8 DecimalNum)
// {
//     if (0 <= DecimalNum && DecimalNum <= 9)
//     {
//         uint8 seg[] = {0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0x70, 0x7F, 0x7B}; 
//         return seg[DecimalNum];
//     }

//     return 0x00;
// }

// uint32 FallingEdgeCounter (uint8 PinReading)
// {
//     static uint8 lastState = 0;
//     static uint32 counter = 0;

//     if (lastState == 1 && PinReading == 0)
//         counter++;

//     lastState = PinReading;

//     return counter;
// }

// uint8 CalcTempValue (uint8 AdcRead)
// {
//     if (AdcRead > 200)
//         return 120;

//     if (0 <= AdcRead && AdcRead <= 60)
//         return ADC * 50 / 60;
//     else if (61 <= AdcRead && AdcRead <= 100)
//         return ((ADC-60)*50/40) + 50;
//     else if (101 <= AdcRead && AdcRead <= 200)
//         return ((ADC-100)*20/100)+100;
// }

// uint8 BattaryVoltageMonitor (uint8 BattaryVoltage)
// {
//     BattaryVoltage /= 10;
//     static uint8 state = 'U';
//     static uint8 counter1 = 0;
//     static uint8 counter2 = 0;
//     static uint8 counter3 = 0;

//     if (BattaryVoltage < 5)
//     {
//         counter1++;
//         counter2 = 0;
//         counter3 = 0;

//         if (counter1 > 2)
//         {
//             state = 'E';
//         }
//     }
//     else if (6 <= BattaryVoltage && BattaryVoltage < 9)
//     {
//         counter1 = 0;
//         counter2++;
//         counter3 = 0;

//         if (counter2 > 2)
//         {
//             state = 'L';
//         }
//     }
//     else if (12 <= BattaryVoltage)
//     {
//         counter1 = 0;
//         counter2 = 0;
//         counter3++;

//         if (counter3 > 2)
//         {
//             state = 'N';
//         }
//     }

//     return state;
// }

int u8FindLast (int au32Array_count, int* au32Array, int u32ItemToFind)
{
    int index = -1;
    for (int i = 0; i < au32Array_count; i++)
    {
        if (au32Array[i]==u32ItemToFind)
            index = i;
    }
    return index;
}

int au8OutputArray1[256];
int* vidPrintReverseInclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{
    if (u8LowerNumber > u8UpprNumber)
    {
        *result_size = 2;
        au8OutputArray1[0] = 0xFF;
        au8OutputArray1[1] = 0xFF;
        return au8OutputArray1;
    }

    *result_size = u8UpprNumber - u8LowerNumber + 1;
    for (int i = 0; i < (*result_size); i++)
    {
        au8OutputArray1[i] = u8UpprNumber--;
    }
    return au8OutputArray1;
}

int u8OutputArray2[256];
int* pu8PrintReverseExclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{
    if (u8LowerNumber >= u8UpprNumber)
    {
        *result_size = 2;
        u8OutputArray2[0] = 0xFF;
        u8OutputArray2[1] = 0xFF;
        return u8OutputArray2;
    }

    *result_size = u8UpprNumber - u8LowerNumber - 1;
    for (int i = 0; i < (*result_size); i++)
    {
        u8OutputArray2[i] = --u8UpprNumber;
    }
    return u8OutputArray2;
}

unsigned int u32ClearBit (unsigned int u32Number, unsigned int u8BitNumber)
{
    if (u8BitNumber > 31)
        return u32Number;
    else
        return u32Number & (~(1<<u8BitNumber));
}

int u32FindLongestConsecutiveOccurance (int as32Array_count, int* as32Array, int u32Number)
{
    int max = 0;
    int counter = 0;
    for (int i = 0; i < as32Array_count; i++)
    {
        if (as32Array[i]==u32Number)
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

int s32FindMostOccuring (int as32Array_count, int* as32Array)
{
    int counter = 0;
    int max = 0;
    int number;
    for (int i = 0; i < as32Array_count; i++)
    {
        if(as32Array[i]==as32Array[i+1])
            counter++;
        else
        {
            counter++;
            if (max <= counter)
            {
                number = as32Array[i];
                max = counter;
            }
            counter = 0;
        }
    }
    return number;
}

int u8IsPowerOfThree (unsigned int u32Number)
{
    if (u32Number == 0 || u32Number == 1)
        return 1;

    while (u32Number%3 == 0)
    {
        if (u32Number == 3)
            return 0;

        u32Number /= 3;
    }

    return 1;
}

int vidPrintMaxZeros (unsigned char u8Number)
{
    int flag = 0;
    int bit;
    int counter = 0;
    int max = 0;

    for (int i = 0; i < 8; i++)
    {
        bit = (u8Number>>i) & 1;
        if (flag == 0 && bit == 1)
        {
            flag = 1;
        }
        else if (flag == 1 && bit == 0)
        {
            counter++;
        }
        else if (flag == 1 && bit == 1)
        {
            if (max < counter)
                max = counter;

            counter = 0;
        }
    }
    
    return max;
}

unsigned char u8RightCircularShift (unsigned int u32InputNumber, int u8NumberOfShifts, unsigned int *pu32Output)
{
    if (u8NumberOfShifts > 32)
    {
        *pu32Output = u32InputNumber;
        return 0xFF;
    }    

    *pu32Output = (u32InputNumber<<(32 - u8NumberOfShifts)) | (u32InputNumber>>u8NumberOfShifts);
    return 0;
}

unsigned int u8CalculateHeatingTime (unsigned int u8WaterTempature)
{
    if (0 <= u8WaterTempature && u8WaterTempature <= 30)
        return 7;

    if (30 < u8WaterTempature && u8WaterTempature <= 60)
        return 5;

    if (60 < u8WaterTempature && u8WaterTempature <= 90)
        return 3;

    if (90 < u8WaterTempature && u8WaterTempature <= 100)
        return 1;

    if (100 < u8WaterTempature)
        return 0;
}

//////////////////////////////////////////////////////////////////////////////////
void swap_intvidReverseArray (int* number1, int* number2)
{
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void vidReverseArray(int as32ArraySize, int* as32Array)
{
    for (int i = 0; i < as32ArraySize/2; i++)
    {
        swap_intvidReverseArray (as32Array+i, as32Array+as32ArraySize-i-1);
    }    
}
///////////////////////////////////////////////////////////////////////////////////

int checkEvenOrOdd (unsigned int u32InputNumber)
{
    return u32InputNumber&1;
}

int u8CountOnes(unsigned int u32InputNumber)
{
    int counter = 0;
    for (int i = 0; i < 32; i++)
    {
        counter += (u32InputNumber>>i)&1;
    }    
    return counter;
}

///////////////////////////////////////////////////////////////

int isPowerOf2 (int number)
{
    int counter = 0;
    for (int i = 0; i < 32; i++)
    {
        counter += (number>>i)&1;
    }

    if (counter == 1)
        return 1;
    else
        return 0;
}

int* isPower (int arr_count, int* arr, int* result_count)
{
   *result_count = arr_count;
   int* result = malloc (arr_count * sizeof(int));
   for (int i = 0; i < arr_count; i++)
   {
        result[i] = isPowerOf2(arr[i]);
   }
   return result;
}
/////////////////////////////////////////////////////////////////

int maximum_XOR (int a, int b)
{
    int max;
    int xor;
    for (int i = a; i <= b; i++)
    {
        for (int j = i; j <= b; j++)
        {
            xor = i ^ j;

            if (i==a)
                max = xor;

            if (max < xor)
                max = xor;
        }
    }
    return max;
}

int fourthBit (int number)
{
    return (number>>3)&1;
}

long calculateAmount (int prices_count, int* prices)
{
    long sum = prices[0];
    int min = prices[0];    
    for (int i = 1; i < prices_count; i++)
    {
        if (min > prices[i])
        {
            min = prices[i];
            prices[i] = 0;
        }
        else
        {
            prices[i] -= min;
            sum+=prices[i];
        }
    }
    return sum;
}

void fizzBuzz (int n)
{
    for (int i = 0 ; i <= n; i++)
    {
        if (i%3==0 && i%5==0)
            printf ("FizzBuzz\n");
        else if (i%3==0)
            printf ("Fizz\n");
        else if (i%5==0)
            printf ("Buzz\n");
        else
            printf("%d\n", i);
    }
}

int minNum (int samDaily, int kellyDaily, int difference)
{
    if (kellyDaily <= samDaily)
        return -1;

    int sam = difference;
    int kelly = 0;
    int days = 0;

    // days = difference / (kellyDaily - samDaily) + 1;
    while (sam >= kelly)
    {
        sam +=samDaily;
        kelly += kellyDaily;
        days++;
    }

    return days;
}


////////////////////////////////////////////////////////////////////////////////////

void string_printtwins (char** str, int size)
{
    for (unsigned int index = 0; index < size; index++)
    {
        string_print (str[index]);
    }
}

void swap_charTwins (char* character1, char* character2)
{
    char temp = *character1;
    *character1 = *character2;
    *character2 = temp;
}

int string_lenghtTwins (char* string)
{
    int length = 0;
    for (length = 0; string[length]; length++);
    return length;
}

void sort_oddCharTwins (char* string)
{
    int length = string_lenghtTwins (string);
    for (int i = 0; i < length-2; i+=2)
    {
        for (int j = i; j < length-2; j+=2)
        {
            if (string[i] > string[i+2])
                swap_charTwins (string+i, string+i+2);
        }
    }
}

void sort_evenCharTwins (char* string)
{
    int length = string_lenghtTwins (string);
    for (int i = 1; i < length-2; i+=2)
    {
        for (int j = i; j < length-2; j+=2)
        {
            if (string[i] > string[i+2])
                swap_charTwins (string+i, string+i+2);
        }
    }
}

int compare_Twins (char* string1, char* string2)
{
    if (string_lenghtTwins(string1) == string_lenghtTwins(string2))
    {
        for (int i = 0; string1[i]; i++)
        {
            if (string1[i]!=string2[i])
                return 0;
        }
        return 1;
    }
    else 
        return 0;
}

void string_copyTwin (char* string1, char* string2, int size)
{
    int i = 0;
    for (i = 0; i < size-1; i++)
    {
        string1[i] = string2[i];
    }
    string1[i] = 0;
}

char** twins ( int a_count, char** a, int b_count, char** b, int* result_count)
{
    *result_count = a_count;
    
    char** result = malloc ((*result_count) * sizeof(char*));

    for (int i = 0; i < 4; i++)
    {
        result[i] = malloc (4 * sizeof(char));
    }

    for (int i = 0; i < (*result_count); i++)
    {
        sort_oddCharTwins (a[i]);
        sort_evenCharTwins (a[i]);
        sort_oddCharTwins (b[i]);
        sort_evenCharTwins (b[i]);

        if (compare_Twins(a[i], b[i]))
            string_copyTwin (result[i], "Yes", 4);
        else
            string_copyTwin (result[i], "NO", 3);
    }

    return result;
}
//////////////////////////////////////////////////////////////////////////////

int addNumbers2 (float a, float b)
{
    return a + b;    
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

/////////////////////////////////////////////////////////////////

int string_legthLastLetters (char* string)
{
    int length;
    for(length = 0; string[length]; length++);
    return length;
}

char newString[4];
char* lastLetters (char* word)
{
    int length = string_legthLastLetters (word);
    newString[0] = word[length-1];
    newString[1] = ' ';
    newString[2] = word[length-2];
    newString[3] = 0;
    return newString;
}
/////////////////////////////////////////////////////////////////

static int numberBits[32];
int* getOneBits (int n, int* result_count)
{
    int index = 0;
    int result_index = 0;
    int firstIndex = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (firstIndex == 1)
            index++;

        if ((n>>i)&1)
        {
            if (firstIndex == 0)
            {
                firstIndex = 1;
                index = 1;
            }
            numberBits[result_index] = index;
            result_index++;
        }
    }
    *result_count = result_index;
    return numberBits;
}

int superPower (int z)
{
    
}

int changeAds (int base10)
{
    
}

char* newPassword (char* a, char* b)
{
   
}

int array_shortestSeries (char* str)
{
    
}

int perfectTeam (char* skills)
{
    
}

void string_reverseComplement (char* str)
{
    
}

char* dnaComplement (char* s)
{

}

int closedPaths (int number)
{
    
}

int maxMoves (char* s, char* t)
{
    
}

void sort_badNumbers (int badNumbers_count, int* badNumbers)
{
    
}

int goodSegment (int badNumbers_count, int* badNumbers, int lower, int upper)
{
    
}

int maxIndex (int s, int badIndex)
{
    
}

int minimumMoves (int arr1_count, int* arr1, int arr2_count, int* arr2)
{
    
}