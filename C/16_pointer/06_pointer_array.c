

#include <stdio.h>

int main()
{

    int num[5] = {10, 20, 30, 40, 50};

    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {

        ptr[i] = &num[i];
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%u=>%d\n", ptr[i], *ptr[i]);
    }

    return 0;
}