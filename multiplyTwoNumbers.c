// Write a program that take two numbers and multiply
// them without using * operation.

#include <stdio.h>


int main ()
{
    signed int num_1;
    signed int num_2;
    signed int multiply = 0;

    while(1)
    {
        multiply = 0;
        
        printf("Enter a number: ");
        scanf("%d", &num_1);
        printf("Enter another number: ");
        scanf("%d", &num_2);


        for(int i = 1; i <= num_2; i++)
        {

            multiply += num_1;
            
        }

        for(int i = num_2; i <= -1; i++)
        {

            multiply -= num_1;
            
        }
        
        printf("Ans = %d \n", multiply);
    }
}