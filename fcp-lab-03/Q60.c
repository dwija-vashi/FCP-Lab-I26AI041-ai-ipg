#include<stdio.h>
void evenorodd(int n)
{
	if(n%2==0)
		printf("Number is even");
	else
		printf("Number is odd");
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	evenorodd(n);
	return 0;
}
