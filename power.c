// Write a program to calculate the power of a number.
// The number and its power are input from user.

#include <stdio.h>  

int main ()
{
    //definitions
    double base;
    signed int power;
    double mult;
    signed int positivePower;

    while (1)
    {
        printf("\n\na program to calculate the power of a number.\n\n");

        //user inputs
        printf("Enter a Base Number: ");
        scanf("%lf", &base);
        printf("Enter an integer power: "); 
        scanf("%d", &power);
        //////////////////////////////////////////////////////////////////
        //the main idea

        //get a positive power
        positivePower = power;
        if(power < 0)
            positivePower = -power;

        //the power computation
        mult = 1;
        for (signed int index = 1; index <= positivePower; index++)
        {
            mult *= base;
        }
        
        //if the power is negative, the result 'll be fraction. 
        if (power < 0)
            mult = 1.0 / mult;
        /////////////////////////////////////////////////////////////////
        // another idea
        /*
            mult = 1;
            for (signed int index = 1; index <= power; index++)
            {
                mult *= base;
            } 
            for (signed int index = -1; index >= power; index--)
            {
                mult *= base;
                if (index == power)
                    mult = 1/mult;
            } 
        */
        /////////////////////////////////////////////////////////////////
        //results
        printf("%lf power %d = %lf\n", base, power, mult);
                    
    }
    

    
}