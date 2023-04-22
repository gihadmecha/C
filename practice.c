
#include "searching.h"


//O(n^2)
char string_searchFirstRepeatedChar (char* str)
{
    s32 requiredIndex = -1;

    for (s32 i = 0; str[i]; i++)
    {
        for (s32 j = i+1; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                if (requiredIndex == -1)
                    requiredIndex = j;
                else if (requiredIndex > j)
                    requiredIndex = j;
            }
        }
    }

    if (requiredIndex == -1)
        return 0;
    else
        return str[requiredIndex];
}

//frequency array
char string_searchFirstRepeatedChar2 (char* str)
{
    s32 charCounter[256] = {0};
    for (s32 i = 0; str[i]; i++)
    {
        charCounter[str[i]]++;

        for (s32 j = 0; j < 256; j++)
        {
            if (charCounter[j] == 2)
                return j;
        }
    }
    return 0;
}
