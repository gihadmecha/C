
#include "myString.h"

void string_print(unsigned char str[])
{
    for (signed int index = 0; *(str + index); index++)
    {
        printf("%c", *(str + index));
    }

    printf("\n");
}

signed int string_search(unsigned char str[], unsigned char character)
{
    for (signed int index = 0; *(str + index); index++)
    {
        if (*(str + index) == character)
            return index;
    }

    return -1;
}

signed int string_searchLastIndexOfCharacter(unsigned char str[], unsigned char character)
{
    signed int lastCharacterIndex = -1;

    for (signed int index = 0; *(str + index); index++)
    {
        if (*(str + index) == character)
            lastCharacterIndex = index;
    }

    return lastCharacterIndex;
}

signed int string_length(unsigned char str[])
{
    signed int index;
    for (index = 0; *(str + index); index++)
        ;
    return index;
}

void string_reverse(unsigned char str[])
{
    signed int size = string_length(str);

    for (signed int index = 0; index < size / 2; index++)
    {
        swap_char(str + index, str + ((size - 1) - index));
    }
}

void string_copy(unsigned char strCopy[], unsigned char strOrigin[], signed int strCopySize)
{
    signed int index;

    for (index = 0; index < strCopySize - 1 && *(strOrigin + index); index++)
    {
        *(strCopy + index) = *(strOrigin + index);
    }

    *(strCopy + index) = 0;
}

unsigned char string_mostRepeatedCharacter(unsigned char str[])
{
    signed int characterCounter = 0;
    signed int maxNOfRepeats = 0;
    unsigned char mostRepeatedCharacter;

    for (signed int index_i = 0; *(str + index_i); index_i++)
    {
        for (signed int index_j = index_i; *(str + index_j); index_j++)
        {
            if (*(str + index_i) == *(str + index_j))
                characterCounter++;
        }

        if (maxNOfRepeats < characterCounter)
        {
            maxNOfRepeats = characterCounter;
            mostRepeatedCharacter = *(str + index_i);
        }

        characterCounter = 0;
    }

    return mostRepeatedCharacter;
}

void string_swap1(unsigned char str1[], unsigned char str2[])
{
    for (signed int index = 0; *(str1 + index) && *(str2 + index); index++)
    {
        swap_char(str1 + index, str2 + index);
    }
}

void string_swap2(unsigned char str1[], unsigned char str2[])
{
    signed int index;

    for (index = 0; *(str1 + index) && *(str2 + index); index++)
    {
        swap_char(str1 + index, str2 + index);
    }

    *(str1 + index) = 0;
    *(str2 + index) = 0;
}

void string_scan(unsigned char str[], signed int size)
{
    printf("write less than %d character: ", size - 1);

    signed int index = 0;
    scanf("%c", str + index);
    for (index = 0; index < (size - 1) && *(str + (index - 1)) != '\n'; index++)
    {
        scanf("%c", str + index);
    }

    *(str + index) = 0;
}

signed int string_IsMirror(unsigned char str[])
{
    signed int size = string_length(str);

    for (signed int index = 0; index < size / 2; index++)
    {
        if (*(str + index) != *(str + ((size - 1) - index)))
            return 0;
    }

    return 1;
}

void string_reverseWordsInSentence(unsigned char str[])
{
    signed int sentenceIndex = -1;
    signed int startWordIndex;
    signed int endWordIndex = -1;
    signed int NumberSize;

    string_reverse(str);

    do
    {
        sentenceIndex++;

        if (str[sentenceIndex] == ' ' || str[sentenceIndex] == 0)
        {
            startWordIndex = endWordIndex + 1;
            endWordIndex = sentenceIndex;
            NumberSize = endWordIndex - startWordIndex;

            array_reverseChar(str + startWordIndex, NumberSize);
        }

    } while (str[sentenceIndex]);
}

