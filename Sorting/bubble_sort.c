#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;	
	*a = *b;
	*b = temp;
	
}
void bubble(int* arr, int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(&arr[i],&arr[j]);//4, 1
			}
		}
	}
}

int main()
{
	int i,j,temp,n;
	printf("Enter the range of numbers:");
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

