
#include "coding.h"
#include "myArray.h"
#include "myString.h"
#include "complex.h"

int main ()
{
    //practice
    /*********************************************************************************************************************/

    // printf ("%c\n", string_searchFirstRepeatedChar ("kemal"));
    // printf ("%c\n", string_searchFirstRepeatedChar2 ("kemal"));


    //coding
    /********************************************************************************************************************/

    // int array[] = {1, 2, 3, 4, 5, 6, 4};
    // int arraySize = sizeof (array) / sizeof (array[0]);
    // printf ("%d\n", u8FindLast (arraySize, array, 4));

    // int result_size;
    // int* arr = vidPrintReverseInclusive (5, 2, &result_size);
    // array_print (arr, result_size);

    // int result_size;
    // int* arr = pu8PrintReverseExclusive (2, 5, &result_size);
    // array_print (arr, result_size);

    // printf ("%d\n", u32ClearBit (3, 32));

    // int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    // int arraySize = sizeof (array) / sizeof (array[0]);
    // printf ("%d\n", u32FindLongestConsecutiveOccurance (arraySize, array, 3));

    //int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    // int arraySize = sizeof (array) / sizeof (array[0]);
    // printf ("%d\n", s32FindMostOccuring (arraySize, array));
    
    // printf ("%d\n", u8IsPowerOfThree (0));

    // printf ("%d\n", vidPrintMaxZeros(197));

    // unsigned int pu32Output;
    // printf ("%x\n", u8RightCircularShift (0xaabbccdd, 40, &pu32Output));
    // printf ("%x\n", pu32Output);

    // printf ("%d\n", u8CalculateHeatingTime (35));

    // int arr[] = {1, 3, 8, 12, 16, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int arrSize = sizeof (arr) / sizeof (arr[0]);
    // array_print (arr, arrSize);
    // vidReverseArray(arrSize, arr);
    // array_print (arr, arrSize);

    // int result = checkEvenOrOdd (7);
    // printf ("%d\n", result);

    // printf ("%d\n", u8CountOnes(0x89F00123));

    // int arr1[] = {1, 3, 8, 12, 16, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int arr1Size = sizeof (arr1) / sizeof (arr1[0]);
    // int result_count;
    // int* result = isPower (arr1Size, arr1, &result_count);
    // array_print (arr1, arr1Size);
    // array_print (result, result_count);

    // int maxXOR = maximum_XOR (10, 15);
    // printf ("%d\n", maxXOR);

    // printf ("%d\n", fourthBit (23));

    // int prices[] = {2, 5, 1, 4};
    // int prices_count = sizeof(prices) / sizeof(prices[0]); 
    // printf ("%ld\n", calculateAmount (prices_count, prices));

    // fizzBuzz (50);

    // printf ("%d\n", kkminNum (3, 5, 5));

    // char str1[] = "adbc";
    // char str2[] = "abcd";
    // char str3[] = "cbad";
    // char str4[] = "adbc";
    // char str5[] = "adbc";
    // char* firstString[] = {str1, str2, str5};
    // char* secondString[] = {str3, str4};
    // int result_count;
    // char** result = twins ( 2, firstString, 2, secondString, &result_count);
    // string_printtwins (result, result_count);

    // int sum = addNumbers2 (1.1, 3.89);
    // printf ("%d\n", sum);

    // int arr1[] = {3, 13, 4, 11, 9, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int sum = arraySum ( 5, arr1);
    // printf ("%d \n", sum);

    // char* string = lastLetters ("bat");
    // string_print (string); 

    // int result_count;
    // int* arr = getOneBits (37, &result_count);
    // array_print (arr, result_count);

    // string_print (newPassword ("hackerrank", "tree"));

    //  char skills[] = "pcmbzpcmbz";
    // // char skills[] = "mppzbmbpzcbmpbmczcz";
    // printf ("%d\n", perfectTeam (skills));

    // char str[] = "GTCAG";
    // string_print (dnaComplement (str));

    // int badNumbers[] = {37, 7, 22, 15, 49, 60};
    // int badNumbers_count = sizeof (badNumbers)/sizeof(int);
    // printf ("%d\n", goodSegment (badNumbers_count, badNumbers, 3, 48));

    // int arr1[] = {123, 543};
    // int arr1_count = sizeof(arr1)/sizeof(arr1[0]);
    // int arr2[] = {321, 279};
    // int arr2_count = sizeof(arr2)/sizeof(arr2[0]);
    // printf ("%d\n", minimumMoves (arr1_count, arr1, arr2_count, arr2));

    // printf ("%d\n", changeAds (30));

    // printf ("%d\n", maxIndex (4, 6));

    // printf ("%d\n", closedPaths (649578));

    // char s[] = "bcbbc";
    // char t[] = "b";
    // printf ("%d\n", maxMoves (s, t));

    // printf ("%d\n", superPower(27));

    complex number1 = {2, 1};
    complex number2 = {5, 6};
    complex number;
    number = complexAdd (number1, number2);
    number = complexSubtract (number1, number2);
    number = complexMultiply (number1, number2);
    number = complexDivide (number1, number2);
    complexPrint (number);    
}