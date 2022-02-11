// Write a full C program to take 4 choose from user:
// 1-Set bit.
// 2-Clear bit
// 3-Toggle bit.
// 4-Read bit.
// then take number, and bit number.
// print the number after set, clear, or toggle if 1,2 or 3 is
// selected.
// print the bit value if 4 is selected.

#include <stdio.h>


int main ()
{
    unsigned int num;
    signed int bit_i = -1;
    signed int no = -1;
   

    while(1)
    {
        bit_i = -1;
        no = -1;

    
        while(no < 1 || no > 4)
        {
            printf("\nchoose a number:\n1-Set bit.\n2-Clear bit\n3-Toggle bit.\n4-Read bit.\n");
            printf("operation: ");

             scanf("%d", &no);
        }


        printf("Enter a positive integer number: ");
        scanf("%d", &num);
        
        while(bit_i < 0 || bit_i > 31)
        {
             printf("Enter the number of the bit: ");
             scanf("%d", &bit_i);
        }
     
        switch(no)
        {
            case 1:
                printf("the new number is %d", num | (1 << bit_i));
            break;
            case 2:
                printf("the new number is %d", num & (~(1 << bit_i)));
            break;
            case 3:
                printf("the new number is %d", num ^ (1 << bit_i));
            break;
            case 4:
                if((num >> bit_i) & 1 == 1)
                {
                    printf("the bit is 1");
                }
                else
                {
                    printf("the bit is 0");
                }
            break;
        }
         
        printf("\n");
    }
}