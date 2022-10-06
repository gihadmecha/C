
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
    // printf ("%d \n", **ppx);
    // printf ("%d \n", temp);
    // printf ("%d \n", **ppy);
    **ppx = **ppy;
    **ppy = temp;
    // printf ("%d \n", **ppx);
    // printf ("%d \n", temp);
    // printf ("%d \n", **ppy);
}



int main ()
{
    signed int x = 300; 
    signed int y = 1000;
    signed int* p1 = &x;
    signed int* p2 = &y;
    signed char* p3 = &x;
    
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap ( p1, p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");


    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap ( &p1, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");

    // x = 300;
    // y = 1000;
    // p1 = &x;
    // p2 = &y;
    // //p3 = &x;
    // printf ("%d   %d    %p   %p    %p   %p         %p    %p      \n", 
    //           x,   y,   &x,  &y,   p1,  p2,       &p1,  &p2        );
    // swap_Error ( &p1, &p2);
    // printf ("%d   %d    %p   %p    %p   %p         %p    %p      \n", 
    //           x,   y,   &x,  &y,   p1,  p2,       &p1,  &p2        );
    // printf ("\n");

    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap_pointer ( &p1, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");

    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap_withPointerToPointer ( &p1, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");

    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap_variantTypePointers ( &p3, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");

    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap_withVariantTypePointers ( &p3, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");

    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap_variantTypePointers ( &p1, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");

    x = 300;
    y = 1000;
    p1 = &x;
    p2 = &y;
    p3 = &x;
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    swap_withVariantTypePointers ( &p1, &p2);
    printf ("%d   %d    %p   %p    %p   %p    %p   %p    %p   %p   \n", 
              x,   y,   &x,  &y,   p1,  p2,   p3, &p1,  &p2, &p3      );
    printf ("\n");
}