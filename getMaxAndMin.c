// Write a program to take numbers from user and find the
// max and min from them (let users choose the No of
// numbers.

#include <stdio.h>


int main ()
{
    signed int NoOfNunbers;
    signed int num;
    signed int max;
    signed int min;

    printf("Enter the No. of numbers: ");
    scanf("%d", &NoOfNunbers);

    if(NoOfNunbers <= 0)
    {
        return 0;
    }


    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    min = num;

    for(int i = 2; i <= NoOfNunbers; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
        {
            max = num;
        }

        if(num < min)
        {
            min = num;
        }
    }
    

    printf("Max. = %d \n", max);
    printf("Min. = %d \n", min);
}