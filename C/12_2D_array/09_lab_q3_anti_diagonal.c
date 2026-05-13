#include <stdio.h>

int main()
{

    int n;

    printf("enter the size of an array ");
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nprinting the array\n ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int AntiDiagonalSum = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (i + j == n - 1)
            {
                AntiDiagonalSum += arr[i][j];
            }
        }
    }

    printf("\n the sum of anti diagonal array is %d", AntiDiagonalSum);

    // now for diagonal

    int diagonalSum = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                diagonalSum += arr[i][j];
            }
        }
    }

    printf("\n the sum of diagonal array is %d", diagonalSum);

    return 0;
}