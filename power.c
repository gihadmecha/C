// Write a program to calculate the power of a number.
// The number and its power are input from user.

#include <stdio.h>


int main ()
{
    signed int base;
    signed int power;
    signed int power_new;
    double ans = 1;

    while(1)
    {
        ans = 1;

        printf("Enter a number: ");
        scanf("%d", &base);
        printf("Enter another number: ");
        scanf("%d", &power);
        power_new = power;
        if(power < 0)
        {
            power_new = 0 - power;
        }

        
        for(int i = 1; i <= power_new; i++)
        {

            ans *= base;
            
        }


        if(power < 0)
        {
            ans = 1.0 / ans;        
        }
        
        printf("Ans = %lf \n", ans);
    }
}