
#include <stdio.h>
#include "myBasics.h"
#include "myArray.h"
#include "myString.h"

// typedef struct student
// {
    // unsigned char name[20];
    // signed int age;
    // unsigned char grade;
// }student;

typedef struct person
{
    unsigned char name[20];
    signed int mobile;
}person;

typedef struct student
{
    unsigned char name[20];
    signed int id;
    unsigned char grade;
    person father;
    person mother;
}student;

typedef struct answer 
{
    signed int add;
    signed int multiply;
}answer;

// void student_byValue_print (struct student student);
// void student_byReference_print ( struct student* pstudent);
// void array_ofStudent_byReferace_print ( struct student studentArr[], signed int arrSize);
// student student_returnValue_scan ( void);
// void student_ByReference_scan ( student* pStudent);
// student* student_returnByReferenceStatic_scan ( void);
// student* student_ByReferenceMalloc_scan ( );
answer addAndMultiply ( signed int number1, signed int number2);
void student_insert ( student* student );
void student_print ( student* student );
signed int array_student_searchByName ( student school[], signed int schoolSize, unsigned char name[]);
signed int array_student_searchByID ( student school[], signed int schoolSize);
void student_selectionSort_byId ( student school[], signed int schoolSize);
void school_print (student school[], signed int schoolSize);
void student_delete ( student school[], signed int schoolSize, signed int neededStudentIndex);
void student_add (student school[], signed int schoolSize, signed int needStudentIndex);