#include <stdio.h>
#include "myMaths.h"
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