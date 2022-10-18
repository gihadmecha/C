#include "queue.h"

QUEUE queueCreate (signed int queueSize)
{
    QUEUE queue = (QUEUE) malloc (sizeof(queue_t));

    if (queue == NULLPTR)
        return 0;

    queue->queue = (signed int*) malloc (queueSize * sizeof(signed int));
    queue->size = queueSize;
    queue->qp = 0;
    queue->inP = 0;
    queue->outP = 0;
    queue->circularFlag = 0; //empty

    return queue;
}

queue_status inQueue (QUEUE queue, signed int data)
{
    if (queue == NULLPTR)
        return QUEUE_NOTCREATED;

    queue_status status = QUEUE_FULL;

    if (queue->qp < queue->size)
    {
        queue->queue[queue->qp] = data;
        queue->qp++;
        status = QUEUE_DONE;
    }

    return status;
}

queue_status deQueue (QUEUE queue, signed int* pdata)
{
    if (queue == NULLPTR)
        return QUEUE_NOTCREATED;

    queue_status status = QUEUE_EMPTY;

    if (queue->qp > 0)
    {
        *pdata = queue->queue[0];
        for (signed int index = 1; index < queue->size; index++)
        {
            queue->queue[index - 1] = queue->queue[index];
        }
        queue->qp--;
        status = QUEUE_DONE;
    }

    return status;   
}

queue_status inCircularQueue (QUEUE queue, signed int data)
{
    if (queue == NULLPTR)
        return QUEUE_NOTCREATED;

    queue_status status;

    if (queue->inP == queue->outP && queue->circularFlag == 1)
        status = QUEUE_FULL;
    else
    {
        queue->queue[queue->inP] = data;
        queue->inP++;
        status = QUEUE_DONE;
    }

    if (queue->inP == queue->size)
    {
        queue->inP = 0;
        queue->circularFlag = 1; //full
    }

    return status;
}

queue_status deCircularQueue (QUEUE queue, signed int* pdata)
{
    if (queue == NULLPTR)
        return QUEUE_NOTCREATED;

    queue_status status = QUEUE_EMPTY;

    if (queue->inP == queue->outP && queue->circularFlag == 0)
        status = QUEUE_EMPTY;
    else
    {
        *pdata = queue->queue[queue->outP];
        queue->outP++;
        status = QUEUE_DONE;
    }

    if (queue->outP == queue->size)
    {
        queue->outP = 0;
        queue->circularFlag = 0; //empty
    }

    return status;
}

void queueDelete (QUEUE queue)
{
    if (queue == NULLPTR)
        return;

    free (queue->queue);
    free (queue);
}
