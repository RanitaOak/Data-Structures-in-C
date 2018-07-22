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
	que->arr=(int*)malloc(cap * (sizeof(int)));
	return que;
}

void insert_front(int item)
{
	if(que->front==-1 && que->rear==-1)
	{
		que->front=0;
		que->rear=0;
	}
	//que->front-=1;
	que->arr[que->front]=item;
	que->front=que->front-1;
	printf("the inserted element at front end %d \n",que->arr[que->front]);
}


int delete_front()
{
	int value;
	if(que->front == -1 && que->rear==-1)
	{
		printf("Queue underflows");
		return -1;
	}
	else
		value = que->arr[que->front++];
		printf("the deleted element from the front end %d \n", value);
}

void insert_last(int item)
{
	if(que->rear==cap-1)
	{
		printf("Queue overflows");
		return;
	}
	else
	{
		if(que->front==-1)
			que->front=0;
		int temp1 =que->arr[que->rear]=item;
		que->rear+=1;
		printf("the inserted element at rear end %d \n",temp1);
	}
}

void delete_last()
{
	int value1=que->arr[que->rear--];
	printf("the deleted element from the rear end %d \n", value1);
}

void display()
{
	int i;
	printf("The elements of the queue are:");
	for(i=que->front;i<que->rear;i++)
		printf(" %d \n", que->arr[i]);
}

int main()
{
	int ch,item,item1;
	printf("Enter the size of a queue \n");
	scanf("%d",&cap);
	que=create_queue(cap);
	while(1)
	{
		printf("Enter choice 1.insertfront 2. delfront 3. insertrear 4. delrear 5. display \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter item to be inserted at front end \n");
				scanf("%d",&item);
				insert_front(item);
				break;

			case 2:
				delete_front();
				break;

			case 3:
				printf("Enter item to be inserted at rear end \n");
				scanf("%d",&item1);
				insert_last(item1);
				break;

			case 4:
				delete_last();
				break;

			case 5:
				display();
				break;

			default:
				exit(0);
			
		}
	}
	return 0;
}