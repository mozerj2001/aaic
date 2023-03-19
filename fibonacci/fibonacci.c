#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"
/*This file contains fibonacci search implementations and functions that assist the search.*/


unsigned int recFibonacci(int x, int* array, unsigned int N){
    unsigned int i;             // index
    unsigned int fibNums[2];    // first Fibonacci number greater than N and the two numbers below it
    unsigned int tmp;

    findFibonacciGreaterThanN(N, fibNums);
    i = fibNums[0];

    if(array[i] == x){ return i; }
    else if(array[i] < x){ return (i + recFibonacci(x, &array[i], N-i)); }
    else{ return recFibonacci(x, &array[0], i); }

    return -1;
}


unsigned int loopFibonacci(int x, int* array, unsigned int N){
    unsigned int i;             // index
    unsigned int fibNums[2];    // first Fibonacci number greater than N and the two numbers below it
    unsigned int UPPER_LIMIT = N, LOWER_LIMIT = 0;

    while(N != 0){
        findFibonacciGreaterThanN(N, fibNums);
        i = LOWER_LIMIT + fibNums[0];

        if(array[i] == x){ return i; }
        else if(array[i] < x){ LOWER_LIMIT = i+1; }
        else { UPPER_LIMIT = i-1; }

        N = UPPER_LIMIT - LOWER_LIMIT;
    }

    return -1;
}



void findFibonacciGreaterThanN(unsigned int N, unsigned int* retVal){
    retVal[0] = 0;
    retVal[1] = 1;
    retVal[2] = 1;

    while(N > retVal[2]){
        retVal[0] = retVal[1];
        retVal[1] = retVal[2];
        retVal[2] = retVal[1] + retVal[0];
    }
}