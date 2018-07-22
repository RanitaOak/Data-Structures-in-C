#include<stdio.h>
#include<stdlib.h>

int fact(int n,int f)
{
	if (n==0)
		return f;
	f = f * n;
	return fact(n-1,f);
}
int fact1(int n)
{
	if(n==1)
		return 1;
	return (n + fact1(n-1));
}
int main()
{
	int n;
	printf("Enter the number of inputs");
	scanf("%d", &n);
	int f = fact1(n);
	printf("The factorial of %d is : %d",n,f);
}
