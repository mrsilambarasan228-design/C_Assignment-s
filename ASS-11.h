programming ASS-11 
Write a C program that takes an integer from the user and converts it into a
string of characters.

DESIGN:
1. Prompt the user to enter an integer.
2. Read the input integer.
3. Initialize a character array to store the converted string.
4. If the integer is negative, add a '-' sign to the string and convert the integer to positive.
5. Loop through the integer:
   a. Get the last digit of the integer using modulus operator.
   b. Convert the digit to its character representation by adding '0'.
   c. Store the character in the string array.
   d. Divide the integer by 10 to remove the last digit.
6. Reverse the string to get the correct order of digits.

CODE;
ASS-11.c

TEST CASES:
1. Input: 12345
   Output: "12345"
2. Input: -6789
   Output: "-6789"



#ifndef ASS_11_H
#define ASS_11_H

void integerToString(int num, char str[]);

#endif
