

#include <stdio.h>

int main()
{

    int day;

    printf("\n enter day number ");
    scanf("%d", &day);

    switch (day)
    {
    case 0:
        printf("\n sunday");
        break;

    case 1:
        printf("\n monday");
        break;

    case 2:
        printf("\n tuesday");
        break;

    case 3:
        printf("\n wednesday");
        break;

    case 4:
        printf("\n thursday");
        break;

    case 5:
        printf("\n friday");
        break;

    case 6:
        printf("\n saturday");

    default:
        printf("\n you have entered wrong choice please select from 0-6");
    }

    return 0;
}