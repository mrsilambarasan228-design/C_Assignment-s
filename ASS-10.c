
#include <stdio.h>
#include "ASS-10.h"

int stringToInteger(const char str[]) {
    int num = 0;
    int i = 0;

    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return num;
}

int main()
{
    char str[100];
    int num = 0;
    int i = 0;

    printf("Enter a number as a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    printf("Integer value = %d\n", num);

    return 0;
}

