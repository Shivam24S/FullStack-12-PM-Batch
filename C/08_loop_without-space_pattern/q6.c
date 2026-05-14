
// 10101
// 1010
// 101
// 10
// 1

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if ((j - i) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}