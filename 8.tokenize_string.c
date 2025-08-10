#include <stdio.h>
int main()
{
    char str[500];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);
    char *token[250];
    int tndx = 0;
    char delim[10] = " ;,.?!";
    int pos = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int d = 0;
        int is_delim = 0;
        while (delim[d] != '\0')
        {
            if (str[i] == delim[d])
            {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (!is_delim)
        {
            if (str[i] != '\0')
            {
                token[tndx++] = &str[i];
                pos = i + 1;
                break;
            }
            else
            {
                printf("No Tokens found\n");
                return 0;
            }
        }
    }

    for (int i = pos; str[i] != '\0'; i++)
    {
        int d = 0;
        int is_delim = 0;
        while (delim[d] != '\0')
        {
            if (str[i] == delim[d])
            {
                is_delim = 1;
                break;
            }
            d++;
        }

        if (is_delim)
        {
            str[i] = '\0';
            pos = i + 1;
            d = 0;
            for (i = pos; str[i] != '\0'; i++)
            {
                int skip = 0;
                while (delim[d] != '\0')
                {
                    if (str[i] == delim[d])
                    {
                        skip = 1;
                        break;
                    }
                    d++;
                }
                if (!skip)
                {
                    if (str[i] != '\0')
                    {
                        token[tndx++] = &str[i];
                        break;
                    }
                    else
                    {
                        i--;
                        break;
                    }
                }
            }
        }
    }
    token[tndx] = NULL;
    tndx = 0;
    while (*token[tndx] != '\n')
    {
        printf("Token %d - %s\n", tndx + 1, token[tndx]);
        tndx++;
    }
    return 0;
}