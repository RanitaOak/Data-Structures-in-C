#include<stdio.h>
#include<stdlib.h>
int cap;

struct Queue
{
	int front;
	int rear;
	int* arr;
};
struct Queue* que;

struct Queue* create_queue(int cap)
{
	que = (struct Queue*)malloc(sizeof(struct Queue));
	que->front=-1;
	que->rear=-1;
	que->arr=(int*)malloc(cap * sizeof(int));
	return que;
}

void enqueue(int item)
{

	if(que->rear== cap-1)
	{
		printf(" Queue Overflow");
		
	}
	else
	{
		
		if(que->front == -1 && que->rear==-1)
		{
			que->front = 0;
			que->rear=0;
		}
		
		que->arr[que->rear] = item;
		que->rear = que->rear +1;
		
	}
}

void dequeue()
{
	if(que->front==-1 || que->rear < que->front)
		printf("Queue underflow");
	else
	{
		printf("The deleted element is %d",que->arr[que->front]);
		que->front = que->front +1;
	}
}

void display()
{
	int i;
	printf("The elements are: \n");
	for( i=que->front; i< que->rear; i++)
	{
		printf("%d \n ",que->arr[i]);
	}
}

int main()
{
	int n,ch;
	printf("Enter the size of queue:");
	scanf("%d",&cap);
	que = create_queue(cap);
	
	while(1)
	{
		printf("For 1.Inserting 2.Deleting 3. Display ");
		scanf("%d",&ch);
		if(ch==1)
		{
			int item;
			printf("Enter the item to be inserted:");
			scanf("%d",&item);
			printf("The item is %d",item);
			enqueue(item);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			exit(0);
		}
	}
	return 0;
}

insert_front()
{

}
insert_last()
delete_front()
delete_last()

