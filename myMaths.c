#include "myMaths.h"

double addTwoNumbers(double num1, double num2)
{
    double sum;

    // sum
    return sum = num1 + num2;
}

// take 2 numbers from you and calculate sum of all numbers between them.
signed int addIntegersBetweenTwoIntegers(signed int num1, signed int num2)
{
    signed int sum = 0;

    // if num1 < num2
    for (signed int index = num1 + 1; index < num2; index++)
    {
        // sum
        sum += index;
    }
    // if num2 < num1
    for (signed int index = num2 + 1; index < num1; index++)
    {
        // sum
        sum += index;
    }

    return sum;
}

signed int multiplyTwoNumbers(signed int num1, signed int num2)
{
    signed int sum = 0;

    // num1 * num2 using repeated sum operations
    // if num1 > 0
    for (signed int index = num1; index >= 1; index--)
    {
        // sum
        sum += num2;
    }
    // num1 * num2 using repeated sum operations
    // if num1 < 0
    for (signed int index = -1; index >= num1; index--)
    {
        // sum
        sum -= num2;
    }

    return sum;
}

signed int reminder(signed int Numerator, signed int Denominator)
{

    signed int positiveNumerator;
    signed int positiveDenominator;
    signed int reminder;

    // get a positive Numerator
    positiveNumerator = Numerator;
    if (Numerator < 0)
        positiveNumerator = -Numerator;

    // get a positive Denominator
    positiveDenominator = Denominator;
    if (Denominator < 0)
        positiveDenominator = -Denominator;

    // the main algorithm
    //  positiveNumerator % positiveDenominator using repeated subtraction operations
    reminder = positiveNumerator;
    while (positiveDenominator != 0 && reminder >= positiveDenominator)
    {
        reminder -= positiveDenominator;
    }

    // if Numerator was negative
    if (Numerator < 0)
        reminder = -reminder;

    // results
    if (Denominator == 0)
    {
        printf("Math Error !! \n");
        // return ?
        // printf("reminder  = %d \n", Numerator % Denominator);
    }
    else
    {
        return reminder;
    }
}

double power (  double base, signed int power)
{
    //definitions
    double mult = 1;
    signed int positivePower = power;

    //////////////////////////////////////////////////////////////////

    //the main idea
    //get a positive power
    if(power < 0)
        positivePower = -power;

    //the power computation
    for (signed int index = 1; index <= positivePower; index++)
    {
        mult *= base;
    }
    
    //if the power is negative, the result 'll be fraction. 
    if (power < 0)
        mult = 1.0 / mult;


    /////////////////////////////////////////////////////////////////

    // another idea
    /*
        for (signed int index = 1; index <= power; index++)
        {
            mult *= base;
        } 
        for (signed int index = -1; index >= power; index--)
        {
            mult *= base;
            if (index == power)
                mult = 1/mult;
        } 
    */
    /////////////////////////////////////////////////////////////////


    //results
    return mult;
}

double factorial (  signed int number)
{
        //factorial computations
        //if number == 1 or 0
        double fact = 1;

        //if number > 1
        for (signed int index = number; index > 1; index--)
        {
            fact *= index;
        }

        //if number < 0 
        for (signed int index = number; index <= -1; index++)
        {
            fact *= index;
            //always, the factorial of a negative is negative
            if(fact > 0)
                fact = -fact;
        }

        //results
        return fact;
}

signed int IsPrime (    double num)
{
    signed primeFlag;
    
    if(num < 2 || (num != (signed int)num))
    {
        //not prime
        primeFlag = 0;
    }
    else
    {
        //if 2 <= num, initialize the primeFlag, assume num is prime
        //if num = 2, prime
        primeFlag = 1;       
        //if  2 <= index < num      &&   primeFlag != 0 ,   still num is assumed as a prime  and check
        for(signed int index = 2; index < num && primeFlag != 0; index++)
        {
            //if the quotient of (num / index) is an integer
            
            //if( (double)num / (double)index  ==  num / index  )
            if ( ((signed int)num) % index == 0 )
                //not prime
                primeFlag = 0;

        }
    }
        
    //results
    return primeFlag;
}

