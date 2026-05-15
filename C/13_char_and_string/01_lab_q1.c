

#include <stdio.h>

int main()
{

    char string[100];

    printf("enter the letter ");

    // capital A->z => 65 to 90;
    // small a->z =>97 to 122;

    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {

        if (string[i] >= 'a' && string[i] <= 'z')
        {

            string[i] = string[i] - 32;
            i++;
        }
    }

    printf("\nthe capital letter is %s", string);

    return 0;
}