#include <stdio.h>
#include "ASS-08.h"

void convertToBase(long long number, int base, char result[]) {
    const char symbols[] = "0123456789ABCDEF";
    char reversed[65];
    int count = 0;
    int isNegative = number < 0;

    do {
        int remainder = number % base;

        if (remainder < 0) {
            remainder = -remainder;
        }

        reversed[count++] = symbols[remainder];
        number = number / base;
    } while (number != 0);

    int position = 0;

    if (isNegative) {
        result[position++] = '-';
    }

    while (count > 0) {
        result[position++] = reversed[--count];
    }

    result[position] = '\0';
}

int main() {
    long long decimal;
    int base;
    char result[66];

    printf("Enter a decimal integer: ");
    if (scanf("%lld", &decimal) != 1) {
        printf("Invalid number.\n");
        return 1;
    }

    printf("Enter the target base (2 to 16): ");
    if (scanf("%d", &base) != 1 || base < 2 || base > 16) {
        printf("Base must be from 2 to 16.\n");
        return 1;
    }

    convertToBase(decimal, base, result);

    printf("Converted value: %s\n", result);

    return 0;
}