#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0')
        i++;
    printf("Length of the string = %d\n", --i);

    return 0;
}