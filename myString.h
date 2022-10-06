#include <stdio.h>
#include "myBasics.h"
#include "myArray.h"

void string_print ( unsigned char str[]);
signed int string_search (  unsigned char str[], unsigned char character);
signed int string_searchLastIndexOfCharacter (  unsigned char str[], unsigned char character);
signed int string_length (  unsigned char str[]);
void string_reverse (   unsigned char str[]);
void string_copy (unsigned char strCopy[], unsigned char strOrigin[], signed int strCopySize);
unsigned char string_mostRepeatedCharacter ( unsigned char str[]);
void string_swap1 ( unsigned char str1[], unsigned char str2[]);
void string_swap2 ( unsigned char str1[], unsigned char str2[]);
void string_scan ( unsigned char str[], signed int size);
signed int string_IsMirror ( unsigned char str[]);
void string_reverseWordsInSentence (unsigned char str[]);
unsigned char* string_triangle (unsigned char str[]);
void string_floatToString ( unsigned char str[], signed int size, float number);
signed int string_stringToInt ( unsigned char str[]);
signed int string_compare (unsigned char str1[], unsigned char str2[]);
signed int string_replace(unsigned char mainString[], unsigned char findString[], unsigned char replaceString[], unsigned char newString[], signed int newStringSize);
void string_printWordNumberOftimesAsTheNumberAfterIt( unsigned char str[]);
void string_longestWord (unsigned char str[], unsigned char longestWord[], signed int maxlongestWordSize);
signed int string_longestWordSize (unsigned char str[]);
unsigned char string_firstRepeatedCharacter ( unsigned char str[]);
unsigned char string_oOfN_firstRepeatedCharacter ( unsigned char str[]);
void string_oOfN_copyWithoutRepeatedCharacters ( unsigned char strCopy[], unsigned char strOrigin[], signed int strCopySize);
void array_ofPointersToChar_stringPrint ( unsigned char* arr[], signed int size);
signed int array_ofPointersToChar_IsStingExist ( unsigned char* strList[], signed int strListSize, unsigned char strNeeded[]);
signed int string_compare2(unsigned char str1[], unsigned char str2[]);
signed int array_ofPointersToChar_stringSearch ( unsigned char* strPointerList[], signed int strPointerListSize, unsigned char strNeeded[]);
void array_ofPointersToChar_selectionSort ( unsigned char* strPointerList[], signed int strPointerListSize);
signed int array_ofPointersToChar_sorted_search ( unsigned char* strPointerList[], signed int strPointerListSize, unsigned char strNeeded[]);
void array_ofArrayOf10Char_print ( unsigned char arr[][10], signed int arrSize);
void array_ofArrayOf10Char_print2 ( unsigned char arr[][10], signed int row, signed int column);
void array_ofArrayOfChar_search ( unsigned char arr[][10], signed int arrSize, unsigned char character, signed int* neededArrIndex, signed int* neddedElementIndex);
void array_OfArrayOf10Char_setStar ( unsigned char arr[][10], signed int row, signed int column, signed int starRowIndex, signed int starColumnIndex);
void array_OfArrayOf10Char_starSearch ( unsigned char arr[][10], signed int row, signed int column, unsigned char character, signed int* neededRowIndex, signed int* neededColumnIndex);
