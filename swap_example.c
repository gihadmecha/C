
#include <stdio.h>


void swap ( signed int* px, signed int* py)
{
    signed int temp = *px;
    *px = *py;
    *py = temp;
}

// void swap_Error ( signed int* ppx, signed int* ppy)
// {
//     signed int temp = **ppx;
//     **ppx = **ppy;
//     **ppy = temp;
// }

void swap_pointer ( signed int** ppx, signed int** ppy)
{
    signed int* temp = *ppx;
    *ppx = *ppy;
    *ppy = temp;
}

void swap_withPointerToPointer ( signed int** ppx, signed int** ppy)
{
    signed int temp = **ppx;
    **ppx = **ppy;
    **ppy = temp;
}

void swap_variantTypePointers ( signed char** ppx, signed int** ppy)
{
    signed int* temp = *ppx;
    *ppx = *ppy;
    *ppy = temp;
}

void swap_withVariantTypePointers ( signed char** ppx, signed int** ppy)
{
    signed int temp = **ppx;
    printf ("%d \n", **ppx);
    printf ("%d \n", temp);
    printf ("%d \n", **ppy);
    **ppx = **ppy;
    **ppy = temp;
    printf ("%d \n", **ppx);
    printf ("%d \n", temp);
    printf ("%d \n", **ppy);
}



int main ()
{
    signed int x = 300, y = 1000;
    signed int* p1 = &x;
    signed int* p2 = &y;
    signed char* p3 = &x;

    printf ("%d     %u      %u\n", x, &x, p1);
    printf ("%d     %u      %u\n", y, &y, p2);
    printf ("%u     %u      %u \n", p1, &x, &p1);
    printf ("%u     %u      %u \n", p2, &y, &p2);
    printf ("%u     %u      %u \n", p3, &y, &p3);
    printf ("\n");

    //swap ( p1, p2);
    //swap ( &p1, &p2);
    //swap_Error ( &p1, &p2);
    //swap_pointer ( &p1, &p2);
    //swap_withPointerToPointer ( &p1, &p2);
    //swap_variantTypePointers ( &p3, &p2);
    //swap_withVariantTypePointers ( &p3, &p2);

    // swap_variantTypePointers ( &p1, &p2);
    swap_withVariantTypePointers ( &p1, &p2);

    printf ("%d     %u      %u\n", x, &x, p1);
    printf ("%d     %u      %u\n", y, &y, p2);
    printf ("%u     %u      %u \n", p1, &x, &p1);
    printf ("%u     %u      %u \n", p2, &y, &p2);
    printf ("%u     %u      %u \n", p3, &y, &p3);
    printf ("\n");
}