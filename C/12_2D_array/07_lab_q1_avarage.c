

#include <stdio.h>

int main()
{

    int row, col, sum = 0;

    printf("enter the row size of an array ");
    scanf("%d", &row);

    printf("enter the col size of an array ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("array [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    float avarage = sum / (row * col);

    printf("\n the avarage of 2d array is %.2f", avarage);

        return 0;
}