#include <stdio.h>
int main()
{
    char str[100];
    printf("Input a String - ");
    fgets(str, sizeof(str), stdin);
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    int j = i;
    i--;
    printf("String in reverse - ");
    while (j--)
    {
        printf("%c", str[i--]);
    }
    printf("\n");

    return 0;
}