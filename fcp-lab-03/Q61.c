#include<stdio.h>
void palindrome(int n)
{
	int q, rev=0, temp;
	temp=n;
	while(n!=0)
	{
		q=n%10;
		rev=rev*10+q;
		n=n/10;
	}
	if(temp==rev)
		printf("Number is a palindrome");
	else
		printf("Number is not a palindrome");
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	palindrome(n);
	return 0;
}
