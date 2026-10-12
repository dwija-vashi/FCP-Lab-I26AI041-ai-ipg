#include<stdio.h>
int main()
{
	int a[10], even=0, odd=0, i;
	printf("Enter the array elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("Number of even elements=%d\n", even);
	printf("Number of odd elements=%d", odd);
	return 0;
}
