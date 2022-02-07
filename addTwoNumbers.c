// Write a program to take 2 numbers from user and
// calculate sum of all numbers between them.

#include <stdio.h>


int main ()
{
    signed int num_1;
    signed int num_2;
    signed int sum;

    printf("Enter a number: ");
    scanf("%d", &num_1);
    printf("Enter another number: ");
    scanf("%d", &num_2);
    
    sum = num_1 +num_2;
    printf("Ans = %d \n", sum);
}