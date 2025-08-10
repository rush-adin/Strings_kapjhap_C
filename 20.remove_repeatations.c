#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]", str);
    int rep[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        int d = str[i];
        if (rep[d] == 0)
        {
            rep[d]++;
        }
        else
        {
            int j;
            for (j = i; str[j] != '\0'; j++)
            {
                int next = j + 1;
                str[j] = str[next];
            }
            str[j] = '\0';
            i--;
        }
    }

    printf("New String: %s\n", str);
    return 0;
}