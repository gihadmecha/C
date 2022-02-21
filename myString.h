


void string_print( unsigned char* str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        printf("%c", *(str + i));
    }
    printf("\n");
}

unsigned int string_len( unsigned char* str)
{
    unsigned int i;
    for ( i = 0; str[i]; i++);
    return i;
}

void string_copy ( signed char* str1, signed char* str2)
{
    for (unsigned int i = 0;  str2[i]; i++)
    {
        str1[i] = str2[i];
        str1[i + 1] = 0;
    }
}

void string_reverse( signed char* str)
{
    unsigned int size = string_len( str);
    for (unsigned int i = 0; i < size / 2; i++)
    {
        signed int swap = *(str + i);
        *(str + i) = *(str + size - (1 + i));
        *(str + size - (1 + i)) = swap;
    }
}

void string_reverseWordsInSentence ( signed char* str)
{
    string_reverse( str);
    string_print( str);

    unsigned int last;
    unsigned int first = 0;
    unsigned int size;

    while (str[first])
    {
        for ( last = first; str[last] != ' ' && str[last] ; last++);

        for (unsigned int i = first; i <= (first + (last - 1 )) / 2; i++)
        {
            signed int swap = *(str + i);
            *(str + i) = *(str + (last - 1) - (i - first));
            *(str + (last - 1) - (i - first)) = swap;
        }
        
        if( str[last])
        {
            first = last + 1;
        }
        else
        {
            first = last;
        }
    } 
}

unsigned int IsMirror ( signed char* str)
{
    unsigned int size = string_len( str);
    for (unsigned int i = 0; i < size / 2; i++)
    {
        if( *(str + i) == *(str + size - (1 + i)) )
        {

        }
        else
        {
            return 0;
        }
    }

    return 1;
}

unsigned int string_compare ( signed char* str1, signed char* str2)
{
    unsigned int i;
    for ( i = 0; str1[i] && str2[i]; i++)
    {
        if (str1[i] == str2[i] || str1[i] - str2[i] == 'a' - 'A' || str1[i] - str2[i] == 'A' - 'a')
        {
            /* code */
        }
        else
        {
            return 0; 
        }
        
    }

    if (str1[i] != str2[i])
    {
        return 0;
    }
    
    return 1;
}

unsigned int string_longest_counter ( signed char* str)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    unsigned int i;
    for (i = 0; str[i]; i++)
    {
        if ( str[i] != ' ')
        {
            count++;

            if(longest < count)
            {
                longest = count;
            }
        }
        else 
        {
            count = 0;
        }
    }

    return longest;
}

void string_longest ( signed char* str, signed char* strcopy)
{
    unsigned int count = 0;
    unsigned int longest = 0;
    unsigned int index;

    for (unsigned int i = 0; str[i]; i++)
    {
        if ( str[i] != ' ')
        {
            count++;

            if(longest < count)
            {
                longest = count;
                index = (i+1) - longest;
            }
        }
        else 
        {
            count = 0;
        }
    }

    unsigned int j = 0;
    for (unsigned int i = index; i <= index + longest; i++)
    {
        strcopy[j] = str[i];
        j++;
    }
    strcopy[j] = 0;
}

void string_scan ( unsigned char* str)
{
    printf("Enter string not more than 100 character: ");
    unsigned int i = 0;
    scanf(" %c", str + i);
    for (   ; str[i] != '\n'; )
    {
        i++;
        scanf("%c", str + i);
    }
    str[i] = 0;
   
    // unsigned int i = 0;
    // do 
    // {
    //     scanf("%c", str + i);
    //     i++;

    // } while ( str[i - 1] != '\n');
    // *(str + (i - 1)) = 0;
}

void intToString( signed int num, unsigned char* str)
{
    unsigned flag  = 0;
    
    if (num < 0)
    {
        num = 0 - num;
        flag++;
    }

    unsigned int i = 0;
    if(num == 0)
    {
        str[0] = '0';
        i++;
    }
    while ( num)
    {
        str[i] = num % 10 + '0';
        num /= 10; 
        i++;
    }
    if (flag == 1)
    {
        str[i] = '-';
        i++;
    }
    str[i] = 0;

    string_reverse(  str);
}

signed int stringToInt ( unsigned char* str)
{
    signed int number = 0;
    for (unsigned int i = 0; str[i]; i++)
    {
        if (str[i] == '-')
        {
            i++;
        }
        
        number = number * 10 + (str[i] - '0');
    }

    if (str[0] == '-')
    {
        number = 0 - number;
    }

    return number;
}

