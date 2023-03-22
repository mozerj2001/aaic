#include <stdio.h>
#include "fibonacci.h"
#include "test_fibonacci.h"

int main(void){
    unsigned int testN = TEST_SIZE;
    double dt;

    dt = timeRecursiveFibonacciSearch(testN);

    printf("%lf s\n", dt);

    return 0;
}