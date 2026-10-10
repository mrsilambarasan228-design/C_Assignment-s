/*
program:
Write a C program that takes an integer from the user and determines whether
the number is even or odd.

design:
1. Include the necessary header files.
2. local variables:
   - Declare an integer variable to store the user input.
3. array of steps:
   - Prompt the user to enter an integer.
   - Read the integer input from the user.
   - Use the modulus operator to determine if the number is even or odd.
   - Print the result to the console.
4. return statement:
   - Return 0 to indicate successful execution of the program.

code:
     ASS-01.c

test:
    Input 10 → output: 10 is even number
    Input 7 → output: 7 is odd number
*/

#ifndef ASS_01_H
#define ASS_01_H

int isEven(int number);

#endif
