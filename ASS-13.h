program ASS-13;
Write a C program that takes a string from the user and reverses it.

DESIGN:
1. Prompt the user to enter a string.
2. Read the input string.
3. Initialize two pointers, one at the beginning and one at the end of the string.
4. Loop until the two pointers meet in the middle:
   a. Swap the characters at the two pointers.
5. Print the reversed string.

code:
ASS-13.c

test cases:
1. Input: "hello"
   Output: "olleh"
2. Input: "world"
   Output: "dlrow"

#ifndef ASS_13_H
#define ASS_13_H

void reverseString(char str[]);

#endif
