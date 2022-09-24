//add two numbers

#include <stdio.h>


int main ()
{
    //definations
    signed int num1;
    signed int num2;
    signed int sum;

    while(1)
    {
        printf("\n\na program to add two numbers.\n\n");

        //user inputs
        printf("Enter the first integer: ");
        scanf("%d", &num1);
        printf("Enter the second integer: ");
        scanf("%d", &num2);
        
        //sum
        sum = num1 + num2;

        //results
        printf("Ans = %d \n", sum);
    }
}