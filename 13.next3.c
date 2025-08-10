#include <stdio.h>
int main()
{
    char str[3];
    printf("Enter three characters - ");
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%c", &str[i]);
    }
    str[i] = '\0';

    for (i = 0; i < 3; i++)
    {
        printf("%c", str[i] + 1);
    }

    return 0;
}