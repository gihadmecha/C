// Write a program that take two numbers and calculate
// the reminder without using % operation.

#include <stdio.h>


int main ()
{
    signed int num_1;
    signed int num_2;
    signed int num_1_new;
    signed int num_2_new;
    signed int reminder;


    printf("Enter a number: ");
    scanf("%d", &num_1);
    num_1_new = num_1;
    if(num_1 < 0)
    {
        num_1_new = 0 - num_1;
    }

    printf("Enter another number: ");
    scanf("%d", &num_2);
    num_2_new = num_2;
    if(num_2 < 0)
    {
        num_2_new = 0 - num_2;
    }


    if(num_2 == 0)
    {
        printf("Math Error !! \n");
        return 0;
    }

    
    reminder = num_1_new;
    while(reminder >= num_2_new)
    {

        reminder -= num_2_new;
        
    }


    if(num_1 < 0)
    {
        reminder = -reminder;
    }


    printf("Ans = %d \n", reminder);

    printf("Ans = %d \n", num_1%num_2);
}