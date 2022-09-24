// Write a program that take two numbers and multiply
// them without using * operation.

#include <stdio.h>


int main ()
{
    signed int num1;
    signed int num2;
    signed int sum;

    while (1)
    {
        printf("\n\na program that take two numbers and multiply them without using * operation.\n\n");
        //initialization
        sum = 0;

        //user input Two numbers
        printf("Enter an integer Number: ");
        scanf("%d", &num1);
        printf("Enter another integer Number: ");
        scanf("%d", &num2);
        
        // num1 * num2 using repeated sum operations
        //if num1 > 0
        for (signed int index = num1; index >= 1; index--)
        {
            //sum 
            sum += num2;
        }
        
        // num1 * num2 using repeated sum operations
        //if num1 < 0
        for (signed int index = -1; index >= num1; index--)
        {
            //sum 
            sum -= num2;
        }


        //the answer
        printf("multiplication result = %d \n", sum);
    }
}