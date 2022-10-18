#include "linkedList.h"
   
int main ()
{
    NODE list1 = NULLPTR;

    list_addNodeToLast (&list1, 5);
    list_addNodeToLast (&list1, 9);
    list_printNode (list1, 0);
    list_printNode (list1, 1);
    printf ("============\n");
    list_print (list1);
    list_editNode (list1, 2, 7);
    printf ("============\n");
    list_print (list1);
    list_addNodeToFirst (&list1, 11);
    printf ("============\n");
    list_print (list1);
    list_addNodeByIndex (&list1, 2, 8);
    printf ("============\n");
    list_print (list1);
    list_removeNodeByIndex (&list1, 4);
    printf ("============\n");
    list_print (list1);


    //printf ("%d %d\n", list1->data, list1->next);
    //printf ("%d %d\n", list1->next->data, list1->next->next);
}