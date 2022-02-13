
#include <stdio.h>


double addTwoNumbers(double num_1, double num_2)
{   
    double sum;
    
    sum = num_1 + num_2;
    return sum;
}

signed long long int addIntegersBetweenTwoNumbers ( signed int num_1, signed int num_2)
{
    signed int max;
    signed int min;
    signed long long int sum = 0;

    if(num_1 > num_2)
    {
        max = num_1;
        min = num_2;
    }
    else
    {
        max = num_2;
        min = num_1;
    }
    
    for(int i = max - 1; i > min; i--)
    {
        sum += i;
    }

    return sum;
}

double getMax()
{
    double NoOfNunbers = -1;
    double num;
    double max;

    while(NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }

    for(unsigned int i = 1; i <= NoOfNunbers; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if(i == 1)
        {
            max = num;
        }

        if(num > max)
        {
            max = num;
        }
    }

    return max;
}

double getMin()
{
    double NoOfNunbers = -1;
    double num;
    double min;

    while(NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }

    for(unsigned int i = 1; i <= NoOfNunbers; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if(i == 1)
        {
            min = num;
        }

        if(num < min)
        {
            min = num;
        }
    }

    return min;
}

double addNumbers()
{
    double NoOfNunbers = -1;
    double num;
    double sum = 0;


    while (NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }


    for(unsigned int i = 1; i <= NoOfNunbers; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        sum += num;  
    }

    return sum;
}

double multiplyTwoNumbers(double num_1, double num_2)
{
    double multiply = 0;
 
    for(unsigned int i = 1; i <= num_2; i++)
    {

        multiply += num_1;
        
    }

    for(signed int i = num_2; i <= -1; i++)
    {

        multiply -= num_1;
        
    }

    return multiply;
}

signed int reminder (signed int num_1, signed int num_2)
{
    signed int num_1_positive = num_1;
    signed int num_2_positive = num_2;
    signed int reminder;

    if(num_1 < 0)
    {
        num_1_positive = 0 - num_1;
    }

    if(num_2 < 0)
    {
        num_2_positive = 0 - num_2;
    }

    if(num_2 == 0)
    {
        printf("Math Error !! \n");
        return 0;
    }

    reminder = num_1_positive;
    while(reminder >= num_2_positive)
    {

        reminder -= num_2_positive;
        
    }

    if(num_1 < 0)
    {
        reminder = -reminder;
    }

    printf("Ans = %d \n", num_1%num_2);
    return reminder;
}

double power( double base, double power)
{
    double power_positive = power;
    double ans = 1;

    if(power < 0)
    {
        power_positive = 0 - power;
    }

    for(unsigned int i = 1; i <= power_positive; i++)
    {
        ans *= base;
    }

    if(power < 0)
    {
        ans = 1.0 / ans;        
    }
        
    return ans;  
}

double factorial( signed long long int num)
{
    double factorial = 1;
    signed long long int num_copy = num;

    if(num < 0)
    {
        num_copy = 0 - num;
    }
    
    for(int i = 1; i <= num_copy; i++)
    {
        factorial *= i;
    }

    if(num < 0)
    {
        factorial = 0 - factorial;
    }

    return factorial;
}

int IsPrime( double num)
{
    int flag = 0;

    if(num <= 1 || (signed long long int) num != num)
    {
        return 0;
    }
    else
    {
        for(unsigned long long int i = 2; i < num && flag == 0; i++)
        {
            if(((unsigned long long int) num % i) == 0) 
            {
                flag++;
            }
        }
    }

    if(flag == 0)
    {
        return 1;
    }
    else 
    {
        return 0;

    }
}

