
#include "coding.h"
#include "myArray.h"

int main ()
{
    //practice
    /*********************************************************************************************************************/

    // printf ("%c\n", string_searchFirstRepeatedChar ("kemal"));
    // printf ("%c\n", string_searchFirstRepeatedChar2 ("kemal"));


    //coding
    /********************************************************************************************************************/
    
    //printf ("%d\n", u8IsPowerOfThree (15));

    // int arr1[] = {1, 3, 8, 12, 16, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int arr1Size = sizeof (arr1) / sizeof (arr1[0]);
    // int result_count;
    // int* result = isPower (arr1Size, arr1, &result_count);
    // array_print (arr1, arr1Size);
    // array_print (result, result_count);

    // int arr1[] = {3, 13, 4, 11, 9, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int sum = arraySum ( 5, arr1);
    // printf ("%d \n", sum);

    // int maxXOR = maximum_XOR (10, 15);
    // printf ("%d\n", maxXOR);

    // int sum = addNumbers2 (1.1, 3.89);
    // printf ("%d\n", sum);

    // int result = checkEvenOrOdd (1);
    // printf ("%d\n", result);

    // printf ("%d\n", u8CountOnes(3));

    // printf ("%d\n", vidPrintMaxZeros(197));

    // int arr[] = {1, 3, 8, 12, 16, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int arrSize = sizeof (arr) / sizeof (arr[0]);
    // array_print (arr, arrSize);
    // vidReverseArray(arrSize, arr);
    // array_print (arr, arrSize);

    // int result_size;
    // int* arr = pu8PrintReverseExclusive (2, 5, &result_size);
    // array_print (arr, result_size);

    // char* string = lastLetters ("bat");
    // string_print (string);

    // int prices[] = {2, 5, 1, 4};
    // int prices_count = sizeof(prices) / sizeof(prices[0]); 
    // printf ("%ld\n", calculateAmount (prices_count, prices));

    // char str[80] = "This is - www.tutorialspoint.com - website";
    // const char s[2] = "-";
    // char *token;
    // /* get the first token */
    // token = strtok(str, s);
   
    // /* walk through other tokens */
    // while( token != NULL ) {
    //     printf( " %s\n", token );
        
    //     token = strtok(NULL, s);
    // }

    // fizzBuzz (50);

    // printf ("%d\n", minNum (3, 5, 5));

    // int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3};
    // int arraySize = sizeof (array) / sizeof (array[0]);
    // printf ("%d\n", s32FindMostOccuring (arraySize, array));

    // int array[] = {1, 2, 3, 4, 5, 6, 4};
    // int arraySize = sizeof (array) / sizeof (array[0]);
    // printf ("%d\n", u8FindLast (arraySize, array, 4));  

    // int array[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    // int arraySize = sizeof (array) / sizeof (array[0]);
    // printf ("%d\n", u32FindLongestConsecutiveOccurance (arraySize, array, 3));

    // printf ("%d\n", u32ClearBit (10, 1));

    // int badNumbers[] = {37, 7, 22, 15, 49, 60};
    // int n = sizeof(badNumbers) / sizeof(badNumbers[0]);
    // array_print (badNumbers, n);
    // printf ("%d\n", partition (badNumbers, 0, n-1));
    // array_print (badNumbers, n);

    // printf ("%d\n", superPower(7));

    // printf ("%d\n", fourthBit (23));

    // int result_count;
    // int* arr = getOneBits (161, &result_count);
    // array_print (arr, result_count);

    // printf ("%d\n", changeAds (30));

    char str1 = "abcd";
    char str2 = "abcd";
    char str3 = "cbad";
    char str4 = "adbc";
    char firstString[][10] = {str1, str2};
    char secondString[][10] = {str3, str4};
    int result_count;
    char** result = twins ( 2, firstString[][10], 2, secondString[][10], result_count);
    
}