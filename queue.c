#include <stdlib.h>
#include "common-threads.h"
#include "queue.h"

void Queue_Init(queue_t *q) {
    qnode_t *tmp = malloc(sizeof(qnode_t));
    tmp->next = NULL;
    q->head = q->tail = tmp;
    Mutex_init(&q->head_lock);
    Mutex_init(&q->tail_lock);
}

void Queue_Enqueue(queue_t *q, int value) {
    qnode_t *tmp = malloc(sizeof(qnode_t));
    assert(tmp != NULL);
    tmp->value = value;
    tmp->next = NULL;

    Mutex_lock(&q->tail_lock);
    q->tail->next = tmp;
    q->tail = tmp;
    Mutex_unlock(&q->tail_lock);
}

int Queue_Dequeue(queue_t *q, int *value) {
    Mutex_lock(&q->head_lock);
    qnode_t *tmp = q->head;
    qnode_t *new_head = tmp->next;
    if (new_head == NULL) {
        Mutex_unlock(&q->head_lock);
        return -1; // queue was empty
    }
    *value = new_head->value;
    q->head = new_head;
    Mutex_unlock(&q->head_lock);
    free(tmp);
    return 0;
}