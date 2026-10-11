#include<crtdefs.h>
int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
    	}
	}

    if(count == 2)
    {
        printf("Prime Number.");
    }
    else if(count==1)
    {
        printf("Unique number (1).");
    }
    else
    {
        printf("Composite number.");
    }
    return 0;
}
