
#include <stdio.h>

int main()
{

    int num;

    printf("please enter number ");

    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {

        if (i % 2 != 0)
        {
            continue;
        }

        printf("\n%d", i);
    }

    return 0;
}