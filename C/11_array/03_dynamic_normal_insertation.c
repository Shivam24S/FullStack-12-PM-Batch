

#include <stdio.h>

int main()
{

    int numArray[5];

    printf("enter first element of an array ");
    scanf("%d", &numArray[0]);

    printf("enter second element of an array ");
    scanf("%d", &numArray[1]);

    printf("enter third element of an array ");
    scanf("%d", &numArray[2]);

    printf("enter fourth element of an array ");
    scanf("%d", &numArray[3]);

    printf("enter fifth element of an array ");
    scanf("%d", &numArray[4]);

    printf("%d", numArray[0]);

    return 0;
}