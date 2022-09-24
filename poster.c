// You are designing a poster which prints out numbers
// with a unique style applied to each of them. The styling
// is based on the number of closed paths or holes present
// in a giver number. The number of holes that each of the
// digits from 0 to 9 have are equal to the number of
// closed paths in the digit. Their values are:
// 1, 2, 3, 5 and 7 = 0 holes.
// 0, 4, 6, and 9 = 1 hole.
// 8 = 2 holes.
// Example if number 3824->3 has 0 holes,8 has 2
// holes,4 has 1hole sum=0+2+1=3.

#include <stdio.h>

int main()
{
    //definations
    signed int number;
    signed int lastNumber;
    unsigned int digit;
    unsigned int sum;

    while (1)
    {  
        //initialization
        sum = 0;

        //user inputs
        printf("Enter an integer number: ");
        scanf("%d", &number);

        // get the number is positive
        if(number < 0)
            lastNumber = - number;
        else
            lastNumber = number;


        //the main algorithm
        do
        {
            //get the right digit 
            digit = lastNumber % 10;

            //add the digit value to the sum
            if(digit == 0 || digit == 4 || digit == 6 || digit == 9)
                sum += 1;
            else if (digit == 8)
                sum += 2;

            //get rid of the right digit 
            lastNumber /= 10;

        // I used "do while" not "while" because
        // number = 0     >>>    no. of holes = 1
        //                >>>    no. of holes = 0
        }while (lastNumber != 0);

        //show results
        printf("no of holes = %u\n", sum);    
    }
    
}