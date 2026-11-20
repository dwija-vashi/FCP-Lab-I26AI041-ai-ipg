#include <stdio.h>
int maximum(int a[], int n)
{
    int i, max;
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int main()
{
    int a[100], n, i, result;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
		scanf("%d", &a[i]);
	}
    result=maximum(a,n);
    printf("Maximum= %d", result);
    return 0;
}
