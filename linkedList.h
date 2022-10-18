#include <stdio.h>
#include <stdlib.h>

#define NULLPTR ((void*)0)

typedef struct node{
    signed int data;
    struct node* next;
}node_t;

typedef node_t* NODE;

NODE list_createNode (signed int date);
void list_addNodeToLast (NODE* addressOfFirstNode, signed int data);
void list_printNode (NODE firstNode, signed int dataIndex);
void list_print (NODE firstNode);
signed list_editNode (node_t* firstNode, signed int dataIndex, signed int data);
void list_addNodeToFirst (node_t** firstNode, signed int data);
void list_addNodeByIndex (node_t** firstNode, signed int dataIndex,signed int data);
void list_removeNodeByIndex (node_t** firstNode, signed int dataIndex);