#include<stdio.h>
void armstrong(int n)
{
	int q, sum=0, temp;
	temp=n;
	while(n!=0)
	{
		q=n%10;
		sum=sum+q*q*q;
		n=n/10;
	}
	if(temp==sum)
		printf("Number is an armstrong number");
	else
		printf("Number is not an armstrong number");
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	armstrong(n);
	return 0;
}
