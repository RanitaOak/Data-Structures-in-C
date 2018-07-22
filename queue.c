#include<stdio.h>
#include<stdlib.h>
int cap; //global declaration

// structure creation
struct Queue
{
	int front,rear;
	int *arr;
};

// object creation
struct Queue* create_queue(int cap)
{
	struct Queue* que=(struct Queue*)malloc(sizeOf(struct Queue*));
	que->front=-1;
	que->rear=-1;
	que->arr=(int*)malloc(cap*sizeOf(int));
}

//to check whether queue is full
int qOverflow(struct Queue* que)
{
	if(rear==cap-1)
	{
		printf("Queue overflows")
		return 999;
	}
}

//to check whether queue is empty
int qUnderflow(struct Queue* que)
{
	if(front==-1 && rear==-1)
	{
		printf("Queue underflows")
		return 999;
	}
}

//to insert an element in a queue
void insert(struct Queue* que, int item)
{
	if(qOverflow(que)==999)
		return 0;
	else
		que->front=0;
		que->rear=0;
		que->arr[que->rear++]=item;
		printf("the rear changes to %d", que->rear);
}

//to delete an element from a queue
void delete(struct Queue* que)
{
	if(qUnderflow(que)==999)
		return 0;
	else
		int value=que->arr[que->front];
		que->front++;
}

// display queue
void display()
{
	int i;
	for(i=0;i<que->arr;i++)
		printf("the elements of queue are%d", que->arr[i]);
}

// main function
int main()
{
	int main()
{
	int item1,ch;
	printf("Enter the no of element of the stack:");
	scanf("%d",&cap);
	struct Queur* que = create_queue(cap);
	
	while (1)
	{
	printf("\n Enter your choice ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the element to be inserted:");
			scanf("%d",&item1);
			insert(que,item1);
			break;

		case 2:
			delete(que);
			break;

		case 3:
			display(que);

		default:
			printf("Wrong input");
			exit(0);
	}

	}
}


}
}
