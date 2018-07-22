#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node* next;
};

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
		printf("Value is:%d \n", node->value);
		node=node->next;
	}
	printf("\n");
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
int main()
{
	struct Node* node = NULL;
	insert(&node,2);
	display(node);
	insert(&node,4);
	display(node);
	insert(&node,8);
	display(node);
	insert(&node,6);
	display(node);
	insert_above(&node,10);
	display(node);
	insert(&node,12);
	display(node);
	insert_above(&node,14);
	display(node);
	insert_after(node->next,20);
	display(node);
	insert(&node,22);
	display(node);

	return 0;
}
