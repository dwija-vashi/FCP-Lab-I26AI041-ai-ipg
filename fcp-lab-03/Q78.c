#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Character is present");
    else
        printf("Character is not present");
    return 0;
}

