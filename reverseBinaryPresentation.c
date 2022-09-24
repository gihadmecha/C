// Write c code to reverse bits in an 8-bit number
// (149->10010101 return 169->10101001),
// (5->00000101 return 160->10100000).

#include <stdio.h>

int main ()
{
    //definations
    unsigned char number;
    unsigned char reversed;

    while (1)
    {
        printf ("\n\nc code to reverse bits in an 8-bit number\n\n");

        //initializations
        reversed = 0;

        //user inputs
        printf ("Enter an integer from 0 to 255 : ");
        scanf ("%u", &number);
        
        //print the number
        printf ("the reversed binary presentation of %u -> ", number);
        //print the binary presentation of the number
        for (signed int digit = 0; digit <= 7; digit++)
        {
            printf ("%d", (number >> digit) & 1);
        }

        //reverse 
        for (signed int digit = 7; digit >= 0; digit--)
        {
            // if ((number >> digit) & 1)
                // reversed = reversed | (1 << (7 - digit));

            reversed = reversed | ( ( (number >> digit) & 1 ) << (7 - digit) );
        }

        //print the reversed number
        printf (" is %u -> ", reversed); 
        //print the binary presentation of the reversed number
        for (signed int digit = 0; digit <= 7; digit++)
        {
            printf ("%d", (reversed >> digit) & 1);
        }

        printf ("\n");
    }
}