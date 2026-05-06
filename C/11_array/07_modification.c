

#include <stdio.h>

int main()
{

    // static modification
    int numArray[5] = {10, 20, 30, 40, 50};

    printf("\n before modification %d", numArray[0]);

    numArray[0] = 1000;

    printf("\n after modification %d", numArray[0]);

    // dynamic modification

    printf("\nenter element for modification ");
    scanf("%d", &numArray[0]);

    printf("\n after dynamic modification %d", numArray[0]);

    return 0;
}