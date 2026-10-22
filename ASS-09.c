
#include <stdio.h>
#include "ASS-09.h"

float calculate(float a, float b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if (b != 0)
                return a / b;
            else
                printf("Error: Division by zero!\n");
                return 0;
    }

    return 0;
}

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '/' && num2 == 0)
    {
        printf("Error: Division by zero!\n");
    }
    else if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        result = calculate(num1, num2, op);
        printf("Result = %.2f\n", result);
    }
    else
    {
        printf("Invalid operator!\n");
    }

    return 0;
}
