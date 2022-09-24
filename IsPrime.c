// Write a program that reads an integer and
// checks if it is a prime.

#include <stdio.h>

int main()
{
    //definations
    signed int num;
    unsigned int primeFlag;


    while (1)
    {
        printf("\n\na program that reads an integer and checks if it is a prime.\n\n");

        //user inputs
        printf("Enter an integer: ");
        scanf("%d", &num);

        if(num < 2)
            //not prime
            primeFlag = 0;
        else
        {
            //if 2 <= num, initialize the primeFlag, assume num is prime
            //if num = 2, prime
            primeFlag = 1;       
            //if  2 <= index < num      &&   primeFlag != 0 ,   still num is assumed as a prime  and check
            for(signed int index = 2; index < num && primeFlag != 0; index++)
            {
                //if the quotient of (num / index) is an integer

                //if( (double)num / (double)index  ==  num / index  )
                if(num % index == 0)
                    //not prime
                    primeFlag = 0;

            }
        }
            
        //results
        if(primeFlag == 1)
            printf("prime !!\n");
        else
            printf("not prime !!\n");
        
    }
    
}