#include <stdio.h>


int main ()
{

    signed int num_1;
    signed int num_2;
    signed int max;
    signed int min;
    signed int sum = 0;
    signed int factor;
    signed int flag = 0;


    while(1)
    {
        sum = 0;
        flag = 0;

        printf("Enter a number: ");
        scanf("%d", &num_1);
        printf("Enter another number: ");
        scanf("%d", &num_2);

        printf("Enter factor: ");
        scanf("%d", &factor);


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
            if(i % factor == 0)
            {
                sum += i;

                if(flag == 0)
                {
                    max = i;
                    flag++;
                }
        

                if(i > max)
                    max = i;
            }
        }

        printf("sum = %d\n", sum);
        printf("max = %d\n", max);
    }   
}