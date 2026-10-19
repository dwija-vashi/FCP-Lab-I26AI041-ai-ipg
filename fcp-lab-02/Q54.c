#include<stdio.h>
int main()
{
	int a[3][3], i, j, temp;
	printf("Enter the matrix elements: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Transpose of matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n", a[j][i]);
			
		}
	}
	return 0;
}
