#include <stdio.h>
#include "fibonacci.h"

int main(void){

    int test_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    unsigned int retVal[2];

    printf("%d\n", recFibonacci(0, test_array, 10));
    //printf("%d\n", loopFibonacci(77, test_array, 10));

    //findFibonacciGreaterThanN(10, retVal);
    //printf("%d\t%d\t%d\n", retVal[0], retVal[1], retVal[2]);


    return 0;
}