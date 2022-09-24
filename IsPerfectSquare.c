// Write a program that reads an integer and
// checks if it is a perfect square.

#include <stdio.h>

int main ()
{
    signed int number;
    signed int squareFlag;

    while (1)
    {
        printf("\n\na program that reads an integer and checks if it is a perfect square.\n\n");

        //initialization
        squareFlag = 0;

        //user input
        printf("Enter an integer number: ");
        scanf("%d", &number);
        
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
            printf("perfect square !!\n");
        else
            printf("Not perfect square !!\n");
         
    }
}