unsigned char* string_triangle(unsigned char str[])
{
    signed int stringIndex = -1;
    signed int startNumberIndex;
    signed int endNumberIndex = -1;
    signed int NunberSize;
    signed int triangleSide1;
    signed int triangleSide2;
    signed int triangleSide3;
    signed int triangleSideCounter = 1;

    do
    {
        stringIndex++;

        if (str[stringIndex] == ' ' || str[stringIndex] == 0)
        {
            startNumberIndex = endNumberIndex + 1;
            endNumberIndex = stringIndex;
            NunberSize = endNumberIndex - startNumberIndex;

            if (triangleSideCounter == 1)
                triangleSide1 = array_charArrayToInt(str + startNumberIndex, NunberSize);
            else if (triangleSideCounter == 2)
                triangleSide2 = array_charArrayToInt(str + startNumberIndex, NunberSize);
            else if (triangleSideCounter == 3)
                triangleSide3 = array_charArrayToInt(str + startNumberIndex, NunberSize);

            triangleSideCounter++;
        }

    } while (str[stringIndex]);

    if (triangleSide1 + triangleSide2 < triangleSide3 || triangleSide2 + triangleSide3 < triangleSide1 || triangleSide3 + triangleSide1 < triangleSide2)
        return "Not triangle";
    else if (triangleSide1 == triangleSide2 && triangleSide2 == triangleSide3)
        return "Equilateral triangle";
    else if (triangleSide1 == triangleSide2 || triangleSide2 == triangleSide3 || triangleSide3 == triangleSide1)
        return "Isosceles triangle";
    else
        return "Scalence triangle";
}

void string_floatToString(unsigned char str[], signed int size, float number)
{
    if (number == 0)
        str[0] = '0';
    else if (number < 0)
    {
        number = -number;
        str[0] = '-';
    }
    else
        str[0] = '+';

    signed int dotFlag = 1;
    while (number > 1)
    {
        number /= 10;
        dotFlag++;
    }

    if (dotFlag < size - 1)
        str[dotFlag] = '.';

    signed int index;
    for (index = 1; number != (signed int)number && index < size - 1; index++)
    {
        if (index != dotFlag)
        {
            number *= 10;
            str[index] = (signed int)number + '0';
            number = number - (signed int)number;
        }
    }

    str[index] = 0;
}

signed int string_stringToInt(unsigned char str[])
{
    signed int number = 0;
    signed int signFlag = 0;

    for (signed int index = 0; str[index]; index++)
    {
        if( str[index] == '-')
        {
            signFlag = 1;
            index++;
        }

        number = number * 10 + (str[index] - '0');
    }

    if (signFlag)
        number = -number;


    return number;
}

signed int string_compare(unsigned char str1[], unsigned char str2[])
{
    for (signed int index = 0; str1[index] || str2[index]; index++)
    {
        if (str1[index] != str2[index] && str1[index] != 'A' + (str2[index] - 'a') && str1[index] != 'a' + (str2[index] - 'A'))
            return 0;
    }

    return 1;
}

signed int string_replace(unsigned char mainString[], unsigned char findString[], unsigned char replaceString[], unsigned char newString[], signed int newStringSize)
{
    signed int mainStingIndex = -1;
    signed int startWordIndex;
    signed int endWordIndex = -1;
    signed int wordSize;
    signed int newStingIndex = -1;
    signed int newStingStartIndex = -1;
    signed int newStingEndIndex = -1;
    signed int newStingAvailableSize;
    signed int findStringSize = string_length(findString);
    signed int replaceSringSize = string_length(replaceString);
    signed int newReplaceSize;

    if (newStringSize == 0)
        return 0;

    do
    {
        mainStingIndex++;
        newStingIndex++;

        newString[newStingIndex] = mainString[mainStingIndex];

        if (mainString[mainStingIndex] == ' ' || mainString[mainStingIndex] == 0)
        {
            startWordIndex = endWordIndex + 1;
            endWordIndex = mainStingIndex;
            wordSize = endWordIndex - startWordIndex;

            newStingStartIndex = newStingEndIndex + 1;
            newStingEndIndex = newStingIndex;
            newStingAvailableSize = (newStringSize - 1) - newStingStartIndex;

            if (array_compareChar(mainString + startWordIndex, findString, wordSize, findStringSize))
            {
                newReplaceSize = array_copyChar(newString + newStingStartIndex, replaceString, newStingAvailableSize, replaceSringSize);
                newStingIndex = newStingStartIndex + newReplaceSize;
                newString[newStingIndex] = ' ';
            }
        }
    } while (mainString[mainStingIndex] && newStingIndex < newStringSize - 1);

    newString[newStingIndex] = 0;

    return 1;
}

