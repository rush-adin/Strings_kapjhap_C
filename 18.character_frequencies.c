#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]", str);

    int frq[150] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        int d = str[i];
        frq[d]++;
    }

    for (int i = 0; i < 150; i++)
    {
        if (frq[i] != 0 && i != ' ')
            printf("character %c - frequency - %d\n", i, frq[i]);
    }

    return 0;
}