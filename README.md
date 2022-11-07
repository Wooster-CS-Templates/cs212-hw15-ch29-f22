# Testing the Data Structures

This collection of code contains slightly modified versions of the code found in the OSTEP chapter for concurrent data structures. I would like to you to simply spend some time and write a simple main program to exercise how the data structures work. All of your code will go into `main.c` and each data structure test is consolidated to a function.

The goal is to gain hands on experience with how the code works by using each of the functions provided by the respective data structure c files to manipulate the data structure with multiple concurrent threads (5 or so should be sufficient active at the same time). You may use the functions provided by common-threads.h to get your threads running.

You can simply run `make` to build your main program and `./main` to execute your application.

## Submissions **MUST**:
* Compile and run without error
* Each data structure function provided **MUST** be utilized
* Must have changes present to exercise the data structures with at least 5 **concurrent** threads maipulating the data structures with large numbers (1 Million) using counting, or storing a large number of items (>=1,000) using hash table, linked list, and queue.

## Grade: 4 points
