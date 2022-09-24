// Write a program to take numbers from user and find the
// max and min from them (let users choose the No of
// numbers.


#include <stdio.h>


int main ()
{
    signed int no_of_numbers;
    signed int num;
    signed int min;
    signed int max;

    //repeat
    while (1)
    {
        printf("\n\na program to take numbers from you and find the max and min from them.\n\n");

        //choose the No. of Numbers
        no_of_numbers = -1;
        while (no_of_numbers < 0)
        {
            printf("Enter a positive integer no. of numbers: ");
            scanf("%d", &no_of_numbers);
        }

        //Specify every single number
        for (unsigned int index = 1; index <= no_of_numbers; index++)
        {

            //Enter a Number
            printf("Enter integer number %d: ", index);
            scanf("%d", &num);

            //min and max initialization
            if (index == 1)
            {
                min = num;
                max = num;
            } 

            //check if it is the Min.
            if (num < min)
                min = num;
            

            //check if it is the Max.
            if (num > max)
                max = num;

        }

        // print results
        if (no_of_numbers == 0)
        {
            printf("There is NO MIN. \n");
            printf("There is NO MAX. \n");
        }
        else
        {
            printf("MIN. = %d \n", min);
            printf("MAX. = %d \n", max);
        }

    } 

}