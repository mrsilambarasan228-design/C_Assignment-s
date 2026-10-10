#include <stdio.h>
#include "ASS-03.h"

long long factorial(int number) {
    long long result = 1;

    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;
    long long result;

    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Don't enter negative numbers\n");
        return 0;
    }

    if (number > 20) {
        printf("Don't enter number greater than 20\n");
        return 0;
    }

    result = factorial(number);
    printf("factorial of %d is %lld\n", number, result);

    return 0;
}