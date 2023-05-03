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
    int u32ItemToFindIndex = -1;
    for (unsigned int index = 0; index < au32Array_count; index++)
    {
        if (au32Array[index] == u32ItemToFind)
            u32ItemToFindIndex = index;
    }
    return u32ItemToFindIndex;
}

int au8OutputArray1[256];
int* vidPrintReverseInclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{
    if (u8UpprNumber <= u8LowerNumber)
    {
        *result_size = 2;
        au8OutputArray1[0] = 0xFF;
        au8OutputArray1[1] = 0xFF;
        return au8OutputArray1;
    }

    *result_size = u8UpprNumber - u8LowerNumber + 1;
    for (unsigned int index = 0; index < *result_size; index++)
    {
        au8OutputArray1[index] = u8UpprNumber--;
    }
    return au8OutputArray1;
}

int u8OutputArray2[256];
int* pu8PrintReverseExclusive (int u8LowerNumber, int u8UpprNumber, int* result_size)
{
    if (u8UpprNumber <= u8LowerNumber)
    {
        *result_size = 2;
        u8OutputArray2[0] = 0xFF;
        u8OutputArray2[1] = 0xFF;
        return u8OutputArray2; 
    }

    *result_size = u8UpprNumber - u8LowerNumber - 1;
    for (unsigned int index = 0; index < *result_size; index++)
    {
        u8OutputArray2[index] = --u8UpprNumber;
    }
    return u8OutputArray2;
}

unsigned int u32ClearBit (unsigned int u32Number, unsigned int u8BitNumber)
{
    if (u8BitNumber >= 0 && u8BitNumber <= 31)
    {
        u32Number = u32Number & (~(1<<u8BitNumber));
    }
    return u32Number;
}

int u32FindLongestConsecutiveOccurance (int as32Array_count, int* as32Array, int u32Number)
{
    unsigned int max = 0;
    unsigned int counter = 0;
    for (unsigned int index = 0; index < as32Array_count; index++)
    {
        if (as32Array[index] == u32Number)
            counter++;
        else
            counter = 0;

        if (max < counter)
            max = counter;
    }

    return max;
}

int s32FindMostOccuring (int as32Array_count, int* as32Array)
{
    if (as32Array_count == 0)
        return 0;

    signed int longest = 1;
    signed int counter = 1;
    int number = as32Array[0];
    for (unsigned int index = 0; index < as32Array_count-1; index++)
    {
        if (as32Array[index] == as32Array[index+1])
            counter++;
        else
            counter = 1;

        if (longest <= counter)
        {
            longest = counter;
            number = as32Array[index];
        }
    }
    return number;
}

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

int vidPrintMaxZeros (unsigned char u8Number)
{
    int counter = 0;
    int max = 0;
    int firstOneFlag = 0;
    for (int index = 0; index < 8; index++)
    {
        if (((u8Number>>index) & 1) == 1 && firstOneFlag == 0)
        {
            firstOneFlag = 1;
            
        }
        else if (((u8Number>>index) & 1) == 0 && firstOneFlag == 1)
        {
            counter++;
        }
        if (((u8Number>>index) & 1) == 1 && firstOneFlag == 1)
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

    *pu32Output = (u32InputNumber>>u8NumberOfShifts) | (u32InputNumber<<(32 - u8NumberOfShifts));
    return 0;
}

unsigned int u8CalculateHeatingTime (unsigned int u8WaterTempature)
{
    if (0 <= u8WaterTempature && u8WaterTempature <= 30)
        return 7;
    else if (30 < u8WaterTempature && u8WaterTempature <= 60)
        return 5;
    else if (60 < u8WaterTempature && u8WaterTempature <= 90)
        return 3;
    else if (90 < u8WaterTempature && u8WaterTempature <= 100)
        return 1;
    else if (100 < u8WaterTempature)
        return 0;
}

void swap_int (int* number1, int* number2)
{
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void vidReverseArray(int as32ArraySize, int* as32Array)
{
    for (int i = 0; i < as32ArraySize/2; i++)
    {
        swap_int (as32Array+i, as32Array+as32ArraySize-i-1);
    }
}

int checkEvenOrOdd (unsigned int u32InputNumber)
{
    return u32InputNumber&1;
}

int u8CountOnes(unsigned int u32InputNumber)
{
    int counter = 0;
    for (int i = 0; i < 32; i++)
    {
        counter += (u32InputNumber>>i) & 1;
    }
    return counter;
}

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
    int* result = malloc ((*result_count) * sizeof(int));
    for (int i = 0; i < *result_count; i++)
    {
        result[i] = isPowerOf2 (arr[i]);
    }
    return result;
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

            if (i == a)
                max = i ^ j;

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
    int min = prices[0];
    long sum = prices[0];
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
        } 

        sum += prices[i];
    }
    return sum;
}

