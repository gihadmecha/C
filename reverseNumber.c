// Write a program to reverse a number in decimal
// representation (1205->5021).

#include <stdio.h>


int main ()
{
    int num;
    
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        while(num != 0)
        {
            printf("%d", num % 10);
            num = num / 10;
        }
        printf("\n");
    }
}