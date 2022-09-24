// Write a program that take two numbers and calculate
// the reminder without using % operation.

#include <stdio.h>

int main ()
{
    signed int Numerator;
    signed int Denominator;
    signed int positiveNumerator;
    signed int positiveDenominator;
    signed int reminder;


    while (1)
    {
        printf("\n\na program that take two numbers and calculate the reminder without using %% operation.\n\n");

        //user input Numerator and denominator
        printf("Enter an integer Numerator: ");
        scanf("%d", &Numerator);
        printf("Enter an integer Denominator: ");
        scanf("%d", &Denominator);

        //get a positive Numerator
        positiveNumerator = Numerator;
        if (Numerator < 0)
            positiveNumerator = -Numerator;

        //get a positive Denominator
        positiveDenominator = Denominator;
        if (Denominator < 0)
            positiveDenominator = -Denominator;

       

        //the main algorithm
        // positiveNumerator % positiveDenominator using repeated subtraction operations
        reminder = positiveNumerator;
        while (positiveDenominator != 0 && reminder >= positiveDenominator)
        {
            reminder -= positiveDenominator;
        }
       
        
        //if Numerator was negative
        if (Numerator < 0)
            reminder = -reminder;

    
        //results
        if (Denominator == 0)
        {
            printf ("Math Error !! \n");
            //printf("reminder  = %d \n", Numerator % Denominator);
        }
        else
        {
            printf("reminder  = %d \n", reminder);
            printf("reminder  = %d \n", Numerator % Denominator);
        }
        
    }
    
}