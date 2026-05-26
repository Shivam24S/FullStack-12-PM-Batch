

#include <stdio.h>

int main()
{

    int num = 24;

    int *ptr;

    ptr = &num;

    printf("\n memory address %u", ptr);
    printf("\n memory address %u", ptr + 1);

    return 0;
}