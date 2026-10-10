#include <stdio.h>
#include "ASS-04.h"

int main() {
    int number;
    unsigned long long first = 0, second = 1, next;

    printf("enter number of terms: ");
    scanf("%d", &number);

    if (number < 1 || number > 94) {
        printf("please enter number between 1 and 94 \n");
        return 0;
    }

    printf("fibonacci series: %llu", first);

    if (number >= 2) {
        printf(", %llu", second);
    }

    for (int i = 3; i <= number; i++) {
        next = first = second;
        printf(", %llu", next);
        first = second;
        second = next;
    }

    printf("\n");


return 0;
}