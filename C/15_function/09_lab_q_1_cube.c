

#include <stdio.h>

int cube(int num)
{

    if (num < 0)
    {
        printf("\n cube is not defined for negative values");
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        int result = num * num * num;
        return result;
    }
}

int main()
{

    int value;

    printf("\n enter the value ");
    scanf("%d", &value);

    int result = cube(value);

    printf("\n the result is %d", result);

    return 0;
}