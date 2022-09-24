// Write a program to reverse a number in decimal
// representation (1205->5021).

#include <stdio.h>

int main ()
{
    //defination
    double number;
    double lastNumber;
    double reversed;
    signed int digit;
    signed int dotFlag;

    while (1)
    {
        //initialization
        reversed = 0;
        dotFlag = 0;

        //user input
        printf ("Enter a Number: ");
        scanf ("%lf", &number);

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
            printf ("%lf\n", lastNumber);
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
        printf ("the reversed number = %lf\n", reversed);
    }
    
}