signed int IsPerfectSquare (    double number)
{ 
    signed int squareFlag = 0;

    //if it's not integer, it's not perfect square
    if (number != (signed int)number)
        return 0;
        
    // 0 <= index <= number    &&   squareFlag != 1, still the number is being assumed as a not perfect square
    for (signed int index = 0; index <= number && squareFlag != 1; index++)
    {
        //if(   (double)number / (double)index  ==  index   ) 
        if(index * index == number)
        //perfect square
        squareFlag = 1; 
    }

    //show results
    if(squareFlag == 1)
        return 1;
    else
        return 0;
}

signed int IsBaseOf2 ( double number)
{
    //if it's negative or decimal, it's not base of 2
    if (number < 1 || number != (unsigned int)number)
    return 0;

    //factor analysis
    double numberFactors = number;
    while ( numberFactors != 0  &&  (unsigned int)numberFactors % 2 == 0 )
    {
        numberFactors /= 2;
    }

    //show results
    if (numberFactors == 1)
        return 1;
    else
        return 0;


    
    ////another method
    ////2147483648 is the largest base of 2 int.
    // if (number > 0 && 2147483648 % number == 0 )
    //     return 1;

    // else
    //     return 0;
}

signed int sumDigits (  double number)
{
    double lastNumber;
    unsigned int digit;
    unsigned int sum = 0;
    
    //get a positive number
    if (number < 0)
        lastNumber = -number;
    else
        lastNumber = number;

    //let it integer
    while (lastNumber != (unsigned int)lastNumber)
    {
        lastNumber *= 10;
    }

    //sum digits
    while (lastNumber != 0)
    {
        digit = (unsigned int)lastNumber % 10;
        sum += digit; 
        lastNumber /= 10;
    }

    //show results
    return sum;   
}

//program that reads the radius of a circle and calculates the area and circumference
double circle ( double radius, double* circumference)
{
    double pi = 22.0 / 7.0;
    double area;

    area = pi * radius * radius;
    *circumference = 2 * pi * radius;

    //show results
    return area;
}

double reverseNumber (  double number)
{
    double lastNumber;
    double reversed = 0;
    signed int digit;
    signed int dotFlag = 0;

    // //get a positive number
    // if (number < 0)
    //     lastNumber = -number;
    // else 
        lastNumber = number;

    //specify the dot location
    while ( lastNumber >= 1 || lastNumber <= -1)
    {
        lastNumber /= 10;
        dotFlag++;
    }

    //get rid of the dot
    while ( lastNumber != (signed int)lastNumber)
    {
        lastNumber *= 10;
    }

    //the main idea
    while (lastNumber != 0)
    {
        digit = (signed int)lastNumber % 10;
        reversed = reversed *10 + digit;
        lastNumber = (signed int)lastNumber / 10;
    }

    //get the dot again
    for (signed int index = 1; index <= dotFlag; index++)
    {
        reversed /= 10;
    }
    
    // //get the sign again
    // if (number < 0)
        // reversed = -reversed;
    
    //show results
    return reversed;
}

//a function to count the number of 1’s in the binary presentation of a positive integer.
signed int onesCounter (   unsigned int number)
{
    signed int oneCounter = 0;

    //counter
    for (signed int digit = 0; digit <= 31; digit++)
    {
        //if digit == 1
        if ((number >> digit) & 1)
            oneCounter++;
    }

    //show results
    return oneCounter;
}

//a function to reverse bits in an 8-bit number
unsigned char reverseBinaryPresentation ( unsigned char number)
{
    unsigned char reversed = 0;

    //reverse 
    for (signed int digit = 7; digit >= 0; digit--)
    {
        // if ((number >> digit) & 1)
            // reversed = reversed | (1 << (7 - digit));

        reversed = reversed | ( ( (number >> digit) & 1 ) << (7 - digit) );
    }

    return reversed;
}

