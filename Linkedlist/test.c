#include<stdio.h>
void changevalue(int *a)
{
	*a=*a+2;
	printf(" in the changevalue %u",&a);
	
} 
int main()
{
	int a = 10;
	changevalue(&a);
	printf("%d",a);
	printf("address of a in main function is %u",&a);
}
