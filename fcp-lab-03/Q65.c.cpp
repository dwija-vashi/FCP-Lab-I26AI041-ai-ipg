#include<stdio.h>
int prime(int n)
{
	int count=0, i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		return 1;
	else
		return 0;
}
int main()
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(prime(n)==1)
		printf("Number is prime");
	else
		printf("Number is not prime");
	return 0;	
}

