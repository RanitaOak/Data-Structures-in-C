#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int* ar, int n)
{
	int i, j, min_pos;
	for(i=0; i<n; i++)
	{
		min_pos = i;
		for(j=i+1; j<n; j++)
		{
			if(ar[j]<ar[min_pos])
				min_pos = j;
		}
		swap(&ar[min_pos], &ar[i]);
	}
}

int main()
{
	int n,i;
	printf("Enter the size of the array");
	scanf("%d", &n);
	int* arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, n);
	printf("after sorting\n");
	for(i=0;i<n;i++)
		printf("%d", arr[i]);
	return 0;
}