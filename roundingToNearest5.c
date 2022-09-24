//write c program to round the user's grade to the nearest 5

//note:
    // 0 % 5 = 0
    // 1 % 5 = 1
    // 2 % 5 = 2
    // 3 % 5 = 3
    // 4 % 5 = 4
    // 5 % 5 = 0
    // 6 % 5 = 1
    // 7 % 5 = 2
    // 8 % 5 = 3
    // 9 % 5 = 4


#include <stdio.h>

int main ()
{
    //defination
    signed int grade;
    signed int rightDigit;

    while (1)
    {
        //user input
        grade = -1;
        while (grade < 0 || grade > 100)
        {
            printf ("Enter your Grade: ");
            scanf ("%d", &grade);
        }


        //get the right digit
        //ex: if grade = 72,    72 % 5 = 2
        //ex: if grade = 73,    73 % 5 = 3
        //rightDigit = grade % 10;
        rightDigit = grade % 5;

        //the rounding operation
        if (rightDigit < 3)
      //ex: grade = 72    - 2               = 70
            grade = grade - rightDigit;  
        else
      //ex: grade = 73    + (5 - 3)           = 75          
            grade = grade + (5 - rightDigit);


        //show results
        if (grade >= 80)
            printf ("your grade %d  A\n", grade);
        else if (grade < 80 && 70 <= grade)
            printf ("your grade %d  B\n", grade);
        else if (grade < 70 && 60 <= grade)
            printf ("your grade %d  C\n", grade);
        else if (grade < 60 && 50 <= grade)
            printf ("your grade %d  D\n", grade);
        else
            printf ("your grade %d  F\n", grade);   
    }
}