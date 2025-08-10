#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Input String 1 - ");
    fgets(str1, sizeof(str1), stdin);
    printf("Input String 2 - ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are not equal\n");
            return 0;
        }
    }
    printf("Strings are equal\n");

    return 0;
}