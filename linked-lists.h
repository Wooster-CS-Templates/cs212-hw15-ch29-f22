#ifndef __linked_lists_h__
#define __linked_lists_h__

#include "common-threads.h"

// basic node structure
typedef struct __llnode_t {
    int key;
    struct __llnode_t *next;
} llnode_t;

// basic list structure (one used per list)
typedef struct __list_t {
    llnode_t *head;
    pthread_mutex_t lock;
} list_t;

void List_Init(list_t *L);

int List_Insert(list_t *L, int key);

int List_Lookup(list_t *L, int key);

#endif