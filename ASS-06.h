program ASS_06;
Write a C program that uses a recursive function to find the GCD of two
numbers using the Euclidean algorithm.

design:
1. Include the necessary header files.
2. local variables:     
   - Declare two integer variables to store the user input.
3. steps:
   - Prompt the user to enter two numbers.
   - Read the two numbers from the user.
   - Check if the numbers are positive.
   - Call the recursive function to calculate the GCD.
   - Print the result.

code:
     ASS-06.c

4. return statement:
   - Return 0 to indicate successful execution of the program.
   
test:
    Input 48, 18 → output: GCD = 6
    Input 56, 98 → output: GCD = 14








#ifndef ASS_06_H
#define ASS_06_H

int gcd(int a, int b);

#endif
