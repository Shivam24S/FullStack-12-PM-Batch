

#include <stdio.h>

int callByValue(int num)
{

    num = 100;
}

int main()
{

    int numArgument = 10;

    int result = callByValue(numArgument);

    printf("num argument %d\n", numArgument);

    return 0;
}