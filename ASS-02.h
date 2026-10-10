/*
program: ASS-02
Write a C program that asks the user to enter a number and determines whether that
number is prime or not.

design:
1. Include the necessary header files.
2. local variables:
   - Declare an integer variable to store the user input.
3. array of steps:
   - Prompt the user to enter an integer.
   - Read the integer input from the user.
   - Use a loop to check if the number is prime.
   - Print the result to the console.
4. return statement:
   - Return 0 to indicate successful execution of the program.

code:
     ASS-02.c

test:
    Input 7 → output: 7 is prime number
    Input 10 → output: 10 is not prime number

*/

#ifndef ASS_02_H
#define ASS_02_H

int isPrime(int number);

#endif
