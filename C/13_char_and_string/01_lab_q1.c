

// #include <stdio.h>

// int main()
// {

//     char string[100];

//     printf("enter the letter ");

//     // capital A->z => 65 to 90;
//     // small a->z =>97 to 122;

//     fgets(string, sizeof(string), stdin);

//     for (int i = 0; string[i] != '\0'; i++)
//     {

//         if (string[i] >= 'a' && string[i] <= 'z')
//         {

//             string[i] = string[i] - 32;
//         }
//         // i++;
//     }

//     printf("\nthe capital letter is %s", string);

//     return 0;
// }

// using while loop

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
        i++;
    }

    printf("\n the uppercase string is %s", string);

    return 0;
}
