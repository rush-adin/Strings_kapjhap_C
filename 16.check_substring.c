#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string - ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the substring - ");
    char substr[50];
    scanf("%[^\n]", substr);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == substr[j])
        {
            int flag = 0;

            for (int temp = i; substr[j] != '\0'; j++)
            {
                if (substr[j] == str[temp])
                {
                    temp++;
                }
                else
                {
                    j = 0;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("Substring Exists\n");
                return 0;
            }
        }
    }
    printf("Substring doesnt exist\n");
    return 0;
}