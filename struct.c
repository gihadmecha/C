#include "struct.h"

void parent_print ( parent p1)
{
    printf("name: %s \nnumber: %u \n", p1.name, p1.number);
}

void parent_printByRef ( parent* pp1)
{
    printf("name: %s \nnumber: %u \n", pp1->name, pp1->number);
}

parent parent_scan ()
{
    parent p1;
    printf("Enter parent number: ");
    scanf("%d", &(p1.number));
    printf("Enter parent name: ");
    string_scan ( p1.name);
    return p1;
}

parent* parent_scanReturnRef (parent* pp1)
{
    
    printf("Enter parent number: ");
    scanf("%d", &(pp1->number));
    printf("Enter parent name: ");
    string_scan ( pp1->name);
    return pp1;
}

void student_printByRef ( student* ps1)
{
    printf("name: %s \nID: %u \n", ps1->name, ps1->ID);
    parent_printByRef ( &(ps1->father) );
    parent_printByRef ( &(ps1->mother) );
}

student student_scan ( )
{
    student s1;
    printf("Enter student ID: ");
    scanf("%d", &(s1.ID));
    printf("Enter student name: ");
    string_scan ( s1.name);
    s1.father = parent_scan ();
    s1.mother = parent_scan ();
    return s1;
}

student* student_scanReturnRef ( student* ps1)
{
    printf("Enter student ID: ");
    scanf("%d", &(ps1->ID));
    printf("Enter student name: ");
    string_scan ( ps1->name);
    parent* father = parent_scanReturnRef( &(ps1->father) ) ;
    parent* mother =  parent_scanReturnRef( &(ps1->mother) ) ;
    ps1->father = *father;
    ps1->mother = *mother;
    return ps1;
}



void student_arrprint ( student* arr,  int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        student_printByRef ( arr + i);
    }
    printf("\n");
}

