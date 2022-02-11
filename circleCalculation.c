// Write a program that reads the radius of a circle and
// calculates the area and circumference.

#include <stdio.h>


int main ()
{
    double radius = -1;
    double pi = 22.0 / 7;
    double area;
    double circumference;
    

    while(1)
    {
        radius = -1;
        while(radius < 0.0)
        {
            printf("Enter a positive integer radius: ");
            scanf("%lf", &radius);
        }

        area = pi * radius *radius;
        circumference = 2 * pi * radius;

        printf("radius = %lf \n", radius);
        printf("pi = %lf \n", pi);
        printf("the area = %lf \n", area);
        printf("the circumference = %lf \n", circumference);
    }
}