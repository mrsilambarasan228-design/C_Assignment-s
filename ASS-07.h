program ASS_07:
Write a C program that asks the user to enter an integer and counts the frequency of each digit

deign:
1. Include the necessary header files.
2. local variables:
   - Declare a long long integer variable to store the user input.
   - Declare an integer array of size 10 to store the frequency of each digit (0-9).
3. steps:
   - Prompt the user to enter an integer.
   - Read the integer input from the user.
   - Use a function to count the frequency of each digit in the number.
   - Print the frequency of each digit to the console.

 code:  
     ASS-07.c
     
4. return statement:
   - Return 0 to indicate successful execution of the program.

test:
    Input 1234567890 → output: 0: 1, 1: 1, 2: 1, 3: 1, 4: 1, 5: 1, 6: 1, 7: 1, 8: 1, 9: 1

#ifndef ASS_07_H
#define ASS_07_H

void countDigits(long long number, int frequency[]);

#endif
