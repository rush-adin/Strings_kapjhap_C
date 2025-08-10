#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%[^\n]s", str);
    int start, length;
    printf("Substing starting position - ");
    scanf("%d", &start);
    start--;
    printf("Substring Length - ");
    scanf("%d", &length);
    int j = 0;
    char cpstr[50];
    for (int i = start; i <= length + start; i++)
    {
        cpstr[j++] = str[i];
    }
    cpstr[j] = '\0';
    printf("%s\n", cpstr);
    return 0;
}