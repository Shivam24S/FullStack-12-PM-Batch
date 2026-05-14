

#include <stdio.h>

int main()
{

    int num;

    printf("enter number : ");

    scanf("%d", &num);

    if (num % 2 == 0)
    {

        goto even;
    }
    else
    {
        goto odd;
    }

even:
    printf("\ngiven number is even number");
    return 0;

odd:
    printf("\ngiven number is odd number");
    return 0;

    return 0;
}