// Write a C program to take a number and a character
// from user if the number is even print the same
// character, if the number is odd print the other case of
// the character (a->A, B->b).

#include <stdio.h>

int main ()
{
    //definations
    signed int number;
    unsigned char character;

    while (1)
    {
        printf ("\n\nWrite a C program to take a number and a character from user if the number is even print the same character, if the number is odd print the other case of the character (a->A, B->b).\n\n");

        //user inputs
        printf ("Enter an integer: ");
        scanf ("%d", &number);
        printf ("Enter a charater from a/A to z/Z: ");
        scanf (" %c", &character);

        //if the number is even
        if ( (number & 1) == 0 )
            //print the character
            printf ("the character is %c\n", character);


        //if the number is odd
        else
        {
            // and the character is small                    
            if ('a' <= character && character <= 'z')
                //print the upper case
                printf ("the character is:  %c\n", 'A' + (character - 'a'));

            // and the character is capital
            else if ('A' <= character && character <= 'Z')
                //print the lower case
                printf ("the character is:  %c\n", 'a' + (character - 'A'));  
        }
    }  
}