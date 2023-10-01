
#include <stdio.h>

typedef struct complex{
    double real;
    double imaginary;
}complex;

void complexPrint (complex number);
complex complexAdd (complex number1, complex number2);
complex complexSubtract (complex number1, complex number2);
complex complexMultiply (complex number1, complex number2);
complex complexDivide (complex number1, complex number2);