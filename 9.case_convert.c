#include <stdio.h>
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
    printf("case converted form - %s", str);

    return 0;
}