

#include <stdio.h>

int main()
{

    int n;

    printf("\nenter the size of an array ");
    scanf("%d", &n);

    int arr1[n][n], arr2[n][n], arr3[n][n];

    printf("\nenter the first array  elements ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\narray-1 [%d][%d] ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nenter the second array  elements ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\narray-2 [%d][%d] ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nthe first array  elements  are\n ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nthe second array  elements  are\n ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nthe third array  elements  are using above both array addition\n ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}