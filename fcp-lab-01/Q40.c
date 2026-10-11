#include<stdio.h>
int main()
{
	int n, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n>=0)
	{
		sum=sum+n;
		printf("Enter a number: ");
		scanf("%d", &n);
	}
	printf("Sum=%d", sum);
	return 0;
}
