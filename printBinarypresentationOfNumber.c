// write a program to print the binary representation of a
// number, try not to print zeros on the left (5->print 101).

#include <stdio.h>


int main ()
{
    unsigned int num;
    unsigned int flag = 0;
   

    while(1)
    {
        flag = 0;

        printf("Enter a positive integer number: ");
        scanf("%d", &num);
     
     
        for(int i = 31; i >= 0; i--)
        {
            if((num >> i) & 1 == 1)
            {
                printf("1");
                flag++;
            }
            else if (flag != 0)
            {
                printf("0");
            }
        }
        printf("\n");
    }
}