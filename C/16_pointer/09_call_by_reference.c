

#include <stdio.h>

int callByReference(int *num)
{

    *num = 100;
}

int main()
{

    int numArgument = 10;

    int *ptr;

    ptr = &numArgument;

    int result = callByReference(ptr);

    printf("num argument %d\n", numArgument);

    return 0;
}