#include<stdio.h>
int main()
{
	int a[10], b[10], temp, i;
	printf("Enter array 1:");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter array 2:");
	for(i=0;i<10;i++)
	{
		scanf("%d", &b[i]);
	}
	printf("After swapping:\n");
	for(i=0;i<10;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("Array 1:");
	for(i=0;i<10;i++)
		printf("%d\n", a[i]);
	printf("Array 2:");
	for(i=0;i<10;i++)
		printf("%d\n", b[i]);
	return 0;
}
