// Given two integers: L and R, Find the maximal value of A
// xor B where A and B satisfy the condition L =< A <= B <=
// R Constrains: 1 <= L <= R <= 1000 Input format: the
// input contains two lines first line contains L and next
// line contains R. Output format: The maximum value of
// Axor B.


#include <stdio.h>


int main ()
{
    int num_1 = -1;
    int num_2 = -1;
    int xor;
    int max = 0;


    while(1)
    {
       num_1 = -1;
       num_2 = -1;


       if(num_1 < 1 || num_2 > 1000 || num_2 > num_1)
       {
            printf("Enter a positive integer number: ");
            scanf("%d", &num_1);

            printf("Enter another positive integer number: ");
            scanf("%d", &num_2);
       }

       int i;
       int j;
       for(i = num_1; i <= num_2; i++)
       {
           for(j = i; j <= num_2; j++)
           {
                xor = i ^ j;

                printf("%d ^ %d = %d \n", i, j, xor);
           }
       }
       printf("(%d, %d) have a maximum value %d and this is the answer \n", i, j, xor);
    }
}