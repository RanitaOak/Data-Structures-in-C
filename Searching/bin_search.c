#include<stdio.h>
#include<stdlib.h>

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
	
	while(l_l <= u_l)
	{
		mid = (l_l + u_l)/2;
		
		//printf("I am in %d",arr[mid]);
		if(item == arr[mid])
		{
			flag = 1;
			break;
		}
		else if(item < arr[mid])
			u_l = mid +1;
		else
			l_l = mid -1;
	}
	if(flag == 1)
		printf("Found");
	else
		printf("Nei bhai");

}
//time complexity is O(log 2 N)
// divide and conquer algo 