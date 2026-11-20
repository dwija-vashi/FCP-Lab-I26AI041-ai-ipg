#include<stdio.h>
void exchange(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After interchange:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before interchange: a=%d , b=%d\n", a, b);
    exchange(a, b);
    return 0;
}
