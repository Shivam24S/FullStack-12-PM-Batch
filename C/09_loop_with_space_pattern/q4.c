// 10101
//  0101
//   101
//    01
//     1

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (int k = i; k <= n; k++)
        {

            if (k % 2 == 1)
            {

                printf("1");
            }
            else
            {

                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}