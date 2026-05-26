

#include <stdio.h>

int main()
{

    int a = 24;

    int *ptr;

    ptr = &a;

    *ptr = 50;

    // printf("\n memory address %u", ptr);
    // printf("\n pointer address %p", ptr);
    // printf("\n pointer address %d", *ptr);

    printf("\n variable value address %d", a);

    return 0;
}