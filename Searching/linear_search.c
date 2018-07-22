#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,m,flag=0;
	printf("Enter the no:");
	scanf("%d",&n);
	int *ar = (int*)malloc(n * sizeof(int));

	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number:",i);
		scanf("%d",&ar[i]);
	}
	printf("Enter the number to be searched:");
	scanf("%d",&m);

	for (i=0;i<n;i++)
	{
		if(m==ar[i])
		{
			flag = 1;
			break;
		}
		else
		flag = 0;	
	}
	if (flag==1)
		printf("Found");
	else
		printf("nei bhai");

}