void string_printWordNumberOftimesAsTheNumberAfterIt(unsigned char str[])
{
    signed int index = -1;
    signed int wordOrNumberFlag = 1;
    signed int startWordIndex;
    signed int endWordIndex = -1;
    signed int wordSize;
    signed int startNumberIndex;
    signed int endNumberIndex = -1;
    signed int numberSize;
    signed int number = 0;

    do
    {
        index++;

        if (str[index] == ',' || str[index] == 0)
        {

            if (wordOrNumberFlag % 2 != 0)
            {
                startWordIndex = endNumberIndex + 1;
                endWordIndex = index;
                wordSize = endWordIndex - startWordIndex;

                wordOrNumberFlag++;
            }
            else
            {
                startNumberIndex = endWordIndex + 1;
                endNumberIndex = index;
                numberSize = endNumberIndex - startNumberIndex;

                number = array_charArrayToInt(str + startNumberIndex, numberSize);

                for (signed int counter = 1; counter <= number; counter++)
                {
                    array_printChar(str + startWordIndex, wordSize);
                }

                wordOrNumberFlag++;
            }
        }

    } while (str[index]);
}

void string_longestWord (unsigned char str[], unsigned char longestWord[], signed int maxlongestWordSize)
{
    signed int index = -1;
    signed int startWordIndex;
    signed int endWordIndex = -1;
    signed int wordSize;
    signed int longestWordSize = 0;
    signed int realLongestWordSize;

    if ( string_length (str) )
    {
        do
        {
            index++;
            
            if (str[index] == ' ' || str[index] == 0)
            {
                startWordIndex = endWordIndex + 1;
                endWordIndex = index;
                wordSize = endWordIndex - startWordIndex;

                if (longestWordSize < wordSize)
                {
                    longestWordSize = wordSize;
                    realLongestWordSize = array_copyChar ( longestWord, str + startWordIndex, maxlongestWordSize - 1, longestWordSize);
                    longestWord[realLongestWordSize] = 0;
                }
            }
            
        } while (str[index]);
    }
}

signed int string_longestWordSize (unsigned char str[])
{
    signed int index = -1;
    signed int startWordIndex;
    signed int endWordIndex = -1;
    signed int wordSize;
    signed int longestWordSize = 0;
    

    if ( string_length (str) )
    {
        do
        {
            index++;
            
            if (str[index] == ' ' || str[index] == 0)
            {
                startWordIndex = endWordIndex + 1;
                endWordIndex = index;
                wordSize = endWordIndex - startWordIndex;

                if (longestWordSize < wordSize)
                {
                    longestWordSize = wordSize;
                }
            }
            
        } while (str[index]);
    }

    return longestWordSize;
}

unsigned char string_firstRepeatedCharacter ( unsigned char str[])
{
    unsigned char firstRepeatedCharacter = 0;
    signed int firstRepeatedCharacterIndex;

    for (signed int index_i = 0; str[index_i]; index_i++)
    {
        for (signed int index_j = index_i + 1; str[index_j]; index_j++)
        {
            if ( str[index_i] == str[index_j] )
            {
                if ( firstRepeatedCharacter )
                {
                    firstRepeatedCharacterIndex = index_i;
                    firstRepeatedCharacter = str[index_i];
                }

                else if ( firstRepeatedCharacterIndex > index_i )
                {
                    firstRepeatedCharacterIndex = index_i;
                    firstRepeatedCharacter = str[index_i];
                }
            }
        }
    } 

    return firstRepeatedCharacter;
}

//frequency array
unsigned char string_oOfN_firstRepeatedCharacter ( unsigned char str[])
{
    signed int Characters[256] = {0};

    for (signed int index = 0; str[index]; index++)
    {
        Characters[ str[index] ]++;

        if ( Characters[ str[index] ] == 2 )
            return str[index];
    }

    return 0;
}


//frequency array
unsigned char string_oOfN_firstRepeatedSmallCharacter ( unsigned char str[])
{
    signed int Characters[26] = {0};

    for (signed int index = 0; str[index]; index++)
    {
        Characters[ str[index] - 'a' ]++;

        if ( Characters[ str[index] - 'a' ] == 2 )
            return str[index];
    }

    return 0;
}

//frequecy array
void string_oOfN_copyWithoutRepeatedCharacters ( unsigned char strCopy[], unsigned char strOrigin[], signed int strCopySize)
{
    signed int characters[256] = {0};
    signed int strCopyIndex = 0;

    for (signed int strOriginIndex = 0; strOrigin[strOriginIndex] && strCopyIndex < strCopySize - 1; strOriginIndex++)
    {
        characters[strOrigin[strOriginIndex]]++;

        if (characters[ strOrigin[strOriginIndex] ] == 1)
        {
            strCopy[strCopyIndex] = strOrigin[strOriginIndex];
            strCopyIndex++;
        }

    }

    strCopy[strCopyIndex] = 0;
}

