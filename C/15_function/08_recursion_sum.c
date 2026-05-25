#include <stdio.h>

int sum(int num)
{

    if (num < 0)
    {
        printf("\nsum is not defiend for negative numbers");
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + sum(num - 1);
    }
}

int main()
{

    int value;

    printf("\n enter value ");
    scanf("%d",&value);

    int result1 = sum(value);

    printf("result %d", result1);

    return 0;
}