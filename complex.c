
#include "complex.h"

void complexPrint (complex number)
{
    if (number.imaginary >= 0)
    {
        printf ("%.2f+%.2fi\n", number.real, number.imaginary);
    }
    else
    {
        printf ("%.2f%.2fi\n", number.real, number.imaginary);
    }
}

complex complexAdd (complex number1, complex number2)
{
    complex number;
    number.real = number1.real + number2.real;
    number.imaginary = number1.imaginary + number2.imaginary;
    return number;
}

complex complexSubtract (complex number1, complex number2)
{
    complex number;
    number.real = number1.real - number2.real;
    number.imaginary = number1.imaginary - number2.imaginary;
    return number;
}

complex complexMultiply (complex number1, complex number2)
{
    complex number;
    number.real = number1.real * number2.real - number1.imaginary * number2.imaginary;
    number.imaginary = number1.real * number2.imaginary + number2.real * number1.imaginary;
    return number;
}

complex complexDivide (complex number1, complex number2)
{
    complex morafk;
    morafk.real = number2.real;
    morafk.imaginary = -number2.imaginary;
    number1 = complexMultiply(number1, morafk);
    number2 = complexMultiply(number2, morafk);
    
    complex number;
    number.real = number1.real / number2.real;
    number.imaginary = number1.imaginary / number2.real;
    return number;
}

