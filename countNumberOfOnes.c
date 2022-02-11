// Write a program to count the number of 1’s in an
// unsigned 32-bit integer.

#include <stdio.h>


int main ()
{
    unsigned int num;
    unsigned int count = 0;
   

    while(1)
    {
        count = 0;
        printf("Enter a positive integer number: ");
        scanf("%d", &num);
     
     
        for(int i = 0; i < 32; i++)
        {
            if((num >> i) & 1 == 1)
            {
                count++;
            }
        }

        
        
        printf("the number of 1's: %d \n", count);
    }
}