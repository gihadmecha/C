

#include "sudoku.h"

void array_of9Arrayof3ArrayOf3Int_sudokuPrint (signed int arr[][3][3], signed int square, signed int row, signed int column)
{
    printf ("\n");

    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int squareIndex = 0; squareIndex < 3; squareIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                printf ( "%d ", arr[squareIndex][rowIndex][columnIndex] );
            }

            printf ("|");
        }

        printf ("\n");
    }

    for (signed int columnIndex = 0; columnIndex < 19; columnIndex++)
    {
        printf ("-");

        if ( columnIndex == 5 || columnIndex == 11)
        {
            printf ("+");
        }
    }
    printf ("\n");


    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int squareIndex = 3; squareIndex < 6; squareIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                printf ( "%d ", arr[squareIndex][rowIndex][columnIndex] );
            }

            printf ("|");
        }

        printf ("\n");
    }

    for (signed int columnIndex = 0; columnIndex < 19; columnIndex++)
    {
        printf ("-");

        if ( columnIndex == 5 || columnIndex == 11)
        {
            printf ("+");
        }
    }
    printf ("\n");


    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int squareIndex = 6; squareIndex < 9; squareIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                printf ( "%d ", arr[squareIndex][rowIndex][columnIndex] );
            }

            printf ("|");
        }

        printf ("\n");
    }

    printf ("\n");
}

