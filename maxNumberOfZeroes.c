// Write c function to count the max number of zeros
// between two ones in the binary representation of a
// number (296384-> {1001000010111000000} return 4).

#include <stdio.h>


int main ()
{
    unsigned int num;
    unsigned int flag = 0;
    unsigned int count = 0;
    unsigned int max = 0;
   

    while(1)
    {
        flag = 0;
        count = 0;
        max = 0;

        printf("Enter a positive integer number: ");
        scanf("%d", &num);
     
     
        for(int i = 31; i >= 0; i--)
        {
            if((num >> i) & 1 == 1)
            {
                printf("1");
                flag++;
                if(flag == 2)
                {
                    if(count > max)
                    {
                        max = count;
                    }

                    flag = 1;
                    count = 0;
                }
            }
            else if (flag == 1)
            {
                printf("0");
                count++;
            }
        }
        printf("\n");
        printf("max number of zeros: %d", max);
        printf("\n");
    }
}