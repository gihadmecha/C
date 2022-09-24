//Write a program to take 2 numbers from user and
//calculate sum of all numbers between them.

#include <stdio.h>

int main ()
{
    //definations
    signed int num1;
    signed int num2;
    signed int sum ;
    
    //repeat
    while (1)
    {
        printf("\n\na program to take 2 numbers from you and calculate sum of all numbers between them.\n\n");

        //initialization
        sum = 0;

        //user inputs
        printf("Enter the first integer: ");
        scanf("%d", &num1);
        printf("Enter the second integer: ");
        scanf("%d", &num2);

        // if num1 < num2
        for (signed int index = num1 + 1; index < num2; index++)
        {
            //sum
            sum += index;
        }
        // if num2 < num1
        for (signed int index = num2 + 1; index < num1; index++)
        {
            //sum
            sum += index;
        }
        
        //results
        printf("the sum of all numbers between two numbers: %d \n", sum);
    } 
}