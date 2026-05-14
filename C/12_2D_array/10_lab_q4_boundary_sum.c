

#include <stdio.h>

int main()
{

    int row;

    printf("enter the row size of an array ");
    scanf("%d", &row);

    int col;

    printf("enter the col size of an array ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("array [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {

                sum += arr[i][j];
                printf("%d\t", arr[i][j]);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    printf("\n the sum of array boundary is %d", sum);

    return 0;
}