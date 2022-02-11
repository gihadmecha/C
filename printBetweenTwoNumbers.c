#include <stdio.h>


int main ()
{
    signed int num_1;
    signed int num_2;
    signed int max;
    signed int min;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &num_1);
        printf("Enter another number: ");
        scanf("%d", &num_2);

        if(num_1 > num_2)
        {
            max = num_1;
            min = num_2;
        }
        else
        {
            max = num_2;
            min = num_1;
        }
        
        for(int i = max - 1; i > min; i--)
        {
            printf("%d   ", i);
        }
        printf("\n");
    }
}