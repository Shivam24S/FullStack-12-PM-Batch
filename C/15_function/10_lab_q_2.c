

#include <stdio.h>

void checkDivisible(int num)
{

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("\n the given number is divisible by 3 and 5");
    }
    else
    {
        printf("\n the given number is not divisible 3 and 5");
    }
}

int main()
{

    checkDivisible(15);

    return 0;
}