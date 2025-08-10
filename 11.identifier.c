#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter the identifier - ");
    scanf("%s", str);
    if (str[0] >= 'a' && str[0] <= 'z')
        printf("Valid\n");
    else if (str[0] >= 'A' && str[0] <= 'Z')
        printf("Valid\n");
    else if (str[0] == '_')
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}