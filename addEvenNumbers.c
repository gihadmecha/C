// write a program to take even numbers from user and
// print the sum of them after each entry if the user enters
// 2 odd number the program print "bye" and stopped.

#include <stdio.h>


int main ()
{
    int num;
    int last_num;
    int sum = 0;
    int flag = 0;

    while(1)
    {
        printf("Enter a positive integer number: ");
        scanf("%d", &num);


        if(num % 2 == 0)
        {
            sum += num; 
        }
        else
        {
            flag++;
        }


        if(flag == 2)
        {
            return 0;
        }  


        printf("sum = %d\n", sum); 
    }
}