// Write a program to take numbers from user and
// calculate the sum of them (let users choose the No of
// numbers.

#include <stdio.h>

int main ()
{
    signed int noOfNumbers;
    signed int sum;
    signed int num;

    while (1)
    {
        printf(" \n\na program to take numbers from you and calculate the sum of them. \n\n");

        //initialization
        noOfNumbers = -1;
        sum = 0;

        //Enter the No. of numbers
        while( noOfNumbers < 0)
        {
            printf("Enter the positive integer No. of Numbers: ");
            scanf("%d", &noOfNumbers);
        }

        //add every single number to the sum
        for (unsigned int index = 1; index <= noOfNumbers; index++)
        {
            //user input numbers
            printf("Enter integer %d: ", index);
            scanf("%d", &num);

            //sum
            sum += num;
        }

        //the Answer
        printf("sum = %d \n", sum);
    }
    
}