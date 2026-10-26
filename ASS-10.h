program ASS-10;
Write a C program that takes a string of digits from the user and converts it into
its equivalent integer value.

DESIGN:
1. Prompt the user to enter a string of digits.
2. Read the input string.
3. Initialize an integer variable to store the converted value.
4. Loop through each character in the string:
   a. Convert the character to its integer value by subtracting '0'.
   b. Multiply the current integer value by 10 and add the new digit.
5. Print the final integer value.




#ifndef ASS_10_H
#define ASS_10_H

int stringToInteger(const char str[]);

#endif
