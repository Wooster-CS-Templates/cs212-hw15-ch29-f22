FLAGS = -Wall -pthread

driver: main

clean:
	rm -f main *.o

couting.o: counting.c counting.h
	gcc -c counting.c $(FLAGS)

couting-scaling.o: counting-scaling.c counting-scaling.h
	gcc -c counting-scaling.c $(FLAGS)

linked-lists.o: linked-lists.c linked-lists.h
	gcc -c linked-lists.c $(FLAGS)

queue.o: queue.c queue.h
	gcc -c queue.c $(FLAGS)

hash-tables.o: hash-tables.c hash-tables.h
	gcc -c hash-tables.c linked-lists.c $(FLAGS)

main.o: main.c counting.h counting-scaling.h linked-lists.h queue.h hash-tables.h
	gcc -c main.c $(FLAGS)

main: main.o queue.o hash-tables.o linked-lists.o couting-scaling.o couting.o
	gcc -o main main.o queue.o hash-tables.o linked-lists.o counting-scaling.o counting.o $(FLAGS)

	

