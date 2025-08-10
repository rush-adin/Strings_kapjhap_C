#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            j++;
        i++;
    }
    printf("total Spaces = %d\n", j);
    return 0;
}