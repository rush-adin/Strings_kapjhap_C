#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int k = i;
        int space = 0;
        if (str[i] == ' ' || str[i] == '\t')
        {
            int j = i;
            while (str[i] != '\0')
            {
                str[i] = str[++j];
                i++;
            }
            space = 1;
        }
        i = k;
        if (space)
            i--;
    }

    printf("String with spaces removed - %s\n", str);
    return 0;
}