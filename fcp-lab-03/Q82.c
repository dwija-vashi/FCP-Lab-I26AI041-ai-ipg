#include<stdio.h>
int main()
{
    char str[100];
    int i, ch = 0, words = 1;
    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        ch++;

        if(str[i] == ' ')
            words++;
    }

    printf("Total characters = %d", ch);
    printf("\nTotal words = %d", words);
    return 0;
}

