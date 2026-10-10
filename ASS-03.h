/*
program: ASS-03
Write a C program that asks the user to enter a non-negative number and calculates
its factorial.

design:
1. Include the necessary header files.
2. local variables:
   - Declare an integer variable to store the user input.
   - Declare a long long integer variable to store the result.
3. steps:
   - Prompt the user to enter a number.
   - Read the number from the user.
   - Check if the number is negative or greater than 20.
   - Calculate the factorial using a loop.
   - Print the result.
4. return statement:
   - Return 0 to indicate successful execution.

code:
     ASS-03.c

test:
    Input 5 → output: factorial of 5 is 120
*/

#ifndef ASS_03_H
#define ASS_03_H

long long factorial(int number);

#endif
