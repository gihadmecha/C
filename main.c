#include "myMathsLibrary.h"

int main()
{
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
}