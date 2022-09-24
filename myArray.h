#include <stdio.h>
#include <stdlib.h>
#include "myMaths.h"

#define NULLPTR (void *) 0

void array_print ( signed int arr[], signed int size);
void array_printChar ( unsigned char arr1[], signed int size);
signed int array_search ( signed int arr[], signed int size, signed int number);
signed int array_searchLastIndexOfNumber ( signed int arr[], signed int size, signed int number);
void array_getMaxAndMin ( signed int arr[], signed int size, signed int* max, signed int* maxIndex, signed int* min, signed int* minIndex);
signed int array_getIndexOfMax ( signed int *arr, signed int size);
signed int array_getIndexOfMin ( signed int *arr, signed int size);
signed int array_betweenTwoNumbers ( signed int arr[], signed int size,signed int number1, signed int number2);
signed int array_mostRepeatedNumber (signed int arr[], signed int size);
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
signed char array_mostRepeatedChar ( signed char arr[], signed int size, signed int* noOfRepeats);
signed int array_charArrayToInt ( unsigned char arr[], signed int size);
signed int array_compareChar (  unsigned char arr1[], unsigned char arr2[], signed int arr1Size, signed int arr2Size);