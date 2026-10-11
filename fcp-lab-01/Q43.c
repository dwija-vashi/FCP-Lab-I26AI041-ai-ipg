#include<crtdefs.h>
int main()
{
	float sales, commission;
	printf("Enter sales: ");
	scanf("%f", &sales);
	
	if(sales<=500)
	{
		commission=sales*5/100;
	}
	if(sales>500 && sales<=2000)
	{
		commission=35+(sales-500)*10/100;
	}
	if(sales>2000 && sales<=5000)
	{
		commission=185+(sales-2000)*12/100;
	}
	if(sales>5000)
	{
		commission=sales*12.5/100;
	}
	printf("commission for given sales=Rs. %.2f", commission);
	return 0;
}
