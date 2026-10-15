#include <stdio.h>
#include "ASS-07.h"

void countDigits(long long number, int frequency[]) {
    if (number == 0) {
        frequency[0]++;
        return;
    }

    unsigned long long value = number;
    if (number < 0) {
        value = (unsigned long long)(-number);
    }

    while (value != 0) {
        int digit = value % 10;
        frequency[digit]++;
        value /= 10;
    }
}

int main() {
    long long number;
    int frequency[10] = {0};

    printf("Enter an integer: ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    countDigits(number, frequency);

    printf("Digit frequencies:\n");
    for (int i = 0; i <= 9; i++) {
        printf("%d: %d\n", i, frequency[i]);
    }

    return 0;
}