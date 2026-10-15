program ASS-08;
Write a C program that asks the user to enter an integer and a base (between 2
and 16) and converts the integer to the specified base.

design:
1. Include the necessary header files.
2. local variables:
   - Declare a long long integer variable to store the user input.
   - Declare an integer variable to store the base.
3. steps:
   - Prompt the user to enter a decimal integer.
   - Read the integer input from the user.
   - Prompt the user to enter the target base (between 2 and 16).
   - Read the base input from the user.
   - Use a function to convert the decimal integer to the specified base.
   - Print the converted value to the console.
   
code:
     ASS-08.c

4. return statement:
   - Return 0 to indicate successful execution of the program.

test:
    Input 255, 16 → output: Converted value: FF
    Input -10, 2 → output: Converted value: -1010

#ifndef ASS_08_H
#define ASS_08_H

void convertToBase(long long number, int base, char result[]);

#endif
