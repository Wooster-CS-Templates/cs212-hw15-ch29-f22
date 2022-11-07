#ifndef __counting_h__
#define __counting_h__

#include "common-threads.h"

typedef struct __counter_t {
int value;
    pthread_mutex_t lock;
} counter_t;

void counter_init(counter_t *c);
void counter_increment(counter_t *c);
void counter_decrement(counter_t *c);
int counter_get(counter_t *c);

#endif