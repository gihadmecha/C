// Write a program to sum the digits in a decimal number
// 145 -> 1+4+5=10.

#include <stdio.h>


int main ()
{
    int num;
    int last_num;
    int sum;

    printf("Enter a positive integer number: ");
    scanf("%d", &num);

    printf("%d\n", num);

    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }
    sum = 0;
    while(last_num != 0)
    {
            sum += last_num % 10;
            last_num = last_num / 10;  
    }

    printf("sum = %d\n", sum);
}