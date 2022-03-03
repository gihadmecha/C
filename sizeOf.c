

int main ()
{
    // int arr[3] = {1};

    // printf ("%u %d  %d\n", *(&arr), *arr    , *(&arr[0]) );
    // printf ("%u %u  %u  %d\n", &arr,  arr    , &arr[0], arr[0] );
    // printf ("%u %u  %u  %d\n", &arr + 1,  arr + 1    , &arr[0] + 1, arr[0] + 1 );
    // printf ("%u %u  %u   \n", *(&arr)+ 1,  *arr + 1    , *(&arr[0]) + 1);
    // printf ("%u %u  %u   \n", sizeof(*(&arr)),  sizeof(*arr)    , sizeof(*(&arr[0])));
    // printf ("%u %u  %u  %d   \n", sizeof(&arr),  sizeof(arr)    , sizeof(&arr[0]), sizeof(arr[0]));
    // printf ("%d %d\n", (char*) (&arr + 1) - (char*)&arr, sizeof(*(&arr)) );
    // printf ("%d %d\n", (char*) (arr + 1) - (char*)&arr, sizeof(*arr) );
    // printf ("%d %d\n", (char*) (&arr[0] + 1) - (char*)&arr[0], sizeof(*(&arr[0])) );
    


    int arr[3][10] = {{1}};
    printf ("%u %u  %u  %u  %u %u\n", &arr,  arr    , &arr[0], arr[0], &arr[0][0], arr[0][0] );
    printf ("%u %u  %u  %u  %u %u\n", &arr + 1,  arr + 1    , &arr[0] + 1, arr[0] + 1, &arr[0][0] + 1, arr[0][0] + 1 );
    printf ("%d %d\n", (char*) (&arr + 1) - (char*)&arr, sizeof(*(&arr)) );
    printf ("%d %d\n", (char*) (arr + 1) - (char*)&arr, sizeof(*arr) );
    printf ("%d %d\n", (char*) (&arr[0] + 1) - (char*)&arr[0], sizeof(*(&arr[0])) );
    printf ("%d %d\n", (char*) (arr[0] + 1) - (char*)&arr[0], sizeof(*(arr[0])) );
    printf ("%d %d\n", (char*) (&arr[0][0] + 1) - (char*)&arr[0][0], sizeof(*(&arr[0][0])) );
    
}