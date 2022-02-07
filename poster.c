// You are designing a poster which prints out numbers
// with a unique style applied to each of them. The styling
// is based on the number of closed paths or holes present
// in a giver number. The number of holes that each of the
// digits from 0 to 9 have are equal to the number of
// closed paths in the digit. Their values are:
// 1, 2, 3, 5 and 7 = 0 holes.
// 0, 4, 6, and 9 = 1 hole.
// 8 = 2 holes.
// Example if number 3824->3 has 0 holes,8 has 2
// holes,4 has 1hole sum=0+2+1=3.


#include <stdio.h>



int main ()
{
    int num;
    int last_num;
    int sum;
    int rightDigit;

    printf("Enter a positive integer number: ");
    scanf("%d", &num);


    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }
    sum = 0;
    while(last_num != 0)
    {
            rightDigit = last_num % 10;
            if(rightDigit == 1 || rightDigit == 2 || rightDigit == 3 || rightDigit == 5 || rightDigit == 7)
            {
                rightDigit = 0;
            }
            else if(rightDigit == 0 || rightDigit == 4 || rightDigit == 6 || rightDigit == 9)
            {
                rightDigit = 1;
            }
            else if(rightDigit == 8)
            {
                rightDigit = 2;
            }
            sum += rightDigit;
            last_num = last_num / 10;  
    }

    printf("sum = %d\n", sum);
}