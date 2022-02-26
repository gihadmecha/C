
void arrayOfStrings_print ( char* * arr, double size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = 0; arr[i][j]; i++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    } 
}

int main ()
{
    char* arr[] = {"ahmed, khalad, asmaa"};

    arrayOfStrings_print ( arr, 3);
}

