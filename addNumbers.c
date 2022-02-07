// Write a program to take numbers from user and
// calculate the sum of them (let users choose the No of
// numbers.

#include <stdio.h>


int main ()
{
    while(1)
    {
        signed int NoOfNunbers;
        signed int num;
        signed int sum = 0;
        

        printf("Enter the No. of numbers: ");
        scanf("%d", &NoOfNunbers);

        if(NoOfNunbers <= 0)
        {
            return 0;
        }



        for(int i = 1; i <= NoOfNunbers; i++)
        {
            printf("Enter number %d: ", i);
            scanf("%d", &num);

            sum += num;
            
        }
        
        
        printf("Ans = %d \n", sum);
    }
}