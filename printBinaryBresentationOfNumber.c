// write a program to print the binary representation of a
// number, try not to print zeros on the left (5->print 101).

#include <stdio.h>


int main ()
{
    unsigned int num;
   

    while(1)
    {
        count = 0;
        printf("Enter a positive integer number: ");
        scanf("%d", &num);
     
     
        for(int i = 0; i < 32; i++)
        {
            if((num >> i) & 1 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
}