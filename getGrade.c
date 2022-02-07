
#include <stdio.h>


int main ()
{
    signed int grade;
    signed int digit;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    
    digit = grade % 5;
    if(digit < 3)
    {
        grade = grade - digit;
    }
    else 
    {
        grade = grade + (5 - digit);
    }



    if(grade >= 0 && grade < 50)
    {
        printf("your grade: %d F \n", grade);
    }
    else if(grade >= 50 && grade < 60)
    {
        printf("your grade: %d D \n", grade);
    }
    else if(grade >= 60 && grade < 70)
    {
        printf("your grade: %d C \n", grade);
    }
    else if(grade >= 70 && grade < 80)
    {
        printf("your grade: %d B \n", grade);
    }
    else if(grade >= 80 && grade <=100)
    {
        printf("your grade: %d A \n", grade);
    }

}