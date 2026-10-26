PROGRAM: ASS-12
Write a C program that takes a string from the user and checks if it is a palindrome.

DESIGN:
1. Prompt the user to enter a string.
2. Read the input string.
3. Initialize two pointers, one at the beginning and one at the end of the string.
4. Loop until the two pointers meet in the middle:
   a. Compare the characters at the two pointers.
   b. If they are not equal, the string is not a palindrome.
5. If the loop completes without finding unequal characters, the string is a palindrome. 

CODE:
ASS-12.c

TEST CASES:
1. Input: "racecar"
   Output: "The string is a palindrome."
2. Input: "hello"
   Output: "The string is not a palindrome."


#ifndef ASS_12_H
#define ASS_12_H

int isPalindrome(const char str[]);

#endif
