#include <stdio.h>


int main ()
{
    while(1)
    {
        signed int NoOfNunbers;
        signed int num = 0;
        signed int sum = 0;
        signed int factor;

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
            }
        }


        printf("Ans = %d \n", sum);
    } 
}