void array_ofPointersToChar_stringPrint ( unsigned char* arr[], signed int size)
{
    for (signed int arrIndex = 0; arrIndex < size; arrIndex++)
    {
        string_print (*(arr + arrIndex));
        // for (signed int strIndex = 0; *( *(arr + arrIndex) + strIndex ); strIndex++)
        // {
        //     printf ("%c", *( *(arr + arrIndex) + strIndex ) );
        // }

        //printf ("\n");
    }  
}

signed int array_ofPointersToChar_IsStingExist ( unsigned char* strList[], signed int strListSize, unsigned char strNeeded[])
{
    for (signed int strListIndex = 0; strListIndex < strListSize; strListIndex++)
    {
       if ( string_compare ( *(strList + strListIndex), strNeeded ) )
       {
            return 1;
       }
    }

    return 0;
}

signed int array_ofPointersToChar_stringSearch ( unsigned char* strPointerList[], signed int strPointerListSize, unsigned char strNeeded[]) 
{
    for (signed int strPointerListIndex = 0; strPointerListIndex < strPointerListSize; strPointerListIndex++)
    {
        if ( string_compare ( *(strPointerList + strPointerListIndex), strNeeded) )
            return strPointerListIndex;
    } 

    return -1;  
}

signed int string_compare2(unsigned char str1[], unsigned char str2[])
{
    for (signed int index = 0; str1[index] || str2[index]; index++)
    {
        if (str1[index] < str2[index])
            return -1;

        else if (str1[index] > str2[index] )
            return  1;   
    }

    return 0;
}

void array_ofPointersToChar_selectionSort ( unsigned char* strPointerList[], signed int strPointerListSize)
{
    signed int lastStringPointerIndex;
    unsigned char* lastStringAddress;

    for (signed int strPointerListIndex_j = 0; strPointerListIndex_j < strPointerListSize; strPointerListIndex_j++)
    {
        lastStringAddress = *( strPointerList + 0);

        for (signed int strPointerListIndex_i = 0; strPointerListIndex_i < strPointerListSize - strPointerListIndex_j; strPointerListIndex_i++)
        { 
            if ( string_compare2 ( lastStringAddress, *(strPointerList + strPointerListIndex_i)) <= 0 )
            {
                lastStringAddress = strPointerList[strPointerListIndex_i];
                lastStringPointerIndex = strPointerListIndex_i;
            }  
        }    

        swap_PointersToChar ( strPointerList + lastStringPointerIndex, strPointerList + ( (strPointerListSize - 1) - strPointerListIndex_j) );
    }
}

//binary search
signed int array_ofPointersToChar_sorted_search ( unsigned char* strPointerList[], signed int strPointerListSize, unsigned char strNeeded[])
{
    signed int firstElementIndex = 0;
    signed int lastElementIndex = strPointerListSize - 1;
    signed int middleElementIndex;

    while ( firstElementIndex  <=  lastElementIndex )
    {
        middleElementIndex = (lastElementIndex + firstElementIndex) / 2;

        if ( string_compare2 ( strNeeded, *(strPointerList + middleElementIndex) ) == 0 ) 
            return middleElementIndex;

        else if ( string_compare2 ( strNeeded, *(strPointerList + middleElementIndex) ) ==  -1 )
            lastElementIndex = middleElementIndex - 1;

        else if ( string_compare2 ( strNeeded, *(strPointerList + middleElementIndex) ) ==  1 )
            firstElementIndex = middleElementIndex + 1;
    }

    return -1;
}

void array_ofArrayOf10Char_print ( unsigned char arr[][10], signed int arrSize)
{
    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        string_print ( *(arr + arrIndex) );

        // for (signed int elementIndex = 0; *( *(arr + arrIndex) + elementIndex ); elementIndex++)
        // {
        //     printf ("%c",  *( *(arr + arrIndex) + elementIndex ) );
        // }

        // printf ("\n");
    }  
}

void array_ofArrayOf10Char_print2 ( unsigned char arr[][10], signed int row, signed int column)
{
    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int columnIndex = 0; columnIndex < column; columnIndex++ )
        {
            printf ("%c",  *( *(arr + rowIndex) + columnIndex ) );
        }

        printf ("\n");
    }  
}

