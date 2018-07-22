#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node* next;
};
struct Node* node4=NULL;
void insert(struct Node** head, int item)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); // allocating a new node/block
	new_node->value = item;
	new_node->next = (*head);
	(*head) = new_node;

}
void display(struct Node* node)
{
	while(node!=NULL)
	{
		printf("->:%d", node->value);
		node=node->next;
	}
	printf("\n");
}
void alternate_entry(struct Node* node2,struct Node* node1,struct Node* node3)
{
	int i=0;
	while(i<6)
	{
		if(i%2==0)
		{
			if(node1!=NULL)
			{
				//printf("->:%d", node1->value);
				insert(&node3,node1->value);
				node1=node1->next;
				
			}
			//printf("\n");

		}
		else
		{
			if(node2!=NULL)
			{
				//printf("->:%d", node2->value);
				insert(&node3,node2->value);
				node2=node2->next;
			}
			//printf("\n");

		}
		i++;
	}
	display(node3);
}
	
void insert_above(struct Node** head,int item)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->value = item;
	new_node->next = NULL;
	//if(*head == NULL)
	//	*head = new_node; 

	struct Node* last = *head;
	while (last->next!= NULL)
	{
		last = last->next;

	}
	last->next= new_node;
}
void insert_after(struct Node* prev_node, int item)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	if(prev_node == NULL)
		printf("go away");

	new_node->value = item;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

}
/*int val_node1(struct Node* head)
{

	int val = head->value;
	head = head->next;
	return val;
}*/
int main()
{
	struct Node* node1 = NULL;
	printf("The 1st ll:\n");
	insert(&node1,1);
	display(node1);
	insert(&node1,2);
	display(node1);
	insert(&node1,3);
	display(node1);
	struct Node* node2 = NULL;
	printf("The 2nd ll:\n");
	insert(&node2,4);
	display(node2);
	insert(&node2,5);
	display(node2);
	insert(&node2,6);
	display(node2);
	printf("Display alternate entry function output:");
	
	//struct Node* node3 = NULL;
	alternate_entry(node1,node2,node4);
	display(node4);
/*	for (i=0;i<3;i++)
	{
		insert(&node3,val_node1)
	}*/
	return 0;
}
