#include <stdio.h>

int main()
{

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    printf("/n printing the 2d array");

    printf("\n before first element of an 2d array %d", arr[0][0]);

    // modify

    arr[0][0] = 24;

    printf("\n after first element of an 2d array %d", arr[0][0]);

    return 0;
}