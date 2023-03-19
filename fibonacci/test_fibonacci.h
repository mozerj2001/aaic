#ifndef TEST_FIBONACCI_H
#define TEST_FIBONACCI_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include "fibonacci.h"

/*Compare Function for qSort.
*/
int cmp(const void* a, const void* b);

/*Test Recursive Implementation
* This function measures the runtime of the recursive implementation on a
* random sorted array. Runtime is measured in clock ticks. Search will
* always be a hit.
*   input:  N   - data set size (size of integer array)
*   output: dt  - time passed before and after the search has run
*/

double timeRecursiveFibonacciSearch(unsigned int N);



#endif