#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the String - ");
    int countA = 0, countD = 0, countS = 0;
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for (int i = 0; str[i] != '\n'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            countD++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            countA++;
        else if (str[i] == ' ')
            ; // skips spaces
        else
            countS++;
    }

    printf("Total Alphabets = %d\n", countA);
    printf("Total Digits = %d\n", countD);
    printf("Total Special Characters = %d\n", countS);

    return 0;
}