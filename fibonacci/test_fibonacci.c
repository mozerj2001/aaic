#include "test_fibonacci.h"
#include "fibonacci.h"

/*This file includes test functions for the different
* Fibonacci Search implementations.
*/

int cmp(const void* a, const void* b){
    return ( *(int*) a - *(int*) b );
}


double timeRecursiveFibonacciSearch(unsigned int N){
    int array[N-1], x;
    unsigned int i;
    double dt;
    long dt_usec, dt_sec;
    struct timeval BEFORE, AFTER;
    
    gettimeofday(&BEFORE, 0);
    srand(BEFORE.tv_usec);
    for(i = 0; i < N; i++){
        array[i] = rand();
    }
    qsort(array, N, sizeof(int), cmp);
    x = array[(int) ((double)rand()/(double)RAND_MAX * (double)N)];
    printf("%d\n", x);
    
    gettimeofday(&BEFORE, 0);
    recFibonacci(x, array, N);
    gettimeofday(&AFTER, 0);

    dt_usec = AFTER.tv_usec - BEFORE.tv_usec;
    dt_sec = AFTER.tv_sec - BEFORE.tv_sec;
    dt = dt_sec + dt_usec*1e-6;
    printf("Recursive Fibonacci Search just took: %lf seconds on an array with %d elements.", dt, N);

    return dt;
}

