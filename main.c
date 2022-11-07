#include "common-threads.h"
#include "counting.h"
#include "counting-scaling.h"
#include "hash-tables.h"
#include "linked-lists.h"
#include "queue.h"

void counter_experiment() {
    counter_t count;
    counter_init(&count);
}

void scaling_counter_experiment() {
    scounter_t scount;
    scounter_init(&scount, 10);
}

void queue_experiment() {
    queue_t cqueue;
    Queue_Init(&cqueue);
}

void linked_list_experiment() {
    list_t llist;
    List_Init(&llist);  
}

void hash_table_experiment() {
    hash_t htable;
    Hash_Init(&htable);
}

int main(int argc, char* argv[]) {
    
    counter_experiment();
    scaling_counter_experiment();
    linked_list_experiment();
    queue_experiment();
    hash_table_experiment();    

    return 0;
}