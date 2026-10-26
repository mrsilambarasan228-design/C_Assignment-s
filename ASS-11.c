
#include <stdio.h>
#include "ASS-11.h"

void integerToString(int num, char str[])
{
    int i = 0, j, temp;

    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }

    do
    {
        str[i++] = (num % 10) + '0';
        num = num / 10;
    } while (num > 0);

    if (str[0] == '-')
        j = 1;
    else
        j = 0;

    for (int k = j, l = i - 1; k < l; k++, l--)
    {
        temp = str[k];
        str[k] = str[l];
        str[l] = temp;
    }

    str[i] = '\0';
}

int main()
{
    int num;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    integerToString(num, str);

    printf("String value = %s\n", str);

    return 0;
}
