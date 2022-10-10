#include "struct.h"

// void student_byValue_print (struct student student)
// {
    // //printf ("%s %d %c\n", student.name, student.age, student.grade);

    // string_print (student.name);
    // printf ("%d\n", student.age);
    // printf ("%c\n", student.grade);
// }

// void student_byReference_print ( struct student* pstudent)
// {
    // //printf ("%s %d %c\n", (*pstudent).name, (*pstudent).age, (*pstudent).grade);

    // string_print ( (*pstudent).name );
    // printf ("%d \n", (*pstudent).age);
    // printf ("%c\n", (*pstudent).grade );
// }

// student student_returnValue_scan ( void)
// {
    // student student;
    // unsigned char character;

    // printf ("name: ");
    // //string_scan (student.name, 4);
    // //scanf ("%s", student.name);
    // gets(student.name);
    // printf ("age: ");
    // scanf ("%d", &student.age );
    // printf ("grade: ");
    // scanf (" %c", &student.grade );

    // scanf ("%c", &character);

    // return student;
// }

// void student_ByReference_scan ( student* pStudent)
// {
    // unsigned char character;

    // printf ("name: ");
    // //string_scan ((*pStudent).name, 4);
    // //scanf ("%s", (*pStudent).name);
    // gets((*pStudent).name);
    // printf ("age: ");
    // scanf ("%d", &(*pStudent).age);
    // printf ("grade: ");
    // scanf (" %c", &(*pStudent).grade);

    // scanf ("%c", &character);

// }

// student* student_returnByReferenceStatic_scan ( void)
// {
    // static student student;
    // unsigned char character;

    // printf ("name: ");
    // //string_scan (student.name, 20);
    // //scanf ("%s", student.name);
    // gets(student.name);
    // printf ("age: ");
    // scanf ("%d", &student.age );
    // printf ("grade: ");
    // scanf (" %c", &student.grade );

    // scanf ("%c", &character);

    // return &student;
// }

// student* student_ByReferenceMalloc_scan ( )
// {
    // student* pStudent = (student* ) malloc ( sizeof (student));
    // unsigned char character;

    // printf ("name: ");
    // //string_scan ((*pStudent).name, 20);
    // //scanf ("%s", (*pStudent).name);
    // gets((*pStudent).name);
    // printf ("age: ");
    // scanf (" %d", &(*pStudent).age);
    // printf ("grade: ");
    // scanf (" %c", &(*pStudent).grade);

    // scanf ("%c", &character);

    // return pStudent;
// }

// void array_ofStudent_byReferace_print ( struct student studentArr[], signed int arrSize)
// {
    // for (signed int arrIndex = 0; arrIndex < arrSize; arrIndex++)
    // {
        // student_byReference_print ( studentArr + arrIndex);
    // } 
// }

answer addAndMultiply ( signed int number1, signed int number2)
{
    answer answer;
    answer.add = number1 + number2;
    answer.multiply = number1 * number2;

    return answer;
}

void student_insert ( student* student )
{
    unsigned char character;

    printf ("student name: ");
    gets (student->name);
    printf ("id: ");
    scanf ("%d",&(student->id));

    scanf ("%c", &character);
    printf ("grade: ");
    scanf ("%c", &(student->grade));

    scanf ("%c", &character);
    printf ("father name: ");
    gets (student->father.name);
    printf ("father mobile: ");
    scanf ("%d", &(student->father.mobile));

    scanf ("%c", &character);
    printf ("mother name: ");
    gets (student->mother.name);
    printf ("mother mobile: ");
    scanf ("%d", &(student->mother.mobile));

    scanf ("%c", &character);
}

void student_print ( student* student )
{
    printf ("student name: ");
    string_print (student->name);
    printf ("id: %d\n", student->id);
    printf ("grade: %c\n", student->grade);
    printf ("father name: ");
    string_print ( student->father.name );
    printf ("father mobile: %d\n", student->father.mobile);
    printf ("mother name: ");
    string_print (student ->mother.name);
    printf ("mother mobile: %d\n", student->mother.mobile);
}

signed int array_student_searchByName ( student school[], signed int schoolSize, unsigned char name[])
{
    for (signed int schoolIndex = 0; schoolIndex < schoolSize; schoolIndex++)
    {
        if ( string_compare( school[schoolIndex].name, name))
            return schoolIndex;
    }

    return -1;
}

signed int array_student_searchByID ( student school[], signed int schoolSize)
{
    signed int maxId = school[0].id;
    signed int maxIdIndex = 0;

    for (signed int schoolIndex = 0; schoolIndex < schoolSize; schoolIndex++)
    {
        if (maxId < school[schoolIndex].id)
        {
            maxId = school[schoolIndex].id;
            maxIdIndex = schoolIndex;
        }
    }
    
    return maxIdIndex;
}

void student_swap (student* student1, student* student2)
{
    student temperory = *student1;
    *student1 = *student2;
    *student2 = temperory;
}

void student_selectionSort_byId ( student school[], signed int schoolSize)
{
    signed int maxIdIndex;
    signed int maxId;

    for (signed int index_j = 0; index_j < schoolSize; index_j++)
    {
        maxId = 0;

        for (signed int index_i = 0; index_i < schoolSize - index_j; index_i++)
        {
            if ( maxId <= school[index_i].id )
            {
                maxId = school[index_i].id;
                maxIdIndex = index_i;
            }   
        }    

        student_swap ( school + maxIdIndex, school + ( (schoolSize - 1) - index_j) );
    }
}

void school_print (student school[], signed int schoolSize)
{
    for (signed int schoolIndex = 0; schoolIndex < schoolSize; schoolIndex++)
    {
        student_print ( school + schoolIndex);
    }
}

void student_delete ( student school[], signed int schoolSize, signed int neededStudentIndex)
{
    student student = {0};

    for (signed int schoolIndex = neededStudentIndex; schoolIndex < schoolSize - 1; schoolIndex++)
    {
        school[schoolIndex] = school[schoolIndex + 1];
    } 

    school[schoolSize - 1] = student;  
}

void student_add (student school[], signed int schoolSize, signed int needStudentIndex)
{
    for (signed int schoolIndex = schoolSize - 1; schoolIndex > needStudentIndex; schoolIndex--)
    {
        school[schoolIndex] = school[schoolIndex - 1];
    }
    
    printf ("Hi !!\n");

    student_insert (school + needStudentIndex);
}