

#include <stdio.h>

int main()
{

    // its exit control loop it will guaranty that it will execute atleast once if condition is satisfied or not satisfied

    // condition is not satisfied but still code running

    // int num = 10;

    // do
    // {
    //     printf("\n%d", num);
    // } while (num < 10);

    // return 0;

    // now with condition satisfied it will run as long as condition is satisfied

    int num = 1;

    do
    {
        printf("\n%d", num);
        num++;
    } while (num <= 10);

    return 0;
}