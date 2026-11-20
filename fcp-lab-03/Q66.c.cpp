#include<stdio.h>
int fact(int n)
{
	int fact=1, i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int ncr(int n, int r)
{
	int ans;
	ans=fact(n)/(fact(r)*fact(n-r));
	return ans;
}
int main()
{
	int n, r, nCr;
	printf("Enter n and r: ");
	scanf("%d %d", &n, &r);
	
	nCr=ncr(n,r);
	printf("nCr=%d", nCr);
	return 0;
}
