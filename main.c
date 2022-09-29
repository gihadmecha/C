
#include "myMaths.h"
#include "myArray.h"
#include "myString.h"

int main ()
{
    printf ("sum of 2 numbers = %lf\n", addTwoNumbers (  3.4, 2.6));
    printf ("sum of numbers between 2 numbers = %d \n", addIntegersBetweenTwoIntegers (3, -9));
    printf ("multiplication result = %d\n", multiplyTwoNumbers (  3, 9));
    printf ("reminder = %d\n", reminder(-9, 4));
    printf ("power result = %lf\n", power (  6.5, 9));
    printf ("factorial = %lf\n", factorial (60));
    
    if (IsPrime (17.3))
        printf ("prime !!\n");
    else
        printf ("not prime !!\n");
    

    if (IsPerfectSquare (9.9))
        printf ("perfect square !!\n");
    else
        printf ("not perfect square !!\n");

    
    if (IsBaseOf2 (8.8))
        printf ("base of 2 !!\n");
    else
        printf ("not base of 2\n");


    printf ("sum of digits = %d\n", sumDigits (-145.145)); 

    double circumference;
    printf ("circle area = %lf\n", circle ( 7, &circumference));
    printf ("circle circumference = %lf\n", circumference);

    printf ("reversed number = %lf\n", reverseNumber (  -1243.763));
    
    printf ("tne number of ones in the binary presenttion = %u\n", onesCounter (5));

    unsigned int reversed = reverseBinaryPresentation ( 149);
    printf ("integer of reversed binary presentation = %u\n", reversed);

    printf ("sum without loop = %lf\n", sumFromNumberToAnotherWithoutLoop (  1, 100));

    printf ("set bit result = %u\n",   setBit (   5, 1));
    printf ("clear bit result = %u\n", clearBit (  5, 0));
    printf ("toggle bit result = %u\n",toggleBit (    5, 2));
    printf ("read bit result = %u\n", readBit (  5, 3));

    printf ("max number of zeroes = %d\n", maxNumberOfZeroes (296384));

    printBinaryPresentationOfNumber (5);


    printf ("\n\n");
    /////////////////////////////////////////////////////////////////////////////////

    signed int arr1[] = {  2, 1, 2, 4, 3, 1, 4, 5, 3, 3,3, 6};
    signed int arr2[100];
    signed int arr3[0];
    signed int arr4[] = { 9, 8, 1};
    signed int arr5[] = {2, 7, 7, 7, 4, 2};
    signed int arr6[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    signed int arr7[] = {1,2,2,3,3,3,3,4,4,4,4,4,3,3,3};
    signed int arr8[] = {1,2,3,4,5,6, 7, 8,9};
    signed int arr9[] = {11,12,13,14,15,16};
    signed int arr10[20];
    signed int arr11[] = { 1, 2, 3, 4, 0, 5, 6, 7, 9, 10, 0, 11, 12, 13, 14, 15};
    signed int arr12[] = {10,1,5,3,6,8,7,2};
    signed char arr13[] = { 4, 9, 3, 9, 3, 1, 9 , 2, 9, 0, 1};
    signed int arr14[] = { 1, 2, 2, 4, 4, 4, 4, 5, 6, 6, 6, 7};
    signed int arr15[] = {1, 2, 3, 10, 11, 12, 13, 20, 31, 32};
    signed int arr16[] = {1,2,4,66,2,1,500,66,7,7,500};
    signed int arr17[] = {-7, -8, 0, 1, 100, 1000};
    signed int arr18[] = { 40, 2, 1, 43, 3, 65, 0, -1, 58, 3, 42, 4};
    signed int arr19[] = { 40, 2, 1, 43, 3, 65, 0, -1, 58, 3, 42, 4};
    signed int arr20[] = { 40, 2, 1, 43, 3, 65, 0, -1, 58, 3, 42, 4};
    signed int arr21[100];
    signed int arr22[101];
    unsigned int size1 = sizeof (arr1) / sizeof (arr1[0]);
    unsigned int size2 = sizeof (arr2) / sizeof (arr2[0]);
    unsigned int size4 = sizeof (arr4) / sizeof (arr4[0]);
    unsigned int size5 = sizeof (arr5) / sizeof (arr5[0]);
    unsigned int size6 = sizeof (arr6) / sizeof (arr6[0]);
    unsigned int size7 = sizeof (arr7) / sizeof (arr7[0]);
    unsigned int size8 = sizeof (arr8) / sizeof (arr8[0]);
    unsigned int size9 = sizeof (arr9) / sizeof (arr9[0]);
    unsigned int size10 = sizeof (arr10) / sizeof (arr10[0]);
    unsigned int size11 = sizeof (arr11) / sizeof (arr11[0]);
    unsigned int size12 = sizeof (arr12) / sizeof (arr12[0]);
    unsigned int size13 = sizeof (arr13) / sizeof (arr13[0]);
    unsigned int size14 = sizeof (arr14) / sizeof (arr14[0]);
    unsigned int size15 = sizeof (arr15) / sizeof (arr15[0]);
    signed int size16 = sizeof (arr16) / sizeof (arr16[0]);
    signed int size17 = sizeof (arr17) / sizeof (arr17[0]);
    signed int size18 = sizeof (arr18) / sizeof (arr18[0]);
    signed int size19 = sizeof (arr19) / sizeof (arr19[0]);
    signed int size20 = sizeof (arr20) / sizeof (arr20[0]);
    signed int size21 = sizeof (arr21) / sizeof (arr21[0]);
    signed int size22 = sizeof (arr22) / sizeof (arr22[0]);

    array_print ( arr1, size1);
    signed int number = -8;
    signed int numberIndex = array_search ( arr1, size1, number);
    if (numberIndex >= 0)
        printf ("the index of %d = %d\n", number, numberIndex);
    else
        printf ("%d not exist !!\n", number);

    signed int numberIndexSorted = array_sorted_search ( arr17, size17, number);
    if (numberIndex >= 0)
        printf ("the index Sorted of %d = %d\n", number, numberIndex);
    else
        printf ("%d not exist sorted !!\n", number);

    signed int lastNumberIndex = array_searchLastIndexOfNumber ( arr1, size1, number);
    if (lastNumberIndex >= 0)
        printf ("the last index of %d = %d \n", number, lastNumberIndex);
    else
        printf ("%d not exist !!\n", number);

    signed int max;
    signed int maxIndex;
    signed int min;
    signed int minIndex;
    array_print (arr1, size1);
    array_getMaxAndMin ( arr1, size1, &max, &maxIndex, &min, &minIndex);
    printf ("max = %d   index = %d\n", max, maxIndex);
    printf ("min = %d   index = %d\n", min, minIndex);

    unsigned int indexOfMax = array_getIndexOfMax ( arr1, size1);
    printf ("the index of the max = %d\n", indexOfMax);

    unsigned int indexOfMin = array_getIndexOfMin ( arr1, size1);
    printf ("the index of the min = %d\n", indexOfMin);

    signed int powerOf3Number = 3;
    if (IsPowerOf3 ( powerOf3Number) == 0)
    {
        printf ("%d is power of 3 !!\n", powerOf3Number);
    }
    else
    {
        printf ("%d is not power of 3 !!\n", powerOf3Number);
    }

    unsigned int sizeBetweenTwoNumbers = array_betweenTwoNumbers ( arr2, size2, 10, -19);
    printf ("an array between two numbers: ");
    array_print (arr2, sizeBetweenTwoNumbers);

    array_print (arr1, size1);
    signed int mostRepeatedNumber = array_mostRepeatedNumber ( arr1, size1);
    printf ("the most Repeated number = %d\n", mostRepeatedNumber);
    
    array_print (arr1, size1);
    signed int mostRepeatedNumber_oOfN = array_oOfN_mostRepeatedNumber ( arr1, size1);
    printf ("the most Repeated number O(n) = %d\n", mostRepeatedNumber_oOfN);

    printf ("mostRepeatedMono = %d\n", array_oOfN_mostRepeatedMono ( arr1, size1));
    array_print (arr1, size1);
    array_reverse (arr1, size1);
    array_print (arr1, size1);

    array_print (arr4, size4);
    array_print (arr5, size5);
    signed int swappedSize = array_swap ( arr4, arr5, size4, size5);
    array_print (arr4, swappedSize);
    array_print (arr5, swappedSize);

    array_print (arr1, size1);
    array_print (arr2, size2);
    signed int copedSize = array_copy ( arr1, arr2, size1, size2);
    array_print (arr1, copedSize);
    array_print (arr2, copedSize);

    signed int givenNumber = 3;
    array_print (arr6, size6);
    signed int longestChainOfNumber = array_longestChainOfNumber ( arr6, size6, givenNumber);
    printf ("the longest Chain of %d = %d\n", givenNumber, longestChainOfNumber);

    array_print (arr7, size7);
    signed int LongestConsecutive;
    signed int repeatedNumber = array_longestChain ( arr7, size7, &LongestConsecutive);
    printf ("the Longest Consecutive of %d = %d\n",  repeatedNumber,LongestConsecutive);

    array_print (arr15, size15);
    signed int longestSequenceChain = array_longestSequenceChain ( arr15, size15);
    printf ("the longest Sequence Chain = %d\n", longestSequenceChain);

    array_print (arr8, size8);
    array_print (arr9, size9);
    //array_print (arr10, size10);
    unsigned int merge1Size = array_merge1 ( arr8, arr9, arr10, size8, size9, size10);
    array_print (arr10, merge1Size);

    array_print (arr8, size8);
    array_print (arr9, size9);
    //array_print (arr10, size10);
    unsigned int merge2Size = array_merge2 ( arr8, arr9, arr10, size8, size9, size10);
    array_print (arr10, merge2Size);

    array_print (arr1, size1);
    signed int noOfPrimes = array_removePrime (arr1, size1);
    array_print (arr1, size1);
    printf ("no. of primes = %d\n", noOfPrimes);

    array_print ( arr14, size14);
    signed int outSize = array_removeRepeatedSortedNumbers ( arr14, arr10, size14, size10);
    array_print ( arr10, outSize);

    array_print (arr2, size2);
    signed int noOfNumbers = array_scan ( arr2, size2);
    array_print (arr2, noOfNumbers);

    array_print ( arr11, size11);
    array_zeroDetector ( arr11);
    array_print ( arr11, size11);

    signed int small;
    signed int big;
    signed int biggestDifference = array_biggestDifferenceBetweenTwoNumbers ( arr12, size12, &small, &big);
    printf ("the difference between %d and %d = %d\n", small, big, biggestDifference); 

    
    signed int noOfRepeats;
    signed char mostRepeatedChar = array_mostRepeatedChar ( arr13, 0, &noOfRepeats);
    printf ("no. of %d = %d\n", mostRepeatedChar, noOfRepeats);

    signed int* pointer1 = arr1;
    signed int* pointer2 = arr2;
    array_print (pointer1, size1);
    array_print (pointer2, size2);
    swap_Pointers ( &pointer1, &pointer2);
    array_print (pointer1, size2);
    array_print (pointer2, size1);

    for (signed int index = 0; index < 20; index++)
    {
        arr2 [index] = fibonacci (index + 1);
    }
    array_print (arr2, 20);

    printf ("not twice repeated number = %d\n", array_oOfN_findNotTwiceRepeatedNumber ( arr16, size16));

    printf("\n");
    array_print (arr16, size16);
    //signed int copyWithoutRepeatedNumbersPointer[];  ??
    signed int* copyWithoutRepeatedNumbersPointer;
    signed int copyWithoutRepeatedNumbersSize = array_oOfN_copyWithoutRepeatedNumbers ( arr16, &copyWithoutRepeatedNumbersPointer, size16);
    array_print (copyWithoutRepeatedNumbersPointer, copyWithoutRepeatedNumbersSize);
    printf("\n");

    array_print ( arr18, size18);
    array_bubbleSort ( arr18, size18);
    array_print ( arr18, size18);

    printf ("\n");
    array_print ( arr19, size19);
    array_selectionSort ( arr19, size19);
    array_print ( arr19, size19);
    printf ("\n");

    printf ("\n");
    array_print ( arr20, size20);
    array_countingSort ( arr20, size20);
    array_print ( arr20, size20);
    printf ("\n");

    for (signed int index = 0; index < size21; index++)
    {
        arr21[index] = index;
    }

    array_print ( arr21, size21);
    printf ("missed number = %d\n", array_missedNumber ( arr21, size21));
    
    for (signed int index = 0; index < size22; index++)
    {
        arr22[index] = index + 1;
    }
    arr22[100] = 7;

    array_print ( arr22, size22);
    printf ("repeated number = %d\n", array_repeatedNumber ( arr22, size22));
    
    signed short numberBeforeSwapBytes = 0xFE20;
    printf ("numberAfterSwapBytes = %X\n", swap_2bytesofShort ( &numberBeforeSwapBytes));
    ////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////

    unsigned char str1[] = "Ahmed salem";
    unsigned char str2[] = "omar";
    unsigned char str3[] = "ali";
    unsigned char str4[] = "sarah";
    unsigned char str5[5];
    unsigned char str6[] = "kffglj";
    unsigned char str7[] = " I   work as an embedded software engineer for 3 years ";
    unsigned char str8[] = "12 23 21";
    unsigned char str9[6];
    unsigned char str10[] = " ali kamel ahmed  mohamed  ali";
    unsigned char str11[100];
    unsigned char str12[] = "hi,5,hello,12";
    unsigned char str13[0];

    signed int str2Size = sizeof (str2) / sizeof (str2[0]);
    signed int str11Size = sizeof (str11) / sizeof (str11[0]);

    string_print (str1);
    printf ("%d\n", string_search(str1, 'm'));
    printf ("%d\n", string_searchLastIndexOfCharacter(str1, 's'));
    printf ("%d\n", string_length (  str1));

    string_print (str1);
    string_reverse (str1);
    string_print (str1);

    string_print (str1);
    string_print (str2);
    string_copy (str2, str1, str2Size);
    string_print (str1);
    string_print (str2);

    printf ("%c\n", string_mostRepeatedCharacter ( str1));


    string_print (str3);
    string_print (str4);
    string_swap1 ( str4, str3);
    string_print (str3);
    string_print (str4);

    printf ("\n");

    string_print (str3);
    string_print (str4);
    string_swap2 ( str4, str3);
    string_print (str3);
    string_print (str4);
    
    printf ("\n");

    string_scan ( str5, 5);
    string_print ( str5);

    if ( string_IsMirror ( str6))
        printf ("Mirror !!\n");
    else
        printf ("not Mirror !!\n");


    printf ("\n");

    string_print (str7);
    string_reverseWordsInSentence (str7);
    string_print (str7);

    printf ("\n");

    printf("%s\n", string_triangle (str8) );

    printf ("\n");

    string_print (str9);
    string_floatToString ( str9, 6, -3.45);
    string_print (str9);

    printf ("\n");
    string_print ("ali kamel ahmed  mohamed  ali");
    string_replace ( "ali kamel ahmed  mohamed  ali", "ali", "ayman", str11, str11Size);
    string_print (str11);

    printf ("\n");

    printf ("%d\n", string_stringToInt ( "0"));

    printf ("\n");

    printf ("%d\n", array_charArrayToInt ( "-12", 3));


    printf ("\n");

    string_printWordNumberOftimesAsTheNumberAfterIt( "hi,5,hello,12");

    printf ("\n");

    string_print (str11);
    str11Size = string_length (str11);
    string_longestWord (" mohamed ahmed khalad  ", str11, str11Size);
    string_print (str11);
    printf ("%d\n", string_longestWordSize (" mohamed ahmed khalad  ") );
    printf ("\n");

    printf ("%c\n", string_firstRepeatedCharacter ("e"));

    printf ("%c\n", string_oOfN_firstRepeatedCharacter ("emme"));

    unsigned char str20[100] = {0};
    string_print ("ahmed selem kamel");
    string_oOfN_copyWithoutRepeatedCharacters ( str11, "ahmed selem kamel", str11Size);
    string_print (str11);
}