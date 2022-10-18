#include "linkedList.h"

node_t* list_createNode (signed int date)
{
    node_t* node = (node_t*) malloc(sizeof(node_t));

    if (node == NULLPTR)
        return 0;

    node->data = date;
    node->next = NULLPTR;

    return node;
}

void list_addNodeToLast (node_t** firstNode, signed int data)
{
    node_t* currentNode = *firstNode;

    if (*firstNode == NULLPTR)
        *firstNode = list_createNode (data);

    else
    {
        for (signed int index = 0; currentNode->next; index++)
        {
            currentNode = currentNode->next;        
        }

        currentNode->next = list_createNode (data); 
    }
}

void list_printNode (node_t* firstNode, signed int dataIndex)
{
    node_t* currentNode = firstNode;

    if (firstNode == NULLPTR)
        return;

    for (signed int index = 0; index < dataIndex; index++)
    {
        currentNode = currentNode->next;
    }
    printf ("%d %p\n", currentNode->data, currentNode->next); 
}

void list_print (node_t* firstNode)
{
    node_t* currentNode = firstNode;

    for (signed int index = 0; currentNode; index++)
    { 
        printf ("%d \n", currentNode->data);
        currentNode = currentNode->next;
    }
}

signed int list_editNode (node_t* firstNode, signed int dataIndex, signed int data)
{
    node_t* currentNode = firstNode;

    for (signed int index = 0; index < dataIndex; index++)
    {
        if (currentNode == NULLPTR)
            return  0;

        currentNode = currentNode->next;
    }

    if (currentNode != NULLPTR)
    {
        currentNode->data = 7;
        return 1;
    } 

    return 0;
}

void list_addNodeToFirst (node_t** firstNode, signed int data)
{
    node_t* currentNode = list_createNode(11);

    currentNode->next = *firstNode;

    *firstNode = currentNode; 
}

void list_addNodeByIndex (node_t** firstNode, signed int dataIndex,signed int data)
{
    node_t* currentNode = list_createNode(data);

    node_t* previousNode = *firstNode;
    node_t* nextNode = *firstNode;

    if (*firstNode == NULLPTR)
    {
        *firstNode = currentNode;
        return;
    }

    if (dataIndex == 0)
    {
        currentNode->next = *firstNode;
        *firstNode = currentNode;
        return;
    }

    for (signed int index = 0; index < dataIndex - 1; index++)
    {
       if (previousNode->next == NULLPTR)
            return;

       previousNode = previousNode->next;
    } 
    nextNode = previousNode->next;
    currentNode->next = nextNode;
    previousNode->next = currentNode; 
}

void list_removeNodeByIndex (node_t** firstNode, signed int dataIndex)
{
    node_t* previousNode = *firstNode;
    node_t* temperoryPointer;

    if (*firstNode == NULLPTR)
        return;

    if (dataIndex == 0)
    {
        temperoryPointer = *firstNode;
        *firstNode = (*firstNode)->next;
        free(temperoryPointer);
        return;
    }

    for (signed int index = 0; index < dataIndex - 1; index++)
    {
       previousNode = previousNode->next;
       
       if (previousNode->next == NULLPTR)
            return;

    } 
    temperoryPointer = previousNode->next;
    previousNode->next = previousNode->next->next;
    free(temperoryPointer);
}
