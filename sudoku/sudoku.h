
#include <stdio.h>

void array_of9Arrayof3ArrayOf3Int_sudokuSet (signed int arr[][3][3], signed int square, signed int row, signed int column);
void array_of9Arrayof3ArrayOf3Int_sudokuPrint (signed int arr[][3][3], signed int square, signed int row, signed int column);
void array_of9Arrayof3ArrayOf3Int_sudokuSetCopy (signed int arrCopy[][3][3], signed int arrOrigin[][3][3], signed int square, signed int row, signed int column);
signed int squareSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputRowIndex, signed int inputColumnIndex, signed int number);
signed int bigRowSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputRowIndex, signed int number);
signed int bigColumnSearch ( signed int sudoku[][3][3], signed int inputSquareIndex, signed int inputColumnIndex, signed int number);
void array_of9Arrayof3ArrayOf3Int_sudokoInput (signed int sudoku[][3][3], signed int* inputSquareIndex, signed int* inputRowIndex, signed int* inputColumnIndex, signed int* inputNumber);
signed int array_of9Arrayof3ArrayOf3Int_sudokoSearchAvailableSpace ( signed int sudoku[][3][3], signed int square, signed int row, signed int column);
void array_of9Arrayof3ArrayOf3Int_sudokoPlay (signed int sudoku[][3][3], signed int square, signed int row, signed int column);
void array_of9Arrayof3ArrayOf3Int_sudoku ();
