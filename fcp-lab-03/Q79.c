#include<stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
        }
    }

    printf("Number of vowels = %d", count);

    return 0;
}

