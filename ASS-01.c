#include <stdio.h>
#include "ASS-01_H"

int main() {

    int number;
    printf("Enter Number:");
    scanf("%d", &number);

    if (number %2 == 0){
        printf("%d is even number \n", number);
    }
    else{
        printf("%d is odd number \n", number);
    }
return 0;
}