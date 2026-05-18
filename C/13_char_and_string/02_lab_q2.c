
#include <stdio.h>

int main()
{

    char string[100];

    printf("\n enter the string ");

    fgets(string, sizeof(string), stdin);

    printf("\n entered string is %s", string);

    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] >= 'A' && string[i] <= 'Z')
        {

            string[i] = string[i] + 32;
        }
        i++;
    }

    printf("\n the lowerCase string is %s", string);

    return 0;
}
