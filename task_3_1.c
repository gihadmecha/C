#include <stdio.h>


int main ()
{
    
    signed int NoOfNunbers;
    signed int num;
    signed int sum = 0;
    signed int factor;
    signed int max;
    signed int flag = 0;

    while(1)
    {
        sum = 0;
        flag = 0;

        printf("Enter the No. of numbers: ");
        scanf("%d", &NoOfNunbers);

        if(NoOfNunbers <= 0)
        {
            return 0;
        }

        printf("Enter factor: ");
        scanf("%d", &factor);



        for(int i = 1; i <= NoOfNunbers; i++)
        {
            printf("Enter number %d: ", i);
            scanf("%d", &num);
            if(num % factor == 0)
            {
                sum += num;

                if(flag == 0)
                {
                    max = num;
                    flag++;
                }
        

                if(num > max)
                    max = num;

            }
        }


        printf("Ans = %d \n", sum);
        printf("max = %d \n", max);
    }
     
}
