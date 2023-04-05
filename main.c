
#include "coding.h"
#include "myArray.h"

int main ()
{
    
    //printf ("%d\n", u8IsPowerOfThree (12));

    // int arr1[] = {1, 3, 8, 12, 16, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int arr1Size = sizeof (arr1) / sizeof (arr1[0]);
    // int result_count;
    // int* result = isPower (arr1Size, arr1, &result_count);
    // array_print (arr1, arr1Size);
    // array_print (result, result_count);

    // int arr1[] = {1, 3, 8, 12, 16, 20, 4, 9, 16, 128, 255, 13, 2147483648, 2147483649, 4294967296, 4294967295};
    // int sum = arraySum ( 5, arr1);
    // printf ("%d \n", sum);

    // int maxXOR = maximum_XOR (10, 15);
    // printf ("%d\n", maxXOR);

    // int sum = addNumbers2 (1.1, 3.89);
    // printf ("%d\n", sum);

    int result = checkEvenOrOdd (128);
    printf ("%d\n", result);
}