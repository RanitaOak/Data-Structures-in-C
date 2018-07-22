#include<stdio.h>
#include<stdlib.h>

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
	struct Node* new_node = create_node();
	new_node->value = item;
	new_node->next = *head;
	*head = new_node ;

}

void reverse(struct Node** head)
{
	struct Node* current_node = *head;
	struct Node* next_node = NULL;
	struct Node* prev_node = NULL;

	struct Node* new_node = create_node();
	while(current_node != NULL)
	{	
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	*head = prev_node;

}
void display(struct Node* node)
{
	while(node!= NULL)
	{
		printf(" %d ->", node->value);
		node= node->next;
	}
}
int main()
{
	struct Node* head = NULL ;
	insert(&head,1);
	//display(head);
	insert(&head,2);
	//display(head);
	insert(&head,3);
	display(head);
	reverse(&head);
	display(head);
}

