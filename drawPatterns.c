// // Write c function to take number of lines and draw
// // pattern with '*' like:

// #include <stdio.h>


// int main ()
// {
//     signed int lineNumber = -1;
   

//     while(1)
//     {
//         lineNumber = -1;

//         while(lineNumber < 0)
//         {
//             printf("Enter the number of lines: ");
//             scanf("%d", &lineNumber);
//         }
     
     
//         for(int i = 0; i <= lineNumber; i++)
//         {
//             for(int j = lineNumber - i; j > 0; j--)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         printf("\n");

//         printf("\n");
//         for(int i = 1; i <= lineNumber; i++)
//         {
//             for(int j = i; j > 0; j--)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         printf("\n");

//         printf("\n");
//         for(int i = lineNumber; i > 1; i--)
//         {
//             for(int j = 1; j <= lineNumber - i; j++)
//             {
//                 printf(" ");
//             }
//             printf("*");
//             for(int j = 2*i-2 ; j > 1; j--)
//             {
//                 printf(" ");
//             }

//             printf("*");

//             printf("\n");
//         }
        
//        for(int i = lineNumber; i >= 1; i--)
//         {
//             for(int j = i ; j > 1 ; j--)
//             {
//                 printf(" ");
//             }
//             //if(i == lineNumber)
//                 //printf(" ");
//             printf("*");
//             for(int j = 1; j < 2*(lineNumber-i); j++)
//             {
//                 printf(" ");
//             }
//             if(i != lineNumber)
//                 printf("*");

//             printf("\n");
//         }
//         printf("\n");

//         printf("\n");
//         for(int i = 1; i <= lineNumber; i++)
//         {
//             for(int j = lineNumber - i; j > 0 ; j--)
//             {
//                 printf(" ");
//             }
//             for(int j = 1; j < 2*i ; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }



// Write c function to take number of lines and draw
// pattern with '*' like:

#include <stdio.h>

int main ()
{
    //defination
    signed int noOfLines;

    while (1)
    {
        printf ("\n\ndraw pattern with '*'\n\n");

        //user input
        noOfLines = -1;
        while (noOfLines < 0)
        {
            printf ("Enter the number of lines: ");
            scanf ("%d", &noOfLines);
        }
        ///////////////////////////////////////////////////////////////////

        //y axis
        for (signed int y = 1; y <= noOfLines; y++)
        {
            //x axis
            for (signed int x = noOfLines; x >= y; x--)
            {
                printf ("*");
            }

            //new line
            printf ("\n");
        }

        printf ("\n");   
        ///////////////////////////////////////////////////////////////////

        //y axis
        for (signed int y = 1; y <= noOfLines; y++)
        {
            //x axis
            for (signed int x = 1; x <= y; x++)
            {
                printf ("*");
            }

            //new line
            printf ("\n");
        }

        printf ("\n");
        ///////////////////////////////////////////////////////////////////

        signed int star = noOfLines - 1;
        for (signed int y = noOfLines; y >= 1; y--)
        {
            for (signed int x = 0; x < noOfLines - y; x++)
            {
                printf (" ");
            }

            printf ("*");
            
            for (signed int x = 1; x <=  y + star; x++)
            {
                printf (" ");
            }

            printf ("*");

            star --;
            printf ("\n");
        } 
        for (signed int x = 1; x <= noOfLines ; x++)
        {
            printf (" ");
        } 
        printf ("*\n");
        star = 0;
        for (signed int y = 1; y <= noOfLines; y++)
        {
            for (signed int x = 0; x < noOfLines - y; x++)
            {
                printf (" ");
            }

            printf ("*");
            
            for (signed int x = 1; x <= y + star; x++)
            {
                printf (" ");
            }

            printf ("*");

            star ++;
            printf ("\n");
        }  
        printf ("\n");
        //////////////////////////////////////////////////////////////////// 

        star = 1;
        for (signed int y = noOfLines; y >= 1; y--)
        {
            for (signed int x = y - 1; x >= 1; x--)
            {
                printf (" ");
            }
            
            for (signed int x = 1; x <= noOfLines - (y - star); x++)
            {
                printf ("*");
            }

            star ++;
            printf ("\n");
        }
        printf ("\n");   
    } 
}