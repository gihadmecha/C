// Write a program to sum the digits in a decimal number
// 145 -> 1+4+5=10.

#include <stdio.h>

int main()
{
    signed int number;
    signed int lastNumber;
    unsigned int digit;
    unsigned int sum;

    while (1)
    {
        printf("\n\na program to sum the digits in a decimal number.\n\n");

        //user inputs
        printf("Enter an integer number: ");
        scanf("%d", &number);


        //get a positive number
        if (number < 0)
            lastNumber = -number;
        else
            lastNumber = number;

        
        //sum digits
        sum = 0;
        while (lastNumber != 0)
        {
            digit = lastNumber % 10;
            sum += digit; 
            lastNumber /= 10;
        }


        //show results
        printf("the sum of digits = %d\n", sum);   
    }
    
}