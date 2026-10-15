#include<stdio.h>
#include "ASS-06.h"

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("please enter positive numbers \n");
        return 0;
    }

    printf("GCD = %d \n", gcd(num1, num2));

return 0;
}