void array_ofArrayOfChar_search ( unsigned char arr[][10], signed int arrSize, unsigned char character, signed int* neededArrIndex, signed int* neddedElementIndex)
{
    *neededArrIndex = -1;
    *neddedElementIndex = -1;

    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        for (signed int elementIndex = 0; *( *(arr + arrIndex) + elementIndex ); elementIndex++)
        {
            if (*( *(arr + arrIndex) + elementIndex ) == character)
            {
                *neededArrIndex = arrIndex;
                *neddedElementIndex = elementIndex;
                return;
            }
        }   
    }
}

void array_ofArrayOfChar_searchLastIndex ( unsigned char arr[][10], signed int arrSize, unsigned char character, signed int* neededArrIndex, signed int* neddedElementIndex)
{
    *neededArrIndex = -1;
    *neddedElementIndex = -1;

    for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    {
        for (signed int elementIndex = 0; *( *(arr + arrIndex) + elementIndex ); elementIndex++)
        {
            if (*( *(arr + arrIndex) + elementIndex ) == character)
            {
                *neededArrIndex = arrIndex;
                *neddedElementIndex = elementIndex;
            }
        }   
    }
}

void array_OfArrayOf10Char_setStar ( unsigned char arr[][10], signed int row, signed int column, signed int starRowIndex, signed int starColumnIndex)
{
    arr [starRowIndex][starColumnIndex] = '*';

    for (signed int rowIndex = 0; rowIndex < row; rowIndex++)
    {
        for (signed int columnIndex = 0; columnIndex < column; columnIndex++)
        {
            if ( rowIndex < starRowIndex && columnIndex < starColumnIndex)
                arr[rowIndex][columnIndex] = '1';
            else if ( rowIndex < starRowIndex && columnIndex == starColumnIndex)
                arr[rowIndex][columnIndex] = 'v';
            else if ( rowIndex < starRowIndex && columnIndex > starColumnIndex)
                arr[rowIndex][columnIndex] = '2';
            else if ( rowIndex == starRowIndex && columnIndex < starColumnIndex)
                arr[rowIndex][columnIndex] = '>';
            else if ( rowIndex == starRowIndex && columnIndex > starColumnIndex)
                arr[rowIndex][columnIndex] = '<';
            else if ( rowIndex > starRowIndex && columnIndex < starColumnIndex)
                arr[rowIndex][columnIndex] = '3';
            else if ( rowIndex > starRowIndex && columnIndex == starColumnIndex)
                arr[rowIndex][columnIndex] = '^';
            else if ( rowIndex > starRowIndex && columnIndex > starColumnIndex)
                arr[rowIndex][columnIndex] = '4';
        }
    }
}

//binary search
void array_OfArrayOf10Char_starSearch ( unsigned char arr[][10], signed int row, signed int column, unsigned char character, signed int* neededRowIndex, signed int* neededColumnIndex)
{
    signed int firstRowIndex = 0;
    signed int lastRowIndex = row - 1;

    signed int firstColumnIndex = 0;
    signed int lastColumnIndex = column - 1;

    signed int middleRowIndex;
    signed int middleColumnIndex;
    

    while ( firstRowIndex <= lastRowIndex && firstColumnIndex <= lastColumnIndex )
    {
        middleRowIndex = (firstRowIndex + lastRowIndex) / 2;
        middleColumnIndex = (firstColumnIndex + lastColumnIndex) / 2;

        if ( arr[middleRowIndex][middleColumnIndex] == character )
        {
            *neededRowIndex = middleRowIndex;
            *neededColumnIndex = middleColumnIndex;
            return;
        }   
        else if ( arr[middleRowIndex][middleColumnIndex] == '1' )
        {
            firstRowIndex = middleRowIndex + 1;
            firstColumnIndex = middleColumnIndex + 1; 
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == 'v' )
        {
            firstRowIndex = middleRowIndex + 1; 
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == '2' )
        {
            firstRowIndex = middleRowIndex + 1;
            lastColumnIndex = middleColumnIndex - 1; 
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == '>' )
        {
            firstColumnIndex = middleColumnIndex + 1;
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == '<' )
        {
            lastColumnIndex = middleColumnIndex - 1; 
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == '3' )
        {
            lastRowIndex = middleRowIndex - 1;
            firstColumnIndex = middleColumnIndex + 1; 
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == '^' )
        {
            lastRowIndex = middleRowIndex - 1; 
        }
        else if ( arr[middleRowIndex][middleColumnIndex] == '4' )
        {
            lastRowIndex = middleRowIndex - 1;
            lastColumnIndex = middleColumnIndex - 1; 
        }
    }

    *neededRowIndex = -1;
    *neededColumnIndex = -1;
}