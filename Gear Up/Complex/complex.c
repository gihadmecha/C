#include <stdio.h>
#include <assert.h>
#include "complex.h"

/* Creation */
//Add your code here
COMPLEX CreateComplex(double real, double imaginary){
    COMPLEX x;
    x.real=real;
    x.imaginary=imaginary;

    return x;

}

// End of your code

/* Destruction */
//Add your code here
void DestroyComplex(CPTR complex){
complex->real=0;
complex->imaginary=0;


}


// End of your code


/* Addition */
//Add your code here
COMPLEX AddComplex(CPTR first, CPTR second){
 COMPLEX x;
 x.real=first->real+second->real;
 x.imaginary=first->real+second->real;

     return x;

}


// End of your code

/* Subtraction */
//Add your code here
COMPLEX SubtractComplex(CPTR first, CPTR second){
 COMPLEX x;
 x.real=first->real-second->real;
 x.imaginary=first->real-second->real;

     return x;

}


// End of your code

/* Multiplication */
//Add your code here
COMPLEX MultiplyComplex(CPTR first, CPTR second){
 COMPLEX x;

 x.real=first->real*second->real - first->imaginary*second->imaginary;
 x.imaginary=first->real*second->imaginary + second->real*first->imaginary;
     return x;


}

// End of your code

/* Conjugate */
//Add your code here
COMPLEX ConjugateComplex(CPTR complex){
 COMPLEX x;

 x.real=complex->real;
 x.imaginary=(complex->imaginary)*(-1);

    return x;

}


// End of your code

/* Division */
//Add your code here
COMPLEX DivideComplex(CPTR first, CPTR second){

 COMPLEX x;

 x.real=(first->real*second->real + first->imaginary*second->imaginary)/(second->real*second->real + second->imaginary*second->imaginary);
 x.imaginary=(first->imaginary*second->real- first->real*second->imaginary)/(second->real*second->real + second->imaginary*second->imaginary);

     return x;

}


// End of your code

/* Printing */
//Add your code here
void PrintComplex(CPTR complex){

printf("%f + i%f\n",complex->real,complex->imaginary);

}


// End of your code
