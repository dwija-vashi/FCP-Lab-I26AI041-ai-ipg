#include<stdio.h>
int main()
{
	int a[10], sum=0, i;
	printf("Enter the array elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of 10 elements= %d", sum);
	return 0;
}
