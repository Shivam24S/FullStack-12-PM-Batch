//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 5; i >= 1; i--)
    {

        for (int j = n - i + 1; j <= 4; j++)
        {
            printf(" ");
        }

        for (int k = i; k <= n; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}