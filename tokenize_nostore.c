#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a String - ");
    fgets(str, sizeof(str), stdin);
    char token[100];
    int indx = 0;
    int no = 0;
    int not_empty = 0;
    char delims[10] = " ,.?!";

    for (int i = 0; str[i] != '\0'; i++)
    {
        int d = 0;
        int is_delim = 0;
        while (delims[d] != '\0')
        {
            if (str[i] == delims[d])
            {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (!is_delim)
        {
            token[indx++] = str[i];
            not_empty = 1;
        }
        else
        {
            token[indx] = '\0';
            if (not_empty)
                printf("Token %d - %s\n", ++no, token);
            indx = 0;
            not_empty = 0;
        }
    }
}