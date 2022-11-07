#ifndef __queue_h__
#define __queue_h__

#include "common-threads.h"

typedef struct __qnode_t {
    int value;
    struct __qnode_t *next;
} qnode_t;

typedef struct __queue_t {
    qnode_t *head;
    qnode_t *tail;
    pthread_mutex_t head_lock, tail_lock;
} queue_t;

void Queue_Init(queue_t *q);

void Queue_Enqueue(queue_t *q, int value);

int Queue_Dequeue(queue_t *q, int *value);

#endif