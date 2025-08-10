#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    int space = 1;
    printf("initials - ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (space)
            {
                printf("%c", str[i] - 32);
                space = 0;
            }
        }
        else
        {
            space = 1;
        }
    }
    printf("\n");
}