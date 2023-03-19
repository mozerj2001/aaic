#include <stdio.h>
#include "fibonacci.h"
#include "test_fibonacci.h"

#define TEST_SIZE 500000

int main(void){

    timeRecursiveFibonacciSearch(TEST_SIZE);

    return 0;
}