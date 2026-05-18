

#include <stdio.h>

int main()
{

    char string[100];

    printf("\n enter the string ");

    fgets(string, sizeof(string), stdin);

    // in space word it won't work it will ignore the word after space that's why we use fgets function

    // scanf("%s", &string);

    printf("\n entered string is %s", string);

    int i = 0;

    while (string[i] != '\0')
    {

        if (string[i] >= 'a' && string[i] <= 'z')
        {

            string[i] = string[i] - 32;
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
        i++;
    }

    printf("\n the toggle string is %s", string);

    return 0;
}
