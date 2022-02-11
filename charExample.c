// Write a C program to take a number and a character
// from user if the number is even print the same
// character, if the number is odd print the other case of
// the character (a->A, B->b).


#include <stdio.h>


int main ()
{
    int num;
    char character;
    
    while(1)
    {
        printf("Enter a positive integer number: ");
        scanf("%d", &num);

        printf("Enter a character from a/A to b/B: ");
        //fflush(stdin);
        scanf(" %c", &character);
        
        if(num % 2 == 0)
        {
            printf("%c \n", character);
        } 
        else
        {
            if(character >= 'A' && character <= 'Z' )
            {
                printf("%c\n", 'a' + (character - 'A'));
            }
            else if(character >= 'a' && character <= 'z' )
            {
                printf("%c\n", 'A' + (character - 'a'));
            }
        }
    }
}