int IsPerfectSquare( double num)
{
    int flag = 0;

    if((signed long long int) num != num)
    {
        return 0;
    }
        
    for(unsigned long long int i = 0; i <= num && flag == 0; i++)
    {
        if(i * i == num) 
        {
            flag++;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else 
    {
        return 0;
    } 
}

int IsBaseOf_2 ( double num)
{
    double last_num = num;

    if(num < 1 || (signed long long int) num != num)
    {
        return 0;
    }

    while(last_num != 1 && (unsigned long long int)last_num % 2 == 0)
    {
            last_num = last_num / 2;  
    }

    if(last_num == 1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

unsigned int sumDigits ( double num)
{
    double last_num;
    unsigned int sum = 0;

    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }

    while ((unsigned long long int)last_num != last_num)
    {
        last_num *= 10;
    }
    
    while((unsigned long long int)last_num != 0)
    {
        sum += (unsigned long long int)last_num % 10;
        last_num = last_num / 10;  
    }

    return sum; 
}

double addEVenNumbers ( )
{
    double num;
    double last_num;
    double sum = 0;
    int flag = 0;

    while (1)
    {
        printf("Enter an integer Even number: ");
        scanf("%lf", &num);

        last_num = num;

        while ((signed long long int)last_num != last_num)
        {
            last_num *= 10;
        }

        if((signed long long int)last_num % 2 == 0)
        {
            sum += num; 
        }
        else
        {
            flag++;
        }

        if(flag == 2)
        {
            return sum; 
        }  

        printf("Sum = %lf \n", sum);
    }
}

unsigned int poster ( double num)
{
    double last_num;
    unsigned int sum;
    unsigned int rightDigit;
        
    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }

    while ((unsigned long long int)last_num != last_num)
    {
        last_num *= 10;
    }

    sum = 0;
    while((unsigned long long int)last_num != 0)
    {
            rightDigit = (unsigned long long int)last_num % 10;

            if(rightDigit == 1 || rightDigit == 2 || rightDigit == 3 || rightDigit == 5 || rightDigit == 7)
            {
                rightDigit = 0;
            }
            else if(rightDigit == 0 || rightDigit == 4 || rightDigit == 6 || rightDigit == 9)
            {
                rightDigit = 1;
            }
            else if(rightDigit == 8)
            {
                rightDigit = 2;
            }

            sum += rightDigit;
            last_num = last_num / 10;  
    }

    return sum;
}

double circle ( double radius, double* circumference)
{
    double pi = 22.0 / 7;
    double area;

    area = pi * radius *radius;
    *circumference = 2 * pi * radius;

    return area;
}

char charExample ( double num, char character)
{
    double IntegerNum = num;

    while ((signed long long int)IntegerNum != IntegerNum)
    {
        IntegerNum *= 10;
    }
    
    if((signed long long int)IntegerNum % 2 == 0)
    {
        return character;
    } 
    else
    {
        if(character >= 'A' && character <= 'Z' )
        {
            return 'a' + (character - 'A');
        }
        else if(character >= 'a' && character <= 'z' )
        {
            return 'A' + (character - 'a');
        }
    }  
}

double reverseNumber ( double num)
{
    double reversed = 0;

    double IntegerNum;
    if(num < 0)
    {
        IntegerNum = 0 - num;
    }
    else
    {
        IntegerNum = num;
    }

    int dotDigit = 0;
   
    while ((unsigned long long int)IntegerNum != 0)
    {
        IntegerNum /= 10;
        dotDigit++;
    }

    unsigned long long int grade = 1;
    while ((unsigned long long int)IntegerNum != IntegerNum)
    {
        IntegerNum *= 10;
        reversed += ((unsigned long long int)IntegerNum % 10) * grade;
        grade *= 10; 
    }

    if(num < 0)
    {
        reversed *= -1;
    }

    if ((signed long long int)num != num)
    {
        for (unsigned int i = 1; i <= dotDigit; i++)
        {
            reversed /= 10;
        }  
    }

    return reversed;
}

unsigned int NumberOfOnes ( unsigned int num)
{
    unsigned int count = 0;
    
    for(unsigned int i = 0; i < 32; i++)
    {
        if((num >> i) & 1 == 1)
        {
            count++;
        }
    }

    return count;
}

void printBinaryPresentationOfNumber ( unsigned long int num)
{
    unsigned int flag = 0;
     
    for(int i = 63; i >= 0; i--)
    {
        if((num >> i) & 1 == 1)
        {
            printf("1");
            flag++;
        }
        else if (flag != 0)
        {
            printf("0");
        }
    }
    printf("\n");
    
}

unsigned char reverseBinaryPresentation ( unsigned char num)
{
    unsigned char  new_num = 0;
    
    for(int i = 0; i < 8; i++)
    {
        if((num >> i) & 1 == 1)
        {
            printf("1");
            new_num = new_num | (1 << (7 - i));
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    return new_num;
}

// 1-Set bit.
// 2-Clear bit
// 3-Toggle bit.
// 4-Read bit.
unsigned long int BitwiseOperation ( signed int no, signed int bit_i, unsigned long int num)
{
    if(bit_i < 0 || bit_i > 63)
    {
        return num;
    }

    switch(no)
    {
        case 1:
            return num | (1 << bit_i);
        break;
        case 2:
            return num & (~(1 << bit_i));
        break;
        case 3:
            return num ^ (1 << bit_i);
        break;
        case 4:
            if((num >> bit_i) & 1 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        break;
        default:
            return num;
    }
}

unsigned int maxNumberOfZeroes ( unsigned long int num)
{
    unsigned int flag = 0;
    unsigned int count = 0;
    unsigned int max = 0;
     
    for(int i = 31; i >= 0; i--)
    {
        if((num >> i) & 1 == 1)
        {
            printf("1");
            flag++;
            if(flag == 2)
            {
                if(count > max)
                {
                    max = count;
                }

                flag = 1;
                count = 0;
            }
        }
        else if (flag == 1)
        {
            printf("0");
            count++;
        }
    }
    printf("\n");
    
    return max;
}

unsigned long int xor ( unsigned int num_1, unsigned int num_2)
{
    int xor;
    int max;

    if(num_1 > 1 && num_2 < 1000 && num_2 > num_1)
    {
        int i;
        int j;
        for(i = num_1; i <= num_2; i++)
        {
            for(j = i; j <= num_2; j++)
            {
                xor = i ^ j;

                printf("%d ^ %d = %d \n", i, j, xor);

                if(i == num_1 && j == i)
                {
                    max = xor;
                }

                if(xor > max)
                {
                    max = xor;
                }
            }
        }

        return max;
    }

    return 200;
}