void array_of9Arrayof3ArrayOf3Int_sudokuSet (signed int arr[][3][3], signed int square, signed int row, signed int column)
{
    // for (signed int squareIndex = 1; squareIndex <= square; squareIndex++)
    // {
        // for (signed int rowIndex = 1; rowIndex <= row; rowIndex++)
        // {
            // for (signed int columnIndex = 1; columnIndex <= column; columnIndex++)
            // {
                // // printf ("sudoku[%d][%d][%d] = ", squareIndex, rowIndex, columnIndex);
                // // scanf ("%d", &arr[squareIndex-1][rowIndex-1][columnIndex-1]);

            // }
        // }
    // }

    arr[0][0][0] = 0;    arr[0][0][1] = 0;    arr[0][0][2] = 5;    arr[1][0][0] = 0;    arr[1][0][1] = 0;    arr[1][0][2] = 0;    arr[2][0][0] = 8;    arr[2][0][1] = 0;    arr[2][0][2] = 0;
    arr[0][1][0] = 8;    arr[0][1][1] = 1;    arr[0][1][2] = 6;    arr[1][1][0] = 0;    arr[1][1][1] = 0;    arr[1][1][2] = 5;    arr[2][1][0] = 4;    arr[2][1][1] = 2;    arr[2][1][2] = 7;
    arr[0][2][0] = 7;    arr[0][2][1] = 0;    arr[0][2][2] = 2;    arr[1][2][0] = 6;    arr[1][2][1] = 0;    arr[1][2][2] = 0;    arr[2][2][0] = 0;    arr[2][2][1] = 1;    arr[2][2][2] = 9;
    arr[3][0][0] = 2;    arr[3][0][1] = 0;    arr[3][0][2] = 0;    arr[4][0][0] = 0;    arr[4][0][1] = 0;    arr[4][0][2] = 7;    arr[5][0][0] = 3;    arr[5][0][1] = 0;    arr[5][0][2] = 1;
    arr[3][1][0] = 6;    arr[3][1][1] = 9;    arr[3][1][2] = 0;    arr[4][1][0] = 1;    arr[4][1][1] = 0;    arr[4][1][2] = 8;    arr[5][1][0] = 7;    arr[5][1][1] = 0;    arr[5][1][2] = 0;
    arr[3][2][0] = 3;    arr[3][2][1] = 7;    arr[3][2][2] = 1;    arr[4][2][0] = 5;    arr[4][2][1] = 0;    arr[4][2][2] = 0;    arr[5][2][0] = 0;    arr[5][2][1] = 4;    arr[5][2][2] = 0;
    arr[6][0][0] = 0;    arr[6][0][1] = 6;    arr[6][0][2] = 0;    arr[7][0][0] = 9;    arr[7][0][1] = 0;    arr[7][0][2] = 2;    arr[8][0][0] = 0;    arr[8][0][1] = 0;    arr[8][0][2] = 0;
    arr[6][1][0] = 1;    arr[6][1][1] = 0;    arr[6][1][2] = 3;    arr[7][1][0] = 0;    arr[7][1][1] = 4;    arr[7][1][2] = 0;    arr[8][1][0] = 9;    arr[8][1][1] = 7;    arr[8][1][2] = 0;
    arr[6][2][0] = 5;    arr[6][2][1] = 8;    arr[6][2][2] = 0;    arr[7][2][0] = 7;    arr[7][2][1] = 0;    arr[7][2][2] = 0;    arr[8][2][0] = 2;    arr[8][2][1] = 6;    arr[8][2][2] = 4;


    // arr[0][0][0] = 9;    arr[0][0][1] = 4;    arr[0][0][2] = 5;    arr[1][0][0] = 2;    arr[1][0][1] = 7;    arr[1][0][2] = 1;    arr[2][0][0] = 8;    arr[2][0][1] = 3;    arr[2][0][2] = 6;
    // arr[0][1][0] = 8;    arr[0][1][1] = 1;    arr[0][1][2] = 6;    arr[1][1][0] = 3;    arr[1][1][1] = 9;    arr[1][1][2] = 5;    arr[2][1][0] = 4;    arr[2][1][1] = 2;    arr[2][1][2] = 7;
    // arr[0][2][0] = 7;    arr[0][2][1] = 3;    arr[0][2][2] = 2;    arr[1][2][0] = 6;    arr[1][2][1] = 8;    arr[1][2][2] = 4;    arr[2][2][0] = 5;    arr[2][2][1] = 1;    arr[2][2][2] = 9;
    // arr[3][0][0] = 2;    arr[3][0][1] = 0;    arr[3][0][2] = 8;    arr[4][0][0] = 4;    arr[4][0][1] = 6;    arr[4][0][2] = 7;    arr[5][0][0] = 3;    arr[5][0][1] = 9;    arr[5][0][2] = 1;
    // arr[3][1][0] = 6;    arr[3][1][1] = 9;    arr[3][1][2] = 4;    arr[4][1][0] = 1;    arr[4][1][1] = 3;    arr[4][1][2] = 8;    arr[5][1][0] = 7;    arr[5][1][1] = 5;    arr[5][1][2] = 2;
    // arr[3][2][0] = 3;    arr[3][2][1] = 7;    arr[3][2][2] = 1;    arr[4][2][0] = 5;    arr[4][2][1] = 2;    arr[4][2][2] = 9;    arr[5][2][0] = 6;    arr[5][2][1] = 4;    arr[5][2][2] = 8;
    // arr[6][0][0] = 4;    arr[6][0][1] = 6;    arr[6][0][2] = 7;    arr[7][0][0] = 9;    arr[7][0][1] = 5;    arr[7][0][2] = 2;    arr[8][0][0] = 1;    arr[8][0][1] = 8;    arr[8][0][2] = 3;
    // arr[6][1][0] = 1;    arr[6][1][1] = 0;    arr[6][1][2] = 3;    arr[7][1][0] = 8;    arr[7][1][1] = 4;    arr[7][1][2] = 6;    arr[8][1][0] = 9;    arr[8][1][1] = 7;    arr[8][1][2] = 5;
    // arr[6][2][0] = 5;    arr[6][2][1] = 8;    arr[6][2][2] = 0;    arr[7][2][0] = 7;    arr[7][2][1] = 1;    arr[7][2][2] = 3;    arr[8][2][0] = 2;    arr[8][2][1] = 6;    arr[8][2][2] = 4;

}

