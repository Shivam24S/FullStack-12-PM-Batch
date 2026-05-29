

#include <stdio.h>
#include <string.h>

int main()
{

    char email[20];

    printf("\n enter your email ");
    // fgets(email, sizeof(email), stdin);

    scanf("%s",&email);

    char password[20];

    printf("\n enter your password ");
    // fgets(password, sizeof(password), stdin);

      scanf("%s",&password);

    char correctEmail[20] = "Admin@1gmail.com";
    char correctPassword[20] = "admin@123";

    int result1 = strcmp(correctEmail, email);

    int result2 = strcmp(correctPassword, password);

    // printf("\nresult 1 %d", result1);
    // printf("\nresult 2 %d", result2);

    if (strcmp(correctEmail, email) == 0 && strcmp(correctPassword, password) == 0)
    {
        printf("login successfully");
    }
    else
    {
        printf("invalid id or password");
    }

    return 0;
}