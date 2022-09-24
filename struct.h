#include <stdio.h>

typedef struct parent {
    unsigned char name [7];
    unsigned int number;  
}parent;

typedef struct student {
    unsigned char name [7];
    unsigned int ID;
    parent father;
    parent mother;
}student;

void parent_print ( parent p1);
student student_scan ( );
student* student_scanReturnRef ( student* ps1);