void array_of9Arrayof3ArrayOf3Int_sudokuSetCopy (signed int arrCopy[][3][3], signed int arrOrigin[][3][3], signed int square, signed int row, signed int column)
{
    for (signed int squareIndex = 0; squareIndex < square; squareIndex++)
    {
        for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                arrCopy[squareIndex][rowIndex][columnIndex] = arrOrigin[squareIndex][rowIndex][columnIndex];
            }
        }
    }
}

signed int squareSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputRowIndex, signed int inputColumnIndex, signed int number)
{
    for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
    {
        for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
        {
            if ( rowIndex != inputRowIndex && columnIndex != inputColumnIndex)
            {
                if ( sudoku[inputSquareIndex][rowIndex][columnIndex] == number )
                return 1;
            }
        }
    }

    return 0;
}

signed int bigRowSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputRowIndex, signed int number)
{
    if ( inputSquareIndex < 3)
    {
        for (signed int squareIndex = 0; squareIndex < 3; squareIndex++)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
                {
                    if ( sudoku[squareIndex][inputRowIndex][columnIndex] == number )
                        return 1;
                }
            }
        }

    }
    else if ( inputSquareIndex >= 3 && inputSquareIndex < 6)
    {
        for (signed int squareIndex = 3; squareIndex < 6; squareIndex++)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
                {
                    if ( sudoku[squareIndex][inputRowIndex][columnIndex] == number )
                        return 1;
                }
            }
        }
    }
    else if ( inputSquareIndex < 9)
    {
        for (signed int squareIndex = 6; squareIndex < 9; squareIndex++)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int columnIndex = 0; columnIndex < 3; columnIndex++)
                {
                    if ( sudoku[squareIndex][inputRowIndex][columnIndex] == number )
                        return 1;
                }
            }

        }
    }

    return 0;
}

signed int bigColumnSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputColumnIndex, signed int number)
{
    if ( inputSquareIndex == 0 || inputSquareIndex == 3 || inputSquareIndex == 6)
    {
        for (signed int squareIndex = 0; squareIndex <= 6 ; squareIndex+=3)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
                {
                    if ( sudoku[squareIndex][rowIndex][inputColumnIndex] == number )
                        return 1;
                }
            }
        }
    }
    else if ( inputSquareIndex == 1 || inputSquareIndex == 4 || inputSquareIndex == 7)
    {
        for (signed int squareIndex = 1; squareIndex <= 7; squareIndex+=3)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
                {
                    if ( sudoku[squareIndex][rowIndex][inputColumnIndex] == number )
                        return 1;
                }
            }
        }
    }
    else if ( inputSquareIndex == 2 || inputSquareIndex == 5 || inputSquareIndex == 8)
    {
        for (signed int squareIndex = 2; squareIndex <= 8; squareIndex+=3)
        {
            if (squareIndex != inputSquareIndex)
            {
                for (signed int rowIndex = 0; rowIndex < 3; rowIndex++)
                {
                    if ( sudoku[squareIndex][rowIndex][inputColumnIndex] == number )
                        return 1;
                }
            }
        }
    }

    return 0;
}

void array_of9Arrayof3ArrayOf3Int_sudokoInput (signed int sudoku[][3][3], signed int* inputSquareIndex, signed int* inputRowIndex, signed int* inputColumnIndex, signed int* inputNumber)
{
        printf ("\nchoose allowed space !!\n");
        array_of9Arrayof3ArrayOf3Int_sudokuPrint ( sudoku, 9, 3, 3);

        *inputNumber = -1;

        do
        {
            printf ("Enter square Index from 1 to 9 = ");
            scanf ("%d", inputSquareIndex);
            *inputSquareIndex = *inputSquareIndex - 1;
        }while (*inputSquareIndex < 0 || *inputSquareIndex >= 9);

        do
        {
            printf ("Enter row Index from 1 to 3 = ");
            scanf ("%d", inputRowIndex);
            *inputRowIndex = *inputRowIndex - 1;
        }while (*inputRowIndex < 0 || *inputRowIndex >= 3);

        do
        {
            printf ("Enter column Index from 1 to 3 = ");
            scanf ("%d", inputColumnIndex);
            *inputColumnIndex = *inputColumnIndex - 1;
        }while (*inputColumnIndex < 0 || *inputColumnIndex >= 3);

        while (*inputNumber < 1 || *inputNumber > 9)
        {
            printf ("Enter a number from 1 to 9 = ");
            scanf ("%d", inputNumber);
        }
}

