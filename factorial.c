// Write a program that reads a positive integer and
// computes the factorial.

#include <stdio.h>


int main ()
{
    signed int num;
    double factorial = 1;
    int num_copy;

    printf("Enter a positive integer number: ");
    scanf("%d", &num);
    num_copy = num;
    if(num < 0)
    {
       num_copy = 0 - num;
    }
    
    
    for(int i = 1; i <= num_copy; i++)
    {
        factorial *= i;
    }



    if(num < 0)
    {
       factorial = 0 - factorial;
    }
    
    
    
    printf("Ans = %lf \n", factorial);
}