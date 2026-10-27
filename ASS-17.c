
#include <stdio.h>
#include "ASS-17.h"

unsigned int toggleBits(unsigned int num, int pos, int n)
{
    unsigned int mask = 0;
    int i;

    if (pos < 0 || n <= 0 ||
        pos >= (int)(sizeof(num) * 8) ||
        n > (int)(sizeof(num) * 8) - pos)
    {
        return num;
    }

    for (i = 0; i < n; i++)
    {
        mask |= (1U << (pos + i));
    }

    return num ^ mask;
}

int main()
{
    unsigned int num, result;
    int pos, n;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    result = toggleBits(num, pos, n);
    printf("Number after toggling bits = %u\n", result);

    return 0;
}