void string_swap( unsigned char* str1, unsigned char* str2)
{
    unsigned int i;
    for (i = 0; str1[i] && str2[i]; i++)
    {
        unsigned char swap = *(str1 + i);
        *(str1 + i) = *(str2 + i);
        *(str2 + i) = swap;
    }
    str1[i] = 0;
    str2[i] = 0;
}

unsigned char* tringle ( unsigned char* strInput)
{
    unsigned char str[100];
    signed int arr[3];
    unsigned int arrSize = sizeof(arr) / sizeof(arr[0]);
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;
    
    while ( strInput[i] )
    {
        j = 0; 
    
        for(    ; strInput[i] && strInput[i] != ' '; i++)
        {
            str[j] = strInput[i];
            j++;
        }
        i++;
        str[j] = 0;
        
        arr[k] = stringToInt ( str);
        
        k++;
    }

    if ( arr[0] + arr[1] < arr[2] || arr[1] + arr[2] < arr[0] || arr[0] + arr[2] < arr[1])
    {
        return "Not triangle";
    }
    else if ( arr[0] == arr[1] && arr[1] == arr[2])
    {
        return "Equilateral triangle ";
    }
    else if ( arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
    {
        return "Isosceles triangle";
    }
    else
    {
        return "Scalene triangle";
    }
}

void string_doubleToString ( double number, unsigned char* str)
{
    unsigned int i = 0;
    unsigned int digit;
    unsigned int dotIndex = 0;
    unsigned int signFlag = 0;


    if ( number == 0)
    {
        str[i] = '0';
        i++;
    }

    if ( number < 0)
    {
        number = 0 - number;
        str[i] = '-';
        i++;

        signFlag++;
    }

    while ( (unsigned long int) number != 0 )
    {
        number = number / 10;
        dotIndex++;

        if (signFlag == 1)
        {
            dotIndex++;
        }
    }

    while ( (unsigned long int) number != number )
    {
        number = number * 10;
        digit = (unsigned long int) number % 10;

        if (i == dotIndex)
        {
            str[i] = '.';
            i++;
        }
        
        str[i] = digit + '0';
        i++;
    }

    str[i] = 0;
}

void replace (unsigned char* str1, unsigned char* str2, unsigned char* str3, unsigned char* str4)
{
    unsigned int j = 0;
    unsigned int i = 0;
    unsigned int first = 0;
    unsigned int k;
    unsigned int counter = 0;

    unsigned char str[100];

    while ( str1[i])
    {
        for (  i = first ; str1[i] && str1[i] != ' '; i++)
        {
            str[j] = str1[i];
            j++;
        }
        str[j] = 0;
        if ( string_compare ( str,  str2) )
        {
            for ( k = 0 ; str3[k]; k++)
            {
                str4[counter] = str3[k];
                counter++;
            }
        }
        else
        {
            for ( j = 0 ; str[j]; j++)
            {
                str4[counter] = str[j];
                counter++;
            }
        }
        
        first = i + 1;

        if (str1[first] != 0)
        {
            str4[counter] = ' ';
            counter++;
        }

        j = 0;
    }
}

void application ( unsigned char* str)
{
    unsigned char str2[100];
    unsigned char str3[100];
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int first = 0;

    while ( str[i])
    {
        for (  i = first ; str[i] && str[i] != ','; i++)
        {
            str2[j] = str[i];
            j++;
        }
        str2[j] = 0;

        j = 0;
        i++;
        for (   ; str[i] && str[i] != ','; i++)
        {
            str3[j] = str[i];
            j++;
        }
        str3[j] = 0;
        
        signed int numberOfPrints = stringToInt ( str3);

        for (unsigned int k = 1; k <= numberOfPrints; k++)
        {
            string_print( str2);
        }

        first = i + 1;
        j = 0;
    } 
}


//freqency array
unsigned char string_firstRepeated( unsigned char* str)
{
    unsigned int counter[256] = {0};

    for (unsigned int i = 0; str[i]; i++)
    {
        counter[str[i]]++;
        for (unsigned int i = 0; i < 256; i++)
        {
            if (counter[str[i]] == 2)
            {
                return str[i];
            }
            
        }

    }

    return -1;
}

//frequency array
void array_removeRepeatedchars  ( unsigned char* str, unsigned char* newStr, double maxSize)
{
    unsigned int counter[256] = {0};
    unsigned int j = 0;

    for (unsigned int i = 0; str[i]; i++)
    {
        counter[str[i]]++;

        if (counter[str[i]] == 1)
        {
            if (j < maxSize)
            {
                *(newStr + j) = str[i];
                j++;
                *(newStr + j) = 0;
            }
        } 
    }
}