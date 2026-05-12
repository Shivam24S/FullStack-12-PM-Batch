

#include <stdio.h>

int main()
{

    int size;

    printf("enter the size of an array ");
    scanf("%d", &size);

    int arr[size][size];

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            printf("array [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}