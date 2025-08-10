#include <stdio.h>

int is_palindrome(char *str, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[--len])
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]", str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    if (is_palindrome(str, len))
        printf("Palindrome!\n");
    else
        printf("Not Palindrome!\n");

    return 0;
}