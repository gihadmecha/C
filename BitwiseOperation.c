// Write a full C program to take 4 choose from user:
// 1-Set bit.
// 2-Clear bit
// 3-Toggle bit.
// 4-Read bit.
// then take number, and bit number.
// print the number after set, clear, or toggle if 1,2 or 3 is
// selected.
// print the bit value if 4 is selected.

#include <stdio.h>

int main ()
{
    //definations
    signed int operation;
    signed int number;
    signed int bit;

    while (1)
    {
        //initializations
        operation = 5;
        bit = 32;
        
        //get the operation from the user
        while (operation < 1 || 4 < operation)
        {
            printf ("\n\n1-Set bit.\n2-Clear bit\n3-Toggle bit.\n4-Read bit.\n\n");
            printf ("choose an operation no: ");
            scanf ("%d", &operation);
        }

        //get the number from the user
        printf ("Enter an integer: ");
        scanf ("%d", &number);

        //get the no. of the bit from the user  
        while (bit < 0 || 31 < bit)
        {
            printf ("Enter the no of the bit from 0 to 31: ");
            scanf ("%d", &bit);
        }

        //choice 1
        if (operation == 1)
            //set bit
            printf ("the number after = %d\n", number |= (1 << bit));
        
        //choice 2
        else if (operation == 2)
            //clear bit
            printf ("the number after = %d\n", number &= (~(1 << bit)));

        //choice 3   
        else if (operation == 3)
            //toggle bit
            printf ("the number after = %d\n", number ^= (1 << bit));

        //choice 4    
        else if (operation == 4)
            //read bit
            printf ("the bit value = %d\n", (number >> bit) & 1);
    }
}