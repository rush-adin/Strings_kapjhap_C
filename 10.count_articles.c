#include <stdio.h>
#include <string.h>

int is_article(char *str, int len)
{
    if (len == 1 && str[0] == 'a')
        return 1;
    else if (len == 2 && str[0] == 'a' && str[1] == 'n')
        return 1;
    else if (len == 3 && str[0] == 't' && str[1] == 'h' && str[2] == 'e')
        return 1;
    else
        return 0;
}

int main()
{
    char str[100];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    char word[20];
    int j = 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';
            if (j > 0 && is_article(word, j))
                count++;
            j = 0;
        }
    }
    printf("Total articles = %d\n", count);

    return 0;
}