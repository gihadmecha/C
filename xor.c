// Given two integers: L and R, Find the maximal value of A
// xor B where A and B satisfy the condition L =< A <= B <=
// R Constrains: 1 <= L <= R <= 1000 Input format: the
// input contains two lines first line contains L and next
// line contains R. Output format: The maximum value of
// A xor B.

#include <stdio.h>

int main ()
{
    //definations
    signed int l;
    signed int r;
    signed int maxA;
    signed int maxB;
    signed int max;
    signed int xor;

    while (1)
    {
        printf ("\n\nEnter 1 <= L <= R <= 1000\n\n");

        //initializations
        l = 0;
        r = 0;

        //user inputs
        // 1 <= l <= 1000
        while (l < 1 || l > 1000)
        {
            printf ("Enter an integer from 1 to 1000 as L = ");
            scanf ("%u", &l);
        }
        // l <= r <= 1000
        while (r < l || r > 1000)
        {
            printf ("Enter an integer from %d to 1000 as R = ", l);
            scanf ("%u", &r);
        }

        //max initialization
        maxA = l;
        maxB = l;
        max = l ^ l;

        // l <= A <= r
        for (unsigned A = l; A <= r; A++)
        {
            // A <= B <= r
            for (unsigned B = A; B <= r; B++)
            {
                //XOR
                xor = A ^ B;
                //print the XOR operation
                printf ("%d ^ %d = %d\n", A, B, xor);

                // get max
                if (xor > max)
                {
                    maxA = A;
                    maxB = B;
                    max = xor;
                }
            }
        }

        //show results
        printf ("(%d, %d) have the maximum value %d and this is the answer\n", maxA, maxB, max);
    }
}