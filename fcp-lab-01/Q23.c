#include<crtdefs.h>
int main()
{
	int exp, i; 
	float base, power=1;
	printf("Enter base and exponent: ");
	scanf("%f %d", &base, &exp);
	
	for(i=1;i<=exp;i++)
	{
		power=power*base;
	}
	printf("Power=%.2f", power);
	
	return 0;
}
