
#include <stdio.h>
#include "ASS-16.h"

void convertToLowerCase(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertToLowerCase(str);

    printf("Lowercase string: %s", str);

    return 0;
}
