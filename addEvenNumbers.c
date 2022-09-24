// write a program to take even numbers from user and
// print the sum of them after each entry if the user enters
// 2 odd number the program print "bye" and stopped.

#include <stdio.h>

int main ()
{   
    printf("\n\na program to take even numbers from you and print the sum of them after each entry if you enters 2 odd number the program print 'bye' and stopped.\n\n");
    
    //definations + initializations
    signed int number;
    signed int sum = 0;
    signed int oddFlag = 0;

    while (1)
    {

        //user inputs
        printf("Enter an even integer number: ");
        scanf("%d", &number);

        // if the number is even
        if (number %2 == 0)
        {
            //add the number to all previous even numbers
            sum += number;

            //show results
            printf("sum of all previous even numbers = %d\n", sum);
        }
        // for odd numbers
        else
        {
            //oddFlag = 1;
            oddFlag++ ;
        }

        // for the second odd number
        if (oddFlag == 2) 
        {
            printf("bye !!\n");

            //stop
            return 0;
        }
    } 
}