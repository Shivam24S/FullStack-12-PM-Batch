

#include <stdio.h>

int factorial(int num)
{

    if (num < 0)
    {
        printf("factorial of negative number is not  defined");
    }
    else if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{

    int value;

    printf("\n enter value ");
    scanf("%d", &value);

    int result1 = factorial(value);

    printf("\n the result1 %d", result1);

    int result2 = factorial(10);

    printf("\n the result3 %d", result2);

    return 0;
}