#include <stdio.h>

int main()
{
    char str[100];
    char strcp[100];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        strcp[i] = str[i];
    }
    strcp[i] = '\0';

    printf("Copied String - %s", strcp);
    return 0;
}