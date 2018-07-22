#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int value;
	struct Node* next;

};

struct Node* create_node()
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	return new_node;
}

void insert(struct Node** head,int item)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->value = item;
	new_node->next = *head;
	*head = new_node;
}

void display(struct Node* node)
{
	printf("Values are:");
	while(node!= NULL)
	{
		printf("%d <-", node->value);
		node = node->next;
	}
	printf("\n");
}

void del(struct Node** head,int key)
{
	struct Node* current = *head;
	struct Node* prev_node;
	if(current->value == key)
	{
		*head = current->next;
		return;
	} 
	while(current->next !=NULL )
	{
		if((current->next)->value == key) 
		{
			current->next  = (current->next)->next;
			return;
		}
		else
		{
			prev_node = current;
			current = current->next;
		}
	}
	prev_node->next = current->next;
	//free(current);
}

int main()
{
	struct Node* node = NULL;
	insert(&node,3);
	insert(&node,5);
	insert(&node,6);
	insert(&node,7);
	insert(&node,8);
	display(node);
	del(&node,6);
	display(node);
	//del(&node, 8);
	//display(node);
}


