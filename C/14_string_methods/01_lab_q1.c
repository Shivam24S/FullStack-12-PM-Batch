

// one latter
// one Digit
// one special symbol
// 6 character length

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char password[10];

    printf("\n enter password ");
    scanf("%s", &password);

    int hasAlpha = 0;
    int hasDigit = 0;
    int specialSymbol = 0;

    int length = strlen(password);

    for (int i = 0; password[i] != '\0'; i++)
    {

        if (isalpha(password[i]))
        {
            hasAlpha = 1;
        }
        else if (isdigit(password[i]))
        {
            hasDigit = 1;
        }
        else
        {
            specialSymbol = 1;
        }
    }

    if (length >= 6 && hasAlpha && hasDigit && specialSymbol)
    {
        printf("Your password is strong");
    }
    else
    {
        printf("your password is not strong");
    }

    return 0;
}