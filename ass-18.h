program ASS-18;
Write a C program that takes an integer from the user and calculates the sum of its digits.

DESIGN:
1. Prompt the user to enter an integer.
2. Read the input integer.
3. Initialize a variable to store the sum of the digits.
4. Loop through the integer:
   a. Get the last digit of the integer using modulus operator.
   b. Add the digit to the sum.
   c. Divide the integer by 10 to remove the last digit.

CODE:
ASS-18.c

TEST CASES:
1. Input: 12345
   Output: "Sum of digits = 15"
2. Input: 9876
   Output: "Sum of digits = 30"

   
#ifndef ASS_18_H
#define ASS_18_H

/* Add the function prototype(s) for ASS-18 here */
void assign18(void);

#endif
