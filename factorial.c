// Write a program that reads an integer and
// computes the factorial.

#include <stdio.h>

int main()
{
    //definations
    signed int number;
    double fact;

    while (1)
    {
        printf("\n\na program that reads an integer and computes the factorial.\n\n");

        //user inputs
        printf("Enter an integer number: ");
        scanf("%d", &number);
       

        //factorial computations
        //if number == 1 or 0
        fact = 1;

        //if number > 1
        for (signed int index = number; index > 1; index--)
        {
            fact *= index;
        }

        //if number < 0 
        for (signed int index = number; index <= -1; index++)
        {
            fact *= index;
            //always, the factorial of a negative is negative
            if(fact > 0)
                fact = -fact;
        }

        
        //results
        printf("the factorial = %lf\n", fact);
    }
    
}