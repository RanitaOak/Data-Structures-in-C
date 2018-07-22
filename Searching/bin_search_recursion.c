#include<stdio.h>
#include<stdlib.h>

int bin_search(int lb, int ub, int mid, int n, int* ar)
{
	while(lb<=ub)
	{
	mid =  (lb+ub)/2;
	if(ar[mid]==n)
	{
		//printf("URRRI found");
		return 1;
	}

	else if(ar[mid]>n)
	{
		ub = mid - 1;
		bin_search(lb, ub, mid, n, ar);
	}
	else if(ar[mid]<n)
	{
		lb = mid + 1;
		bin_search(lb,ub,mid,n, ar);
	}
	}
	//printf("Bhai nei");
	return -1;
}

int main()
{
	int n, i, mid, l_l=0, u_l, flag = 0, item;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for(i=0; i<n; i++)
	{
		printf("Enter the %d position", i);
		scanf("%d", &arr[i]);
	}
	printf("Enter the item to be searched");
	scanf("%d", &item);
	u_l = n;
	int m = bin_search(l_l,u_l,mid, item, arr);
	if(m==1)
		printf("Found");
	else
		printf("Not found");
	return 0;
}
 