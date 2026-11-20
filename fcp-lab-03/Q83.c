#include<stdio.h>
int main()
{
    char str[100], temp;
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; str[j+1] != '\0'; j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("Sorted string = %s", str);
    return 0;
}

