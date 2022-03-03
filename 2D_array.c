#include <stdio.h>

void string_print( unsigned char* str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        printf("%c", *(str + i));
    }
    printf("\n");
}

void array_print( int* arr,  int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d  ", *(arr + i));
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

void arrayOfArray_pageSearch ( unsigned char arr[][10], double lines, unsigned char ch, unsigned int* i_ch, unsigned int* j_ch)
{
    *i_ch = -2;
    *j_ch = -2;
    for (unsigned int i = 0; i < lines; i++)
    {
        for (unsigned int j = 0; arr[i][j]; j++)
        {
            if (arr[i][j] == ch)
            {
                *i_ch = i;
                *j_ch = j;
                return;
            }
        }
    }
 
}

void matrix_print ( signed int arr[][5], double row, double col)
{
    for (unsigned int i = 0; i < col; i++)
    {
        array_print( *(arr + i),  row);

        // for (unsigned int i = 0; i < size; i++)
        // {
        //     printf("%d  ", *(arr + i));
        // }
        // printf("\n");
    } 
}

void matrix_print_zigzag ( signed int arr[][5], double row, double col)
{
    for (unsigned int i = 0; i < row; i++)
    {   
        //if ( i % 2  == 0  )
        if ( (i & 1)  == 0  )
        {
            for (unsigned int j = 0; j < col; j++)
            {
                printf("%2d  ", arr[i][j]);
            }
        }
        else
        {
            //note: if j is unsigned, run time Error
            for ( signed int j = col - 1; j >= 0; j--)
            {
                printf("%2d  ", arr[i][j]);
            }
        }
        printf("\n");
    } 
}

unsigned int matrix_IsDiagnal ( signed int arr[][4], double row, double col)
{
    signed int dignalSum = 0;
    signed int dignalSum2 = 0;

    if (row != col)
    {
        return 0;
    }
    
    for (unsigned int i = 0; i < row; i++)
    {
        for (unsigned int j = 0; j < col; j++)
        {
            if ( i == j)
            {
                dignalSum += arr[i][j];
            }
            
            if (i + j == row - 1)
            {
                dignalSum2 += arr[i][j];
            } 
        }
    } 

    if (dignalSum == dignalSum2)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}

void star_set ( unsigned char arr[][10], double row, double col,  unsigned int star_i, unsigned int star_j)
{
    for (unsigned int i = 0; i < row; i++)
    {
        for (unsigned int j = 0; j < col; j++)
        {
            if ( i == star_i && j == star_j)
            {
                arr[i][j] = '*';
                
            }
            else
            {
                if ( i < star_i && j < star_j)
                {
                    arr[i][j] = '1';
                }
                else if ( i < star_i && j == star_j)
                {
                    arr[i][j] = 'v';
                }
                else if ( i > star_i && j == star_j)
                {
                    arr[i][j] = '^';     
                }
                else if ( i == star_i && j < star_j)
                {
                    arr[i][j] = '-';
                }
                else if ( i == star_i && j > star_j)
                {
                    arr[i][j] = '_';
                }
                else if ( i < star_i && j > star_j)
                {
                    arr[i][j] = '2';
                }
                else if ( i > star_i && j < star_j)
                {
                    arr[i][j] = '3';
                }
                else if ( i > star_i && j > star_j)
                {
                    arr[i][j] = '4';
                }
            }

            printf("%c  ", arr[i][j]);
        }

        printf("\n");
    }   
}

void star_find ( unsigned char arr[][10], double row, double col,  unsigned int* pstar_i, unsigned int* pstar_j)
{
    *pstar_i = -2;
    *pstar_j = -2;
    for (unsigned int i = 0; i < row; i++)
    {
        for (unsigned int j = 0; j < col; j++)
        {
            if (arr[i][j] == '*')
            {
                *pstar_i = i;
                *pstar_j = j;
                return;
            }
        }
    }
}

void star_find_binary_search ( unsigned char arr[][10], double row, double col,  signed int* pstar_i, signed int* pstar_j)
{
    *pstar_i = 7;
    *pstar_j = 5;

    unsigned int first_i = 0;
    unsigned int last_i = row - 1;

    unsigned int first_j = 0;
    unsigned int last_j = col - 1;

    unsigned int middle_i = (first_i + last_i) / 2;
    unsigned int middle_j = (first_j + last_j) / 2;

    // printf("%d  %d\n", first_i, last_i);
    // printf("%d  %d\n", first_j, last_j);
    // printf("%d  %d\n", middle_j, middle_j);

    // unsigned int i ;
    // unsigned int j ;
    

    while ( arr[middle_i][middle_j] != '*')
    {
        middle_i = (first_i + last_i) / 2;
        middle_j = (first_j + last_j) / 2;

        // printf("%d  %d\n", first_i, last_i);
        // printf("%d  %d\n", first_j, last_j);
        // printf("%d  %d\n", middle_j, middle_j);
        
        if (arr[middle_i][middle_j] == '1')
        {
            first_i = middle_i + 1;
            first_j = middle_j + 1;
            // i++;
            // j++;
        }
        else if (arr[middle_i][middle_j] == '2')
        {
            first_i = middle_i + 1;
            last_j = middle_j - 1;
            // i++;
            // j--;
        }
        else if (arr[middle_i][middle_j] == '3')
        {
            last_i = middle_i - 1;
            first_j = middle_j + 1;
            // i--;
            // j++;
        }
        else if (arr[middle_i][middle_j] == '4')
        {
            last_i = middle_i - 1;
            last_j = middle_j - 1;
            // i--;
            // j--;
        }
        else if (arr[middle_i][middle_j] == 'v')
        {
            first_i = middle_i + 1;
            // i++;
        }
        else if (arr[middle_i][middle_j] == '^')
        {
            last_i = middle_i - 1;
            // i--;
        }
        else if (arr[middle_i][middle_j] == '-')
        {
            first_i = middle_j + 1;
            // j++;
        }
        else if (arr[middle_i][middle_j] == '_')
        {
            last_j = middle_j - 1;
            // j--;
        }
    }

    *pstar_i = middle_i;
    *pstar_j = middle_j;
}



int main ()
{
    unsigned char arr[3][10] = { "ahmed", "khalad"};
    unsigned char book[][10] = { "ahmed", "khalad", "asmaa"};
    signed int matrix[5][5] = {{ 1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; 
    signed int matrix2[][4] = { { 1, 2, 3, 4 }, 
                                { 5, 6, 7, 8 },
                                { 1, 2, 3, 4 },
                                { 5, 6, 7, 8 } };

    unsigned char matrix3[10][10];
    
    unsigned matrix_rows = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    unsigned matrix_cols = sizeof(matrix) / sizeof(matrix[0]); 
    unsigned matrix2_rows = sizeof(matrix2[0]) / sizeof(matrix2[0][0]);
    unsigned matrix2_cols = sizeof(matrix2) / sizeof(matrix2[0]);


    unsigned int bookSize = sizeof(book) / sizeof( book[0] ); 

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


    signed int i;
    signed int j;
    unsigned char ch = 'w';
    arrayOfArray_pageSearch ( book, bookSize, ch, &i, &j);
    printf("%c is charcter %d in line %d \n", ch, i + 1, j + 1);

    matrix[2][2] = 8;

    matrix_print ( matrix, matrix_rows, matrix_cols);

    matrix_print_zigzag ( matrix, matrix_rows, matrix_cols);

    if ( matrix_IsDiagnal ( matrix2, matrix2_rows, matrix2_cols) )
    {
        printf("true \n");
    }
    else
    {
        printf("false \n");
    }
    
    star_set ( matrix3, 10, 10, 0, 0);

    
    
    star_find ( matrix3, 10, 10, &i, &j);
    printf("* in row %d col %d \n", i, j );


    star_find_binary_search ( matrix3, 10, 10, &i, &j);
    printf("* in row %d col %d \n",i, j );

}