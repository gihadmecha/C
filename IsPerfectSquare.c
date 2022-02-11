// Write a program that reads a positive integer and
// checks if it is a perfect square.

#include <stdio.h>


int main ()
{
    int num;
    int flag = 0;

    while(1)
    {
        flag = 0;
        
        printf("Enter a positive integer number: ");
        scanf("%d", &num);


        for(int i = 0; i <= num && flag == 0; i++)
        {
            if(i * i == num) 
            {
                flag++;
            }
        }


        if(flag != 0)
        {
            printf("perfect !! \n");
        }
        else 
        {
            printf("not perfect !! \n");
        }
    }
}