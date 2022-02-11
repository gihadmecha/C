// Write c function to take number of lines and draw
// pattern with '*' like:

#include <stdio.h>


int main ()
{
    signed int lineNumber = -1;
   

    while(1)
    {
        lineNumber = -1;

        while(lineNumber < 0)
        {
            printf("Enter the number of lines: ");
            scanf("%d", &lineNumber);
        }
     
     
        for(int i = 0; i <= lineNumber; i++)
        {
            for(int j = lineNumber - i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        printf("\n");
        for(int i = 1; i <= lineNumber; i++)
        {
            for(int j = i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

        printf("\n");
        for(int i = lineNumber; i > 1; i--)
        {
            for(int j = 1; j <= lineNumber - i; j++)
            {
                printf(" ");
            }
            printf("*");
            for(int j = 2*i-2 ; j > 1; j--)
            {
                printf(" ");
            }

            printf("*");

            printf("\n");
        }
        
       for(int i = lineNumber; i >= 1; i--)
        {
            for(int j = i ; j > 1 ; j--)
            {
                printf(" ");
            }
            //if(i == lineNumber)
                //printf(" ");
            printf("*");
            for(int j = 1; j < 2*(lineNumber-i); j++)
            {
                printf(" ");
            }
            if(i != lineNumber)
                printf("*");

            printf("\n");
        }
        printf("\n");

        printf("\n");
        for(int i = 1; i <= lineNumber; i++)
        {
            for(int j = lineNumber - i; j > 0 ; j--)
            {
                printf(" ");
            }
            for(int j = 1; j < 2*i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}