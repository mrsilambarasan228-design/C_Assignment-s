
#include <stdio.h>
#include "ASS-14.h"

int isPangram(const char str[])
{
    int alphabet[26] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            alphabet[str[i] - 'A'] = 1;
        else if (str[i] >= 'a' && str[i] <= 'z')
            alphabet[str[i] - 'a'] = 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
            return 0;
    }

    return 1;
}

int main()
{
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (isPangram(str))
        printf("The string is a Pangram.\n");
    else
        printf("The string is not a Pangram.\n");

    return 0;
}
