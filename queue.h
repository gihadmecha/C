#include <stdio.h>
#include <stdlib.h>

#define NULLPTR ((void*)0)

typedef struct queue{
   signed int* queue;
   signed int size;
   signed int qp; 
   signed int inP;
   signed int outP;
   signed int circularFlag;
}queue_t;

typedef queue_t* QUEUE;

typedef enum{
    QUEUE_FULL = 0,
    QUEUE_EMPTY = 0,
    QUEUE_DONE,
    QUEUE_NOTCREATED
}queue_status;


QUEUE queueCreate (signed int queueSize);
queue_status inQueue (QUEUE queue, signed int data);
queue_status deQueue (QUEUE queue, signed int* pdata);
queue_status inCircularQueue (QUEUE queue, signed int data);
queue_status deCircularQueue (QUEUE queue, signed int* pdata);
void queueDelete (QUEUE queue);