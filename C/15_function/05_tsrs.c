

#include <stdio.h>

int calculate(int a, int b, char operation)
{

    if (operation == '+')
    {
        return a + b;
    }
    else if (operation == '-')
    {
        return a - b;
    }
    else if (operation == '*')
    {
        return a * b;
    }
    else if (operation == '/')
    {
        return a / b;
    }
    else if (operation == '%')
    {
        return a % b;
    }
    else
    {
        printf("/n invalid operation");
    }
}

int main()
{

    int value1, value2;

    char operation;

    printf("\n enter operation you want to perform (+,-,/,*,%) ");
    scanf("%c", &operation);

    printf("\n enter value 1 ");
    scanf("%d", &value1);

    printf("\n enter value 2 ");
    scanf("%d", &value2);

    printf("%c", operation);

    int result = calculate(value1, value2, operation);

    printf("\n the result is %d", result);

    return 0;
}