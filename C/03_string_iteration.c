

#include <stdio.h>

int main()

{

    // string sequence of characters

    char string[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    printf("%s", string);

    //

    char specificCharacter = string[0];

    printf("\n%c", specificCharacter);

    // dynamic

    for (int i = 0; i <= 6; i++)
    {

        printf("\n%c", string[i]);
    }

    return 0;
}