#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    scanf("%s", &str1);

    printf("Enter second string: ");
    scanf("%s", &str2);

    printf("\nLength = %d", strlen(str1));

    strcpy(str3, str1);
    printf("\nCopied string = %s", str3);

    strcat(str1, str2);
    printf("\nConcatenated string = %s", str1);

    if(strcmp(str3, str2) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    strrev(str3);
    printf("\nReverse = %s", str3);
    return 0;
}

