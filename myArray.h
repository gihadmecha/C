#include <stdio.h>
#include <stdlib.h>
#include "myBasics.h"

#define NULLPTR (void *) 0

void array_print ( signed int arr[], signed int size);
void array_printChar ( unsigned char arr1[], signed int size);
signed int array_search ( signed int arr[], signed int size, signed int number);
signed int array_sorted_search ( signed int arr[], signed int size, signed int number);
signed int array_searchLastIndexOfNumber ( signed int arr[], signed int size, signed int number);
void array_getMaxAndMin ( signed int arr[], signed int size, signed int* max, signed int* maxIndex, signed int* min, signed int* minIndex);
signed int array_getIndexOfMax ( signed int *arr, signed int size);
signed int array_getIndexOfMin ( signed int *arr, signed int size);
signed int array_betweenTwoNumbers ( signed int arr[], signed int size,signed int number1, signed int number2);
signed int array_mostRepeatedNumber (signed int arr[], signed int size);
signed int array_oOfN_mostRepeatedNumber ( signed int arr[], signed int size);
signed int array_oOfN_mostRepeatedMono ( signed int arr[], signed int arrSize);
signed char array_mostRepeatedChar ( signed char arr[], signed int size, signed int* noOfRepeats);
void array_reverse (signed int arr[], signed int size);
void array_reverseChar ( unsigned char arr[], signed int size);
signed int array_swap ( signed int arr1[], signed int arr2[], signed int arr1Size, signed int arr2Size);
signed int array_copy ( signed int arrCopy[], signed int arrOrigin[], signed int sizeCopy, signed int sizeOrigin);
signed int array_copyChar ( unsigned char arrCopy[], unsigned char arrOrigin[], signed int sizeCopy, signed int sizeOrigin);
signed int array_longestChainOfNumber ( signed int arr[], signed int size, signed int number);
signed int array_longestChain ( signed int arr[], signed int size, signed int* longest);
signed int array_longestSequenceChain ( signed int arr[], signed int size);
signed int array_merge1 (  signed int arr1[],  signed int arr2[], signed int arr3[], signed int arr1Size, signed int arr2Size, signed int arr3Size);
signed int array_merge2 ( signed int arr1[], signed int arr2[], signed int arr3[], signed int arr1Size, signed int arr2Size, signed int arr3Size);
signed int array_removePrime (    signed int arr[], signed int size);
signed int array_removeRepeatedSortedNumbers ( signed int arr[], signed int outArr[], signed int size, signed int maxSize);
signed int array_scan ( signed int arr[], signed int size);
signed int array_zeroDetector ( signed int arr[]);
signed int array_biggestDifferenceBetweenTwoNumbers ( signed int arr[], signed int size, signed int* smallNumber, signed int* bigNumber);
signed int array_charArrayToInt ( unsigned char arr[], signed int size);
signed int array_compareChar (  unsigned char arr1[], unsigned char arr2[], signed int arr1Size, signed int arr2Size);
signed int array_compareChar2 (  unsigned char arr1[], unsigned char arr2[], signed int arr1Size, signed int arr2Size);
signed int array_oOfN_findNotTwiceRepeatedNumber ( signed int arr[], signed int size);
signed int array_oOfN_copyWithoutRepeatedNumbers ( signed int arrOrigin[], signed int* array_copy[], signed int arrOriginSize);
void array_bubbleSort ( signed int arr[], signed int size );
void array_selectionSort ( signed int arr[], signed int size);
void array_countingSort ( signed int arr[], signed int arrSize);
signed int array_missedNumber ( signed int arr[], signed int arrSize);
signed int array_repeatedNumber ( signed int arr[], signed int arrSize);
void array_ofArrayOf5Int_print ( signed int arr[][5], signed int arrSize);
void array_ofArrayOf3Int_print ( signed int arr[][3], signed int arrSize);
void array_ofArrayOf3Char_print ( unsigned char arr[][3], signed int row, signed int column);
signed int array_ofArrayOf3Char_searchForSmallArray ( unsigned char arr[][3], signed int arrSize, unsigned char smallNeededArr[], signed int smallNeededArrSize);
signed int array_arrayOf3Char_sortedSearch ( unsigned char bigArray[][3], signed int row, signed int column, unsigned char smallNeededArray[], signed int smallNeededArraySize);
void array_ofArrayOf10Int_print ( signed int arr[][10], signed int arrSize);
void array_OfArrayOf5Int_printZigzag ( signed int arr[][5], signed int arrSize);
signed int array_ofArrayOf3Int_IsdiagonalsEqual ( signed int arr[][3], signed int row, signed int col);
signed int* array_ofArrayOf19Int_dynamic ( );
signed int** array_ofPointersToInt_dynamic ( );
void array_ofPointersToInt ( signed int* arr[], signed int row, signed column);
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