void fizzBuzz (int n)
{
    for (int i = 1; i <= n; i++)
    {
        if ((i%3==0) && (i%5==0))
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
    if (kellyDaily < samDaily)
        return -1;

    int days = 0;
    int sam = difference;
    int kelly = 0;

    while (kelly <= sam)
    {
        sam += samDaily;
        kelly += kellyDaily;
        days++;
    }
    return days;
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

int addNumbers2 (float a, float b)
{
    return a + b;
}

int arraySum ( int numbers_count, int* numbers)
{
   int sum = 0;
   for (int i=0; i < numbers_count; i++)
   {
        sum += numbers[i];
   }
   return sum;
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

void swap_char2 (char* character1, char* character2)
{
    char temp = *character1;
    *character1 = *character2;
    *character2 = temp;
}

void sort_even (char* str)
{
    unsigned int strLength = 0;
    for (strLength = 0; str[strLength]; strLength++);

    int completeSortFlag = 0;
    
    for (unsigned int i = 0; i < strLength && completeSortFlag == 0; i+=2)
    {
        completeSortFlag = 1;

        for (unsigned int j = i+2; j < strLength; j+=2)
        {
            if (str[i] > str[j])
            {
                swap_char2 (str+i, str+j);
                completeSortFlag = 0;
            }
        } 
    }
}

void sort_odd (char* str)
{
    unsigned int strLength = 0;
    for (strLength = 0; str[strLength]; strLength++);

    int completeSortFlag = 0;
    
    for (unsigned int i = 1; i < strLength && completeSortFlag == 0; i+=2)
    {
        completeSortFlag = 1;

        for (unsigned int j = i+2; j < strLength; j+=2)
        {
            if (str[i] > str[j])
            {
                swap_char2 (str+i, str+j);
                completeSortFlag = 0;
            }
        } 
    }
}

int string_comparetwins (char* str1, char* str2)
{
    unsigned int str1Length;
    unsigned int str2Length;

    for (str1Length = 0; str1[str1Length]; str1Length++);
    for (str2Length = 0; str2[str2Length]; str2Length++);

    if (str1Length != str2Length)
        return 0;

    for (unsigned int index = 0; str1[index]; index++)
    {
        if (str1[index] != str2[index])
            return 0;
    }

    return 1;
}

void string_copytwins (char* strCopy, char* strOriginal, int size)
{
    unsigned int index = 0;
    for (index = 0; index < size; index++)
    {
        strCopy[index] = strOriginal[index];
    }
    strCopy[index] = 0;
}

void string_printtwins (char** str, int size)
{
    for (unsigned int index = 0; index < size; index++)
    {
        string_print (str[index]);
    }
}

unsigned int string_lengthpassward (char* str)
{
    unsigned int i;
    for (i = 0; str[i]; i++);
    return i;
}

char* newPassword (char* a, char* b)
{
    unsigned int aLength = string_lengthpassward (a);
    unsigned int bLength = string_lengthpassward (b);
    unsigned int cLength = aLength + bLength + 1;
    char* c = (char*) malloc (cLength * sizeof(char));
    unsigned int aIndex = 0;
    unsigned int bIndex = 0;
    unsigned int cIndex = 0;
    for ( ; cIndex < cLength-1; )
    {
        if (aIndex < aLength)
        {
            c[cIndex] = a[aIndex]; 
            cIndex++;
            aIndex++;
        }
     
        if (bIndex < bLength)
        {
            c[cIndex] = b[bIndex]; 
            cIndex++;
            bIndex++;
        }
    }
    c[cIndex] = 0;
    return c;
}

void sort (char* str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        for (unsigned int j = i+1; str[j]; j++)
        {
            if (str[i] > str[j])
                swap_char2 (str+i, str+j);
        }
    }
}

int array_shortestSeries (char* str)
{
    unsigned int counter = 1;
    unsigned int shortest;
    unsigned int firstChain = 0;

    for (unsigned int index = 0; str[index]; index++)
    {
        if (str[index] == str[index+1])
        {
            counter++;
        }
        else
        {
            if (firstChain == 0)
                shortest = counter;

            if (shortest > counter)
                shortest = counter;

            firstChain = 1;

            counter = 1;
        }
    }

    return shortest;
}

int perfectTeam (char* skills)
{
    sort (skills);
    return array_shortestSeries (skills);
}

void string_reverseComplement (char* str)
{
    unsigned int length = string_lengthpassward (str);
    for (unsigned int index = 0; index < length/2; index++)
    {
        swap_char2 (str+index, str+length-index-1);
    }
}

char* dnaComplement (char* s)
{
    for (unsigned int index = 0; s[index]; index++)
    {
        string_reverseComplement (s);

        if (s[index] == 'A')
            s[index] = 'T';
        else if (s[index] == 'T')
            s[index] = 'A';
        else if (s[index] == 'C')
            s[index] = 'G';
        else if (s[index] == 'G')
            s[index] = 'C';
    }
    return s;
}

int closedPaths (int number)
{
    int digit;
    int sum = 0;
    while (number)
    {
        digit = number % 10;

        if (digit == 0 || digit == 4 || digit == 6 || digit == 9)
            sum += 1;
        else if (digit == 8)
            sum += 2;

        number /= 10;
    }
    return sum;
}

int string_shiftLeft (char* s, int firstDeletedIndex, int lastDeletedIndex)
{
    int length = string_lengthpassward (s);
    int remainlenght = length - lastDeletedIndex - 1;
    int remainIndex = lastDeletedIndex;
    int counter = 0;
    unsigned int index;
    for (index = firstDeletedIndex; remainlenght; index++)
    {
        remainIndex++;
        s[index] = s[remainIndex];
        remainlenght--;
        counter++;
    }
    s[index] = 0;
    return counter;
}

int string_compareMaxMove (char* s, char* t)
{
    for (unsigned int index = 0; t[index]; index++)
    {
        if (s[index] != t[index])
            return 0;
    }
    return 1;
}

signed int string_searchStringLToR (char* s, char* t)
{
    for (unsigned int index = 0; s[index]; index++)
    {
        if (string_compareMaxMove(s+index, t))
            return index;
    }
    return -1;
}

signed int string_searchStringRTOL (char* s, int sLength, char* t)
{
    for (unsigned int index = sLength-1; index >= 0; index--)
    {
        if (string_compareMaxMove(s+index, t))
            return index;
    }
    return -1;
}

int maxMoves (char* s, char* t)
{
    int sLength = string_lengthpassward (s);
    int tLength = string_lengthpassward (t);

    char* sLToR = (char*) malloc (sLength*sizeof(char));
    char* sRToL = (char*) malloc (sLength*sizeof(char));

    string_copytwins (sLToR, s, sLength);
    string_copytwins (sRToL, s, sLength);

    int LToRDeletionSum = 0;
    signed int LToRIndex = string_searchStringLToR (sLToR, t);
    while (LToRIndex >= 0)
    {
        LToRDeletionSum += string_shiftLeft (sLToR, LToRIndex, LToRIndex + tLength - 1);
       LToRIndex = string_searchStringLToR (sLToR, t); 
    }

    int RToLDeletionSum = 0;
    signed int RToLIndex = string_searchStringRTOL ( sRToL,  sLength, t);
    while (RToLIndex >= 0)
    {
        RToLDeletionSum += string_shiftLeft (sRToL, RToLIndex, RToLIndex + tLength - 1);
       RToLIndex = string_searchStringRTOL ( sRToL,  sLength, t); 
    }
    
    return (LToRDeletionSum > RToLDeletionSum) ? LToRDeletionSum : RToLDeletionSum;
}


void sort_badNumbers (int badNumbers_count, int* badNumbers)
{
    for (unsigned int i = 0; i < badNumbers_count; i++)
    {
        for (unsigned int j = i+1; j < badNumbers_count; j++)
        {
            if (badNumbers[i] > badNumbers[j])
                swap_int (badNumbers+i, badNumbers+j);
        }
    }
}

int goodSegment (int badNumbers_count, int* badNumbers, int lower, int upper)
{
    sort_badNumbers (badNumbers_count, badNumbers);
    int counter = 0;
    int max = 0;
    int badIndex = 0;

    for (unsigned int index = lower; index <= upper; index++)
    {
        if (index != badNumbers[badIndex])
        {
            counter++;
        }
        else
        {
            if (max < counter)
                max = counter;

            counter = 0;
            badIndex++;
        }
    }

    return max;
}

int maxIndex (int s, int badIndex)
{
    int badImportance = 0;
    int sum = 0;

    for (unsigned int index = 1; sum <= badIndex; index++)
    {
        sum += index;
        if (badIndex == sum)
        {
            badImportance = 1;
        }
    }

    if (badImportance)
    {
        sum = 0;
        for (unsigned int index = 2; index <= s; index++)
        {
            sum += index;
        }
    }
    else
    {
        sum = 0;
        for (unsigned int index = 1; index <= s; index++)
        {
            sum += index;
        }
    }

    return sum;
}

int minimumMoves (int arr1_count, int* arr1, int arr2_count, int* arr2)
{
    int numberCopy1;
    int numberCopy2;
    int digit1;
    int digit2;
    int counter = 0;

    for (unsigned int index = 0; index < arr1_count; index++)
    {
        numberCopy1 = arr1[index];
        numberCopy2 = arr2[index];

        while (numberCopy1 || numberCopy2)
        {
            digit1 = numberCopy1 % 10;
            digit2 = numberCopy2 % 10;

            // while (digit1 > digit2)
            // {
            //     digit1--;
            //     counter++;
            // }

            // while (digit1 < digit2)
            // {
            //     digit1++;
            //     counter++;
            // }

            if (digit1 > digit2)
                counter += (digit1 - digit2);

            if (digit2 > digit1)
                counter += (digit2 - digit1);

            numberCopy1 = numberCopy1 / 10;
            numberCopy2 = numberCopy2 / 10;
        }
    }

    return counter;
}