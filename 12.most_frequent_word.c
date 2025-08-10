#include <stdio.h>
#include <string.h>
typedef struct word_count
{
    char str[25];
    int count;
} word;

int main()
{
    word arr[20] = {0};
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]", str);
    char token[25];
    int k = 0;
    int not_empty = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            token[k++] = str[i];
            not_empty = 1;
        }
        else
        {
            token[k] = '\0';
            if (not_empty)
            {
                int new = 1;
                for (int j = 0; arr[j].count != 0; j++)
                {
                    if (!strcmp(token, arr[j].str))
                    {
                        arr[j].count++;
                        new = 0;
                        break;
                    }
                }
                if (new)
                {
                    int j;
                    for (j = 0; arr[j].count != 0; j++)
                        ;
                    arr[j].count = 1;
                    strcpy(arr[j].str, token);
                }
                not_empty = 0;
            }
            k = 0;
        }
    }

    int max = 0;
    char fstr[25];
    for (int i = 0; arr[i].count != 0; i++)
    {
        if (arr[i].count > max)
        {
            max = arr[i].count;
            strcpy(fstr, arr[i].str);
        }
    }

    printf("Most Frequent string: %s\n", fstr);
    printf("Frequency           : %d\n", max);
}