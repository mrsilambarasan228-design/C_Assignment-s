#include <stdio.h>
#include "ASS-05.h"

int isperfect(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

int main () {

    int number;

    printf("Enter number;");
    scanf("%d", &number);

    if (number < 1) {
        printf("please enter number greater than 0 \n");
        return 0;
    }

    if (isperfect(number)) {
        printf("%d is perfect number \n", number);
    }
    else {
        printf("%d is not perfect number \n", number);
    }
    
return 0;
}