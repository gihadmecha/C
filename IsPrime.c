// Write a program that reads a positive integer and
// checks if it is a prime.

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

        if(num <= 1)
        {
            flag++;
        }
        else
        {
            for(int i = 2; i < num && flag == 0; i++)
            {
                if((num % i) == 0) 
                {
                    flag++;
                }
            }
        }



        if(flag == 0)
        {
            printf("prime !! \n");
        }
        else 
        {
            printf("not prime !! \n");
        }
    }
}