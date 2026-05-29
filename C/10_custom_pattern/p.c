// * * * * *
// *       *
// * * * * *
// *
// *



// totalRow=5
// totalCol=5
// 1row=Full star
// 3row=Full star
// 2row=first and last column only or else we will be printing spaces
// 4and5 row = staring column only need to print star

#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {

            if (i == 1 || i == 3)
            {
                printf("* ");
            }
            else if (i == 2)
            {

                if (j == 1 || j == 5)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if (j == 1)
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}