#include <stdio.h>
#include "ASS-02.h"

int main() {
    int number;
    int prime = 1;

    printf("Enter number:");
    scanf("%d", &number);

    if (number < 2) {
        prime = 0;
    }
    else{
        for(int i = 2; i <= number; i++){
            if (number % i == 0 ) {
                prime = 0;
                break;
            }
    }
}
    if (prime == 1) {
        printf("%d is prime number \n", number);
    }
    else {
        printf("%d is not prime number \n", number);
    }

return 0;
}
