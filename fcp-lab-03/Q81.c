#include<stdio.h>
int main()
{
    char str[200];
    int i, lower=0, upper=0, digit=0, special=0;
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
        else if(str[i] != ' ' && str[i] != '\n')
            special++;
    }
    printf("Lowercase = %d", lower);
    printf("\nUppercase = %d", upper);
    printf("\nDigits = %d", digit);
    printf("\nSpecial symbols = %d", special);
    return 0;
}

