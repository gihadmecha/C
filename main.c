
#include "myArray.h"
#include "myString.h"


int main()
{
    signed int arr[] = { 5, 2, 5, 4, 4, 1, 2, 1, 1, 6, 1};
    signed int ar3[] = { 15, 12, 15, 14, 14, 11, 12, 11, 11, 16, 11, 22, 25, 54, 14};
    signed int ar4[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    signed int ar5[] = {1,2,2,3,3,3,3,4,4,4,4,4,3,3,3};
    signed int ar6[] = { 1,2,3,4,5,6,7};
    signed int ar7[] = { 11,12,13,14,15,16,17,18,19,20};
    signed int ar8[] = { 5, 2, 5, 4, 4, 1, 2, 1, 1, 6, 1};
    signed int ar9[] = { 5,8,9,0,1,2,3,0,5,6,7,8,2,9,1};
    signed int ar10[] = {10,1,5,3,6,8,7,2};
    unsigned char ar11[] = {'a', 's','d', 'c','f','d','l','d', 'j','r','d', 'k'}; 
    signed int ar12[] = { 1, 2, 3, 4, 9, 10, 11, 15, 16, 17, 18, 22, 23};
    signed int ar13[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 3, 4, 5, 6, 7, 8, 9, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 5, 6, 7, 8};
    signed int ar14[] = {1,2,2,3,3,3,3,4,4,4,4,4,5,5,5};
    signed int ar15[] = { 3, 4, -100, 50, 1, -10, 200, 4, -6};
    signed int ar2[100];

    unsigned char str[] = "ahmed";
    unsigned char str1[] = "ggiHad mohamed"; 
    unsigned char str2[] = "gihad ";
    unsigned char str3[] = " gihad  ali 1 2 fksl mohAmed";
    unsigned char str5[] = "-2987";
    unsigned char str6[] = "giHamd mohamed";
    unsigned char str4[100];

    unsigned int arrSize = sizeof(arr) / sizeof(arr[0]);
    unsigned int ar2Size = sizeof(ar2) / sizeof(ar2[0]);
    unsigned int ar3Size = sizeof(ar3) / sizeof(ar3[0]);
    unsigned int ar4Size = sizeof(ar4) / sizeof(ar4[0]);
    unsigned int ar5Size = sizeof(ar5) / sizeof(ar5[0]);
    unsigned int ar6Size = sizeof(ar6) / sizeof(ar6[0]);
    unsigned int ar7Size = sizeof(ar7) / sizeof(ar7[0]);
    unsigned int ar8Size = sizeof(ar8) / sizeof(ar8[0]);
    unsigned int ar9Size = sizeof(ar9) / sizeof(ar9[0]);
    unsigned int ar10Size = sizeof(ar10) / sizeof(ar10[0]);
    unsigned int ar11Size = sizeof(ar11) / sizeof(ar11[0]);
    unsigned int ar12Size = sizeof(ar12) / sizeof(ar12[0]);
    unsigned int ar13Size = sizeof(ar13) / sizeof(ar13[0]);
    unsigned int ar14Size = sizeof(ar14) / sizeof(ar14[0]);
    unsigned int ar15Size = sizeof(ar15) / sizeof(ar15[0]);






    double sum = addTwoNumbers(1.25, 0.5);
    printf("Ans = %lf \n", sum);

    double max = getMax();
    printf("Ans = %lf \n", max);
    
    double min = getMin();
    printf("Ans = %lf \n", min);

    double add = addNumbers();
    printf("Ans = %lf \n", add);

    double multiply = multiplyTwoNumbers(-3.5, 2);
    printf("Ans = %lf \n", multiply);

    signed int rem = reminder(-4, -8);
    printf("Ans = %d \n", rem);

    double pow = power(-4, -8.8);
    printf("Ans = %lf \n", pow);

    double fact = factorial( -69);
    printf("Ans = %lf \n", fact);

    int primeCheck = IsPrime( 7.5); 
    if (primeCheck)
    {
        printf("prime !! \n");
    }
    else
    {
        printf("not prime !! \n");
    }

    int perfectSquareCheck = IsPerfectSquare(225); 
    if (perfectSquareCheck)
    {
        printf("perfect square !! \n");
    }
    else
    {
        printf("not perfect square !! \n");
    }

    int BaseOf_2 = IsBaseOf_2( -16); 
    if (BaseOf_2)
    {
        printf("Base Of 2 !! \n");
    }
    else
    {
        printf("not Base Of 2 !! \n");
    }

    unsigned int digitsSum = sumDigits ( -754.237);
    printf("Ans = %u \n", digitsSum);

    double evenSum = addEVenNumbers ( );
    printf("Ans = %lf \n", evenSum);

    unsigned int equal =  poster ( -28.837);
    printf("Ans = %u \n", equal);

    signed long long int sumBetween = addIntegersBetweenTwoNumbers ( 20, 2.2);
    printf("Ans = %lld \n", sumBetween);

    double circumference;
    double area = circle( -8.7, &circumference);
    printf("the area = %lf \n", area);
    printf("the circumference = %lf \n", circumference);

    char character =  charExample ( -28.77, 'J');
    printf("the character is: %c \n", character);

    double reversed = reverseNumber ( -2567.314);
    printf("reversed = %lf \n", reversed);
    
    unsigned int countOnes = NumberOfOnes ( -1);
    printf("Number Of Ones = %u \n", countOnes);

    printBinaryPresentationOfNumber ( -1);

    unsigned char reversedBinary = reverseBinaryPresentation ( 5);
    printf("reversed Binary = %d \n", reversedBinary);

    unsigned long int bit = BitwiseOperation ( 4, 3, 5);
    printf("bit = %d \n", bit);

    unsigned int maxZeroes = maxNumberOfZeroes ( 296384);
    printf("maxZeroes = %d \n", maxZeroes);

    unsigned long int ans = xor ( 2, 1100);
    printf("Ans = %llu \n", ans);







    array_print( arr, 5);

    signed int elementIndex = array_search( arr, 5 , 5);
    if ( elementIndex >= 0)
    {
        printf("element: %u  \n", elementIndex);
    }
    else
    {
        printf("not exist !! \n");
    }

    signed int elementLastIndex = array_searchlastIndex( arr, 5 , 5);
    if ( elementLastIndex >= 0)
    {
        printf("last index: %d  \n", elementLastIndex);
    }
    else
    {
        printf("not exist !! \n");
    }

    signed int maxValue = array_max( arr,  5);
    printf("the biggest element: %d  \n", maxValue);

    signed int minValue = array_min( arr,  5);
    printf("the smallest element: %d  \n", minValue);

    signed int mostRepeatedElement = array_mostRepeated( arr,  arrSize);
    printf("the Most Repeated Element: %d  \n", mostRepeatedElement);

    signed int mostRepeatedElement_2 = array_mostRepeated_2( ar15,  ar15Size);
    printf("the Most Repeated Element 2: %d  \n", mostRepeatedElement_2);

    signed int max_mono = array_mostRepeated_mono(  ar13,   ar13Size);
    printf("the Most Repeated mono: %u  \n", max_mono);

    array_print( arr, arrSize);
    array_reverse( arr,  arrSize);
    array_print( arr, arrSize);

    array_print( arr, arrSize);
    array_print( ar3, ar3Size);
    unsigned int swappedSize = array_swap( arr,  ar3,  arrSize, ar3Size);
    array_print( arr, swappedSize);
    array_print( ar3, swappedSize);

    unsigned int copySize = array_copy( ar2, ar12,  ar2Size, ar12Size);
    array_print( ar2, copySize);


    double number = 3;
    unsigned int longest = array_longestChain( ar4, ar4Size , number);
    printf("longest chain of %lf: %u  \n", number, longest);

    unsigned int sequence = array_longestSequenceChain( ar12, ar12Size);
    printf("sequence: %u  \n", sequence);


    signed int num; 
    unsigned int longestOfAnyNumber =  array_longestChainOfAnyNumber( ar5, ar5Size , &num);
    printf("longest chain of %d: %u  \n", num, longestOfAnyNumber);

    unsigned int  mergedSize = array_merge (  ar6,  ar7,  ar2,  ar6Size, ar7Size,  ar2Size);
    array_print( ar2, mergedSize);



    unsigned int noOfPrimes = array_removePrime( arr, 5);
    array_print( arr, 5);
    printf("prime counter: %u  \n", noOfPrimes);

    array_print( ar14, ar14Size);
    unsigned int newArray = array_removeRepeatedNumbers (  ar14, ar14Size, ar2, ar2Size);
    array_print( ar2, newArray);


    signed int size = array_scan( ar2, 100);
    array_print( ar2, size);

    unsigned int betweenTwoNumbers_size =  array_betweenTwoNumbers( ar2, -20.4, 2.2);
    array_print( ar2, betweenTwoNumbers_size);

    array_zeroDetector ( ar9);
    array_print( ar9, ar9Size);

    signed int difference = array_biggestDifferenceBetweenTwoElement( ar10, ar10Size);
    printf("difference: %d \n", difference);

    unsigned char mostRepeatedChar = array_mostRepeatedChar ( ar11, ar11Size);
    printf("most Repeated Char: %c \n", mostRepeatedChar);











    string_print( str);
    unsigned int length = string_len( str);
    printf("string length: %u \n", length);

    string_reverse(  str);
    string_print( str);

    unsigned int IsEqual = string_compare (  str1,  str2);
    if (IsEqual)
    {
        printf("equal !! \n");
    }
    else
    {
        printf("not equal !! \n");
    }

    unsigned int longestWord = string_longest_counter ( str3);
    printf("size of longest word: %u \n", longestWord);

    string_longest ( str3, str4);
    string_print( str4);

    string_scan ( str4);
    string_print( str4);

    signed int intNumber = 0;
    intToString( intNumber, str4);
    string_print( str4);

    signed int intFromChar = stringToInt ( str5);
    printf("int From Char: %d \n", intFromChar);
   
   string_print( str1);
   string_print( str2);
   string_swap(  str1,  str2);
   string_print( str1);
   string_print( str2);





   signed char firstRepeated = string_firstRepeated( str6);
   printf("first Repeated Char: %c \n", firstRepeated);

   array_removeRepeatedchars  (  "Mohamed kamel",  str4, 100);
   string_print( str4);


}