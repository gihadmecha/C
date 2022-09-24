// Write a program that reads the radius of a circle and
// calculates the area and circumference.

#include <stdio.h>

int main()
{
    double radius;
    double pi = 22.0 / 7.0;
    double area;
    double circumference;

    while (1)
    {
        printf("\n\na program that reads the radius of a circle and calculates the area and circumference.\n\n");

        //user inputs
        radius = -1;
        while (radius < 0)
        {
            printf("Enter a positive radius: ");
            scanf("%lf", &radius);
        }
        
        
        area = pi * radius * radius;
        circumference = 2 * pi * radius;

        //show results
        printf("the area = %lf\n", area);
        printf("the circumference = %lf\n", circumference);
    } 
}