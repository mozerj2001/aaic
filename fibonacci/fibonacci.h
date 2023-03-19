#ifndef FIBONACCI_H
#define FIBONACCI_H

/*Revursive Fibonacci Search Implementation
*   input:  x       - number to be found
*           array   - a sorted array of numbers, in which x shall be found
*           N       - length of array
*   output: i       - index, at which x resides in array (-1 if x is not present)
*/
unsigned int recFibonacci(int x, int* array, unsigned int N);


/*Revursive Fibonacci Search Implementation
*   input:  x       - number to be found
*           array   - a sorted array of numbers, in which x shall be found
*           N       - length of array
*   output: i       - index, at which x resides in array
* DOES NOT HANDLE MISSES, THE ELEMENT SEARCHED MUST BE IN THE ARRAY!!
*/
unsigned int recFibonacciNoMiss(int x, int* array, unsigned int N);


/*Fibonacci Search Implementation with a Loop
*   input:  x       - number to be found
*           array   - a sorted array of numbers, in which x shall be found
*           N       - length of array
*   output: i       - index, at which x resides in array (-1 if x is not present)
*/
unsigned int loopFibonacci(int x, int* array, unsigned int N);



/*Find First Fibonacci Number Greater Than N
*   input:  N       - number, equal to or smaller than the highest Fibonacci number to be calculated
*   output: retVal  - 3 int array, storing the 3 highest Fibonacci numbers found 
*/
void findFibonacciGreaterThanN(unsigned int N, unsigned int* retVal);

#endif