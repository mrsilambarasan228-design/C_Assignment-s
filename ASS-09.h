program ASS-09;
**Write a C program that uses functions to evaluate a simple arithmetic expression**
**given two numbers and an operator.**
**Description:** The program should prompt the user to enter two floating-point
numbers and an arithmetic operator (+, -, \*, /). A separate function must be written for

design:
1. Include the necessary header files.
2. local variables:
   - Declare two float variables to store the user input numbers.
   - Declare a char variable to store the operator.
3. steps:
   - Prompt the user to enter two floating-point numbers.
   - Read the numbers input from the user.
   - Prompt the user to enter an arithmetic operator (+, -, *, /).
   - Read the operator input from the user.
   - Use a function to perform the arithmetic operation based on the operator.
   - Print the result of the operation to the console.

CODE:
     ASS-09.c
     
4. return statement:
   - Return 0 to indicate successful execution of the program.  
TEST:
    Input 5.0, 3.0, + → output: Result = 8.00
    Input 10.0, 2.0, / → output: Result = 5.00
    Input 7.0, 0.0, / → output: Error: Division by zero!
    Input 4.0, 2.0, x → output: Invalid operator! 



#ifndef ASS_09_H
#define ASS_09_H

float calculate(float a, float b, char op);

#endif