//c code to sum numbers from number 1 to number 2
double sumFromNumberToAnotherWithoutLoop (  double number1, double number2)
{
    double min;
    double max;
    double sumOfEachOppisite;
    double noOfNumbers;
    double noOfSumOperations;
    double sumWithoutLoop;

    //specify the max and the min
    if (number1 <= number2)
    {
        min = number1;
        max = number2;
    }
    //if number2 < number1
    else
    {
        min = number2;
        max = number1;
    }

    //the main idea without loop
    sumWithoutLoop = 0;
    //sumOfEachOppisite = 1 + 100 = 101;
    sumOfEachOppisite = min + max;
    //noOfNumbers = 100 - 0 = 100
    noOfNumbers = max - (min - 1);
    //noOfSumOperations = 100 / 2 = 50
    noOfSumOperations = noOfNumbers / 2;
    //sumWithoutLoop = 101 * 50
    sumWithoutLoop = sumOfEachOppisite * noOfSumOperations;

    return sumWithoutLoop;
}

unsigned int setBit (   unsigned int number, unsigned int bit)
{
    return number |= (1 << bit);
}

unsigned int clearBit (  unsigned int number, unsigned int bit)
{
    return number &= (~(1 << bit));
}

unsigned int toggleBit (    unsigned int number, unsigned int bit)
{
    return number ^= (1 << bit);
}

unsigned int readBit (  unsigned int number, unsigned int bit)
{
    return (number >> bit) & 1;
}

// Write c function to count the max number of zeroes
// between two ones in the binary representation of a number
signed int maxNumberOfZeroes (signed int number)
{
    signed int bitValue;
    signed int firstZeroFlag = 0;
    signed int zeroCounter = 0;
    signed int max = 0;

    //each bit
    for (signed int bit = 0; bit <= 31; bit++)
    {
        //read bit
        bitValue = (number >> bit) & 1;

        if (bitValue == 1)
        {
            if (firstZeroFlag == 0)
                firstZeroFlag = 1;
            
            //if firstZeroFlag == 1
            else
            {
                if (max < zeroCounter)
                    max = zeroCounter;

                zeroCounter = 0;
            } 
        }
        //bitValue == 0
        else
        {
            //if its zeroCounter between two ones
            if (firstZeroFlag == 1)
                zeroCounter++;
        }


        ////another solution representation
        // if ((number >> bit) & 1)
        // {
        //     firstZeroFlag++;

        //     if (max < zeroCounter)
        //         max = zeroCounter;
            
        //     zeroCounter = 0;
        // }
        // else if (firstZeroFlag)
        //     zeroCounter++;      
    }
    
    return max;
}

signed int IsPowerOf3 ( signed int number)
{
    double lastNumber = number;
    while (lastNumber > 1)
    {
        lastNumber /= 3;
    }
    
    if (lastNumber == 1)
        return 0;
    else
        return 1;
}

void swap (signed int* number1, signed int* number2)
{
    signed int temporary = *number1;
    *number1 = *number2;
    *number2 = temporary;
}

void swap_char (unsigned char* character1, unsigned char* character2)
{
    unsigned char temp = *character1;
    *character1 = *character2;
    *character2 = temp;
}

void swap_Pointers ( signed int** pointer1, signed int** pointer2)
{
    signed int* temporary = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temporary;
}

signed int fibonacci (signed int noOfTerms)
{
    signed int firstElement = 0;
    signed int secondElement = 1;
    signed int thirdElement = 0;

    if (noOfTerms == 2)
        thirdElement = 1;
        
    for (signed int n = 2; n < noOfTerms; n++)
    {
        thirdElement = firstElement + secondElement;
        firstElement = secondElement;
        secondElement = thirdElement;
    }
    
    return thirdElement;
}

