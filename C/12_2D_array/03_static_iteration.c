#include <stdio.h>

int main()
{

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    printf("/n printing the 2d array");

    printf("\nfirst element of an 2d array %d", arr[0][0]);
    printf("\nsecond element of an 2d array %d", arr[0][1]);
    printf("\nthird element of an 2d array %d", arr[0][2]);
    printf("\nfourth element of an 2d array %d", arr[1][0]);
    printf("\nfifth element of an 2d array %d", arr[1][1]);
    printf("\nsixth element of an 2d array %d", arr[1][2]);
    printf("\nseventh element of an 2d array %d", arr[2][0]);
    printf("\neighth element of an 2d array %d", arr[2][1]);
    printf("\ninth element of an 2d array %d", arr[2][2]);

    return 0;
}