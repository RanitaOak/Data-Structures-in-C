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
int is_present(struct Node* node, int x)
{
	//display(node);
	//printf(" check value: %d",x);
	while(node!=NULL)
	{
		if(x == node->value)
			{
				//printf("Found");
				
				return 1;
			}
		else
		{
				
				node = node->next;
		}
	}
	return 0;
}


void intersect_ll(struct Node* node1, struct Node* node2, struct Node* node3)
{
	while( node1 != NULL && node2 != NULL)
	{
		int temp = node2->value;
		if(is_present(node1,node2->value))
		{
			insert(&node3,temp);
			node2 = node2->next;
		}
		else
			node2 = node2->next;
	}

		//insert(&node3, node1->value );
		//node1 = node1->next;
		
	display(node3);
}


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
	insert(&node1,6);
	display(node1);

	struct Node* node2 = NULL;
	printf("The 2nd ll:\n");
	insert(&node2,3);
	display(node2);
	insert(&node2,2);
	display(node2);
	insert(&node2,6);
	display(node2);
	insert(&node2,8);
	display(node2);

	intersect_ll(node1, node2, node4);
	return 0;
}
