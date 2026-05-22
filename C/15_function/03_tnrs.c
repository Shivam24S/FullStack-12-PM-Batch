

#include <stdio.h>

char *greeting()
{

    char *message = "good morning";

    return message;
}

int main()
{

    char *msg = greeting();

    printf("%s", msg);

    return 0;
}