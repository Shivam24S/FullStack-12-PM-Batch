

#include <stdio.h>

int main()
{

    int size;

    printf("enter size of an array ");

    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {

        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("first element of an array %d", array[0]);

    return 0;
}