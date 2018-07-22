#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node* next;
};

//struct Node* node4=NULL;
void insert(struct Node** head, int item)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); // allocating a new node/block
	new_node->value = item;
	new_node->next = (*head);
	(*head) = new_node;

}

void element(struct Node** node, int n )
{
	int r;
	while(n!=0)
	{
		r = n%10;
		insert(&(*node),r);
		n = n/10;

	}
}
void reverse(struct Node** head)
{
	struct Node* current_node = *head;
	struct Node* next_node = NULL;
	struct Node* prev_node = NULL;

	//struct Node* new_node = ;
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
	while(node!=NULL)
	{
		printf("Value is:%d \n", node->value);
		node=node->next;
	}
	printf("\n");
}
void add( struct Node* node1, struct Node* node2, struct Node* node3)
{
	int sum=0;
	while(node1 != NULL && node2 != NULL)
	{
		sum= node1->value + node2->value ;
		//printf("addition is %d", add);
		insert(&node3, sum);
		node1 = node1->next;
		node2 = node2->next;
	}
	reverse(&node3);
	display(node3);
	
}

int main()
{
	int item, ch;
	struct Node* node1 = NULL;
	struct Node* node2 = NULL;
	struct Node* node3 = NULL;


	while(1)
	{
		printf("Enter the choice 1. insert 1st node 2. insert 2nd node 3. addition\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("Enter the item to be inserted");
				scanf("%d", &item);
				element(&node1,item);
				display(node1);
				break;

			case 2:
				printf("Enter the item to be inserted");
				scanf("%d", &item);
				element(&node2,item);
				display(node2);
				break;

			case 3: 
				add(node1, node2, node3);
				break;

			default:
				exit(0);

		}
	}
	return 0;
}