void printBinaryPresentationOfNumber ( signed int number)
{
    signed int oneFlag = 0;

    printf ("the binary presentation of %d = ", number);
    //if every digit is not a zero on the left ,print it.
    for (signed int digit = 31; digit >= 0; digit--)
    {
        if (oneFlag == 0 && (number >> digit) & 1 == 1)
        {
            oneFlag = 1;
            printf ("1");
        }
        else if (number == 0 || oneFlag == 1)
            printf ("%d", (number >> digit) & 1);
    }
    printf("\n");
}

double getMax()
{
    double NoOfNunbers = -1;
    double num;
    double max;

    while(NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }

    for(unsigned int i = 1; i <= NoOfNunbers; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if(i == 1)
        {
            max = num;
        }

        if(num > max)
        {
            max = num;
        }
    }

    return max;
}

double getMin()
{
    double NoOfNunbers = -1;
    double num;
    double min;

    while(NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }

    for(unsigned int i = 1; i <= NoOfNunbers; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if(i == 1)
        {
            min = num;
        }

        if(num < min)
        {
            min = num;
        }
    }

    return min;
}

double addNumbers()
{
    double NoOfNunbers = -1;
    double num;
    double sum = 0;


    while (NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }


    for(unsigned int i = 1; i <= NoOfNunbers; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        sum += num;  
    }

    return sum;
}

double addEVenNumbers ( )
{
    double num;
    double last_num;
    double sum = 0;
    int flag = 0;

    while (1)
    {
        printf("Enter an integer Even number: ");
        scanf("%lf", &num);

        last_num = num;

        while ((signed long long int)last_num != last_num)
        {
            last_num *= 10;
        }

        if((signed long long int)last_num % 2 == 0)
        {
            sum += num; 
        }
        else
        {
            flag++;
        }

        if(flag == 2)
        {
            return sum; 
        }  

        printf("Sum = %lf \n", sum);
    }
}

unsigned int poster ( double num)
{
    double last_num;
    unsigned int sum;
    unsigned int rightDigit;
        
    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }

    while ((unsigned long long int)last_num != last_num)
    {
        last_num *= 10;
    }

    sum = 0;
    while((unsigned long long int)last_num != 0)
    {
            rightDigit = (unsigned long long int)last_num % 10;

            if(rightDigit == 1 || rightDigit == 2 || rightDigit == 3 || rightDigit == 5 || rightDigit == 7)
            {
                rightDigit = 0;
            }
            else if(rightDigit == 0 || rightDigit == 4 || rightDigit == 6 || rightDigit == 9)
            {
                rightDigit = 1;
            }
            else if(rightDigit == 8)
            {
                rightDigit = 2;
            }

            sum += rightDigit;
            last_num = last_num / 10;  
    }

    return sum;
}

char charExample ( double num, char character)
{
    double IntegerNum = num;

    while ((signed long long int)IntegerNum != IntegerNum)
    {
        IntegerNum *= 10;
    }
    
    if((signed long long int)IntegerNum % 2 == 0)
    {
        return character;
    } 
    else
    {
        if(character >= 'A' && character <= 'Z' )
        {
            return 'a' + (character - 'A');
        }
        else if(character >= 'a' && character <= 'z' )
        {
            return 'A' + (character - 'a');
        }
    }  
}

unsigned long int xor ( unsigned int num_1, unsigned int num_2)
{
    int xor;
    int max;

    if(num_1 > 1 && num_2 < 1000 && num_2 > num_1)
    {
        int i;
        int j;
        for(i = num_1; i <= num_2; i++)
        {
            for(j = i; j <= num_2; j++)
            {
                xor = i ^ j;

                printf("%d ^ %d = %d \n", i, j, xor);

                if(i == num_1 && j == i)
                {
                    max = xor;
                }

                if(xor > max)
                {
                    max = xor;
                }
            }
        }

        return max;
    }

    return 200;
}

