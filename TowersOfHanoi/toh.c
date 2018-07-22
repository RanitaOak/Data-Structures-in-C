#include<stdio.h>
void toh(char s,char a, char d, int n)
{
	if(n==0)
		printf("Banchodnaki?");
	if(n==1)
	{
		printf("From %c -> %c \n ",s,d);
	}
	else
	{
		toh(s,d,a,n-1);
		printf("From %c -> %c \n ",s,d );
		toh(a,s,d,n-1);
	}
}
int main()
{
	int n;
	printf("Enter the number of disks");
	scanf("%d", &n);
	char a = 'A';
	char b = 'B';
	char c = 'C';
	toh(a, b, c, n); 
}