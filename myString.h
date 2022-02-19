


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