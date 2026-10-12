#include<stdio.h>
int main()
{
	int a[10], pos=0, neg=0, zero=0, i;
	printf("Enter the array elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
			pos++;
		else if(a[i]<0)
			neg++;
		else
			zero++;
	}
	printf("Number of positive integers=%d\n", pos);
	printf("Number of negative integers=%d\n", neg);
	printf("Number of zero integers=%d", zero);
	return 0;
}
