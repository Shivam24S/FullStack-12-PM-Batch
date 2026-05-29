

#include <stdio.h>

int main()
{
    int *ptr;
    int num[] = {10, 20, 30, 40, 50};

    printf("%d\n", num[2]);

    ptr = num;

    // printf("%u", *ptr);

    for (int i = 0; i < 5; i++)
    {

        printf("%u=>%d\n", ptr + i, *(ptr + i));
    }

    return 0;
}