/*
program: ASS-05
Write a C program that asks the user to enter a number and determines whether that
number is a perfect number or not.

design:
1. Include the necessary header files.
2. local variables:
   - Declare an integer variable to store the user input.
3. array of steps:
   - Prompt the user to enter an integer.
   - Read the integer input from the user.
   - Use a loop to calculate the sum of the proper divisors of the number.
   - Compare the sum with the original number to determine if it is perfect.
   - Print the result to the console.
4. return statement:
   - Return 0 to indicate successful execution of the program.

 code:  
     ASS-05.c

test:
    Input 6 → output: 6 is perfect number
*/

#ifndef ASS_05_H
#define ASS_05_H

int isperfect(int number);

#endif