signed int array_of9Arrayof3ArrayOf3Int_sudokoSearchAvailableSpace ( signed int sudoku[][3][3], signed int square, signed int row, signed int column)
{
    for (signed int squareIndex = 0; squareIndex < square; squareIndex++)
    {
        for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
        {
            for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
            {
                if ( sudoku[squareIndex][rowIndex][columnIndex] == 0 )
                    return 1;
            }
        }
    }

    return 0;
}

void array_of9Arrayof3ArrayOf3Int_sudokoPlay (signed int sudoku[][3][3], signed int square, signed int row, signed int column)
{
    signed int inputSquareIndex;
    signed int inputRowIndex;
    signed int inputColumnIndex;
    signed int inputNumber;

    signed int sudokuSet[9][3][3];

    array_of9Arrayof3ArrayOf3Int_sudokuSetCopy ( sudokuSet, sudoku, square, row, column);

    while ( array_of9Arrayof3ArrayOf3Int_sudokoSearchAvailableSpace ( sudoku, square, row, column) )
    {
        array_of9Arrayof3ArrayOf3Int_sudokoInput ( sudoku, &inputSquareIndex, &inputRowIndex, &inputColumnIndex, &inputNumber);

        while ( squareSearch (sudoku, inputSquareIndex, inputRowIndex, inputColumnIndex, inputNumber) || sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] != 0 || bigRowSearch ( sudoku, inputSquareIndex, inputRowIndex, inputNumber) || bigColumnSearch ( sudoku, inputSquareIndex, inputColumnIndex, inputNumber) )
        {
            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] != 0)
                printf ("\nspace( %d, %d, %d) is not allowed space !!\n ", inputSquareIndex + 1, inputRowIndex + 1, inputColumnIndex + 1);

            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 && squareSearch (sudoku, inputSquareIndex, inputRowIndex, inputColumnIndex, inputNumber))
                printf ("\n%d is duplicated in the square %d !!\n ", inputNumber, inputSquareIndex + 1);

            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 && bigRowSearch ( sudoku, inputSquareIndex, inputRowIndex, inputNumber) )
                printf ("\n%d is duplicated in the same big row !!\n ", inputNumber);

            if (sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 && bigColumnSearch ( sudoku, inputSquareIndex, inputColumnIndex, inputNumber))
                printf ("\n%d is duplicated in the same big column !!\n ", inputNumber);

            if ( sudokuSet[inputSquareIndex][inputRowIndex][inputColumnIndex] == 0 )
                sudoku[inputSquareIndex][inputRowIndex][inputColumnIndex] = inputNumber;

            array_of9Arrayof3ArrayOf3Int_sudokoInput ( sudoku, &inputSquareIndex, &inputRowIndex, &inputColumnIndex, &inputNumber);
        }

        sudoku[inputSquareIndex][inputRowIndex][inputColumnIndex] = inputNumber;
    }

    array_of9Arrayof3ArrayOf3Int_sudokuPrint ( sudoku, 9, 3, 3);

    printf ("Congratulation !!\n");
}

void array_of9Arrayof3ArrayOf3Int_sudoku ()
{
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  -------+--------+------
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  -------+--------+------
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0
    //  0 0 0  | 0 0 0  | 0 0 0

    signed int sudoku[9][3][3] = {0};

    signed int square = 9;
    signed int row = 3;
    signed int column = 3;

    array_of9Arrayof3ArrayOf3Int_sudokuSet ( sudoku, square, row, column);

    array_of9Arrayof3ArrayOf3Int_sudokoPlay (sudoku, square, row, column);
}

