#include<crtdefs.h>
int main()
{
	float ciu, rfc;
	printf("Enter consumption in unit: ");
	scanf("%f", &ciu);
	
	if(ciu>=0 && ciu<=200)
	{
		rfc=ciu*0.50;
	}
	if(ciu>=201 && ciu<=400)
	{
		rfc=100+(ciu-200)*0.65;
	}
	if(ciu>=401 && ciu<=600)
	{
		rfc=230+(ciu-400)*0.80;
	}
	if(ciu>600)
	{
		rfc=425+(ciu-600)*1.25;
	}
	printf("Rate for charge= Rs. %.2f", rfc);
	return 0;
}
