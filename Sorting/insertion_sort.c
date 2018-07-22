#include<stdio.h>
#include<stdlib.h>

void display(int* arr, int n)
{
	int i;
	//printf("The sorted elements:");
	for(i=0;i<n;i++)
		printf("%d", arr[i]);
	printf("\n");
}

void insertionSort(int* ar, int n)
{
	int key,i,j;
	for (i =1;i<n;i++)
	{
		key = ar[i];
		j = i-1;

		while(ar[j] > key && j>=0)
		{
			ar[j+1] =ar[j];
			j = j-1;
		}
		ar[j+1] = key;
		display(ar,n);

	}
}


int main()
{
	int n, i;
	printf("Enter size of the array");
	scanf("%d", &n);
	int* arr = (int*)malloc(n* sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	insertionSort(arr,n);
	display(arr,n);
	return 0;
}