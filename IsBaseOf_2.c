// Write a program that reads an integer and check
// if this number is a base of 2 like 1,2,4,8,16,32, 64...

#include <stdio.h>

int main()
{
    unsigned int number;
    unsigned int numberFactors;
   

    while (1)
    {
        printf("\n\na program that reads an integer and check if this number is a base of 2.\n\n")

        //user inputs
        printf("Enter an integer number: ");
        scanf("%d", &number);

        //factor analysis
        numberFactors = number;
        while ( numberFactors != 0  &&  numberFactors % 2 == 0 )
        {
            numberFactors /= 2;
        }

        //show results
        if (numberFactors == 1)
            printf("base of 2 !! \n");
        else
            printf("not base of 2 !!\n");


        
        ////another method
        ////2147483648 is the largest base of 2 int.
        // if (number > 0 && 2147483648 % number == 0 )
        //     printf("base of 2  !!\n");

        // else
        //     printf("not base of 2  !!\n");
    
    }

}