// Write c code to sum numbers from 1 to 100 (without
// loop).

#include <stdio.h>

int main ()
{
    //definations
    double number1;
    double number2;
    double sum;
    double min;
    double max;
    double sumOfEachOppisite;
    double noOfNumbers;
    double noOfSumOperations;
    double sumWithoutLoop;
    double sumWithLoop;

    while (1)
    {
        printf ("\n\nc code to sum numbers from number 1 to number 2\n\n");

        //user inputs
        printf ("Enter number 1: ");
        scanf ("%lf", &number1);
        printf ("Enter number 2: ");
        scanf ("%lf", &number2);

        //specify the max and the min
        if (number1 <= number2)
        {
            min = number1;
            max = number2;
        }
        //if number2 < number1
        else
        {
            min = number2;
            max = number1;
        }

        //the main idea without loop
        sumWithoutLoop = 0;
        //sumOfEachOppisite = 1 + 100 = 101;
        sumOfEachOppisite = min + max;
        //noOfNumbers = 100 - 0 = 100
        noOfNumbers = max - (min - 1);
        //noOfSumOperations = 100 / 2 = 50
        noOfSumOperations = noOfNumbers / 2;
        //sumWithoutLoop = 101 * 50
        sumWithoutLoop = sumOfEachOppisite * noOfSumOperations;
        printf ("the sum (without loop) of numbers from %lf to %lf = %lf\n", number1, number2, sumWithoutLoop);

        //the main idea with loop
        sumWithLoop = 0;
        for (signed int index = min; index <= max; index++)
        {
            sumWithLoop += index;
        }
        printf ("the sum (with loop) of numbers from %lf to %lf = %lf\n", number1, number2, sumWithLoop); 
    } 
}