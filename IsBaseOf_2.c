// Write a program that reads a positive integer and check
// if this number is a base of 2 like 1,2,4,8,16,32, 64...

#include <stdio.h>


int main ()
{
    int num;
    int last_num;

    while(1)
    {
        printf("Enter a positive integer number: ");
        scanf("%d", &num);

        last_num = num;
        while(last_num != 1 && last_num % 2 == 0)
        {
                last_num = last_num / 2;  
        }

        if(last_num == 1)
        {
            printf("base of 2 !! \n");
        }
        else 
        {
            printf("not base of 2 !! \n");
        }
    }
}