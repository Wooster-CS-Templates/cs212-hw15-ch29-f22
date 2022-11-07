#include "common-threads.h"
#include "counting.h"

void counter_init(counter_t *c) {
    c->value = 0;
    Mutex_init(&c->lock);
}

void counter_increment(counter_t *c) {
    Mutex_lock(&c->lock);
    c->value++;
    Mutex_unlock(&c->lock);
}

void counter_decrement(counter_t *c) {
    Mutex_lock(&c->lock);
    c->value--;
    Mutex_unlock(&c->lock);
}

int counter_get(counter_t *c) {
    Mutex_lock(&c->lock);
    int rc = c->value;
    Mutex_unlock(&c->lock);
    return rc;
}