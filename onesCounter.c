// Write a program to count the number of 1’s in an
// unsigned 32-bit integer.

#include <stdio.h>

int main ()
{
    //definations
    signed int number;
    signed int oneCounter;

    while (1)
    {
        printf ("\n\na program to count the number of 1’s in an integer.\n\n");

        //initializations
        oneCounter = 0;

        //user input
        printf("Enter an integer: ");
        scanf ("%d", &number);

        //counter
        for (signed int digit = 0; digit <= 31; digit++)
        {
            //if digit == 1
            if ((number >> digit) & 1)
                oneCounter++;
        }

        //show results
        printf ("the number of 1’s in the binary presentation of %d is %d\n", number, oneCounter);
    }  
}