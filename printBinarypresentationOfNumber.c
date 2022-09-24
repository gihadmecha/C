// write a program to print the binary representation of a
// number, try not to print zeros on the left (5->print 101).

#include <stdio.h>

int main ()
{
    //definations
    signed int number;
    signed int oneFlag;

    while (1)
    {
        printf ("\n\na program to print the binary representation of an integer.\n\n");
        
        //initializations
        oneFlag = 0;
        
        //user inputs
        printf ("Enter an integer: ");
        scanf ("%d", &number);

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
}