/*
program: ASS-04
Write a C program that asks the user to enter a number and prints the Fibonacci series up to
that number of terms.

design:
1. Include the necessary header files.
2. local variables:
   - Declare an integer variable to store the user input.       
3. array of steps:
   - Prompt the user to enter an integer.
   - Read the integer input from the user.
   - Use a loop to calculate and print the Fibonacci series up to the specified number of terms
   - Print the result to the console.

code:
     ASS-04.c


4. return statement:
   - Return 0 to indicate successful execution of the program.


test:
    Input 5 → output: fibonacci series: 0, 1, 1, 2, 3
    Input 10 → output: fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13

*/

#ifndef ASS_04_H
#define ASS_04_H

void printFibonacci(int number);

#endif
