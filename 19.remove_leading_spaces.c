#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]", str);

    while (str[0] == ' ' || str[0] == '\t')
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            int next = i + 1;
            str[i] = str[next];
        }
    }
    printf("New String: %s\n", str);
    return 0;
}