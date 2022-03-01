#include <stdio.h>

void string_print( unsigned char* str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        printf("%c", *(str + i));
    }
    printf("\n");
}

void arrayOfArray_print ( unsigned char arr[][10], double size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        string_print(*(arr + i));
        // for (unsigned int j = 0; arr[i][j]; j++)
        // {
        //     printf("%c", arr[i][j]);
        // }
        // printf("\n");
    } 

    printf ("%d \n", sizeof(arr)); 
}

int main ()
{
    unsigned char arr[3][10] = { "ahmed", "khalad"};
    // printf ("%u %u \n", arr, *arr);

    // unsigned char (*p)[10] = arr;  
    // //unsigned char p[ ][10]; 
    // //p = arr;
    // printf ("%c \n", p[1][4]);
    // printf ("%d \n", sizeof(*(arr + 1)[0]));   
    // arrayOfArray_print ( arr, 3); 
    // printf ("%d \n", sizeof(arr)); 

    printf("%c\n", *(*(arr + 1) + 4));
    printf("%c\n", arr[1][4]);
    
    for (unsigned int i = 0; i < 3; i++)
    {
        for (unsigned int j = 0; j < 10; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    } 


    printf("%c\n", arr[0][14]);

    for (unsigned int j = 0; j < 30; j++)
    {
        printf("%c", arr[0][j]);
        
        if ( (j + 1) % 10 == 0 )
        {
            printf("\n");
        }
    }


    unsigned char (*p)[10] = arr;
    printf("%u  %u \n", p, p + 1);  

    printf("%c\n", *( *(p + 1) + 4 ) );
    printf("%c\n", p[1][4]); 
    printf("%c\n", *( (unsigned char*)p + 14 ) );

    for (unsigned int j = 0; j < 30; j++)
    {
        printf("%c",  *( (unsigned char*)p + j) );

        if ( (j + 1) % 10 == 0 )
        {
            printf("\n");
        }
    }

    // unsigned int size = sizeof(arr) / sizeof(arr[0]);
    // arrayOfArray_print (arr, size);
    // printf ("%d \n", sizeof(arr));

}