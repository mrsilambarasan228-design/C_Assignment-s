program ASS-17;
Write a C program that takes an integer from the user and toggles a specified number of bits
starting from a given position.

DEGSIGN:
1. Prompt the user to enter an integer.
2. Read the input integer.
3. Prompt the user to enter the starting bit position and the number of bits to toggle.
4. Read the starting bit position and the number of bits.
5. Create a mask with the specified number of bits set to 1 starting from the given position.
6. Use the XOR operation to toggle the bits in the original integer using the mask.

CODE:
ASS-17.c

TEST CASES:
1. Input: num = 29 (11101 in binary), pos = 1, n = 3
   Output: 21 (10101 in binary)
2. Input: num = 15 (1111 in binary), pos = 0, n = 2
   Output: 12 (1100 in binary)

   

#ifndef ASS_17_H
#define ASS_17_H

unsigned int toggleBits(unsigned int num, int pos, int n);

#endif
