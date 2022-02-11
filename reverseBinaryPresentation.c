// Write c code to reverse bits in an 8-bit number
// (149->10010101 return 169->10101001),
// (5->00000101 return 160->10100000).

#include <stdio.h>


int main ()
{
    unsigned char num;
    unsigned char  new_num = 0;
   

    while(1)
    {
        new_num = 0;

        printf("Enter a positive integer number: ");
        scanf("%d", &num);
     
     
        for(int i = 0; i < 8; i++)
        {
            if((num >> i) & 1 == 1)
            {
                printf("1");
                new_num = new_num | (1 << (7 - i));
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
        printf("the new number is %d\n", new_num);
    }
}