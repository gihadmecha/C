// Write c function to count the max number of zeroCounter
// between two ones in the binary representation of a
// number (296384-> {1001000010111000000} return 4).

#include <stdio.h>

int main ()
{
    //definations
    signed int number;
    signed int bitValue;
    signed int firstZeroFlag;
    signed int zeroCounter;
    signed int max;

    while (1)
    {
        printf ("\n\nc function to count the max number of zeroCounter between two ones in the binary representation of a number\n\n");

        //initializations
        firstZeroFlag = 0;
        zeroCounter = 0;
        max = 0;

        //user input
        printf ("Enter an integer: ");
        scanf ("%d", &number);

        //each bit
        for (signed int bit = 0; bit <= 31; bit++)
        {
            //read bit
            bitValue = (number >> bit) & 1;

            if (bitValue == 1)
            {
                if (firstZeroFlag == 0)
                    firstZeroFlag = 1;
                
                //if firstZeroFlag == 1
                else
                {
                    if (max < zeroCounter)
                        max = zeroCounter;

                    zeroCounter = 0;
                } 
            }
            //bitValue == 0
            else
            {
                //if its zeroCounter between two ones
                if (firstZeroFlag == 1)
                    zeroCounter++;
            }


            ////another solution representation
            // if ((number >> bit) & 1)
            // {
            //     firstZeroFlag++;

            //     if (max < zeroCounter)
            //         max = zeroCounter;
                
            //     zeroCounter = 0;
            // }
            // else if (firstZeroFlag)
            //     zeroCounter++;      
        }

        printf ("the max. no. of zeroes between two ones in the binary presentation of %d: %d\n", number, max);
    }
}