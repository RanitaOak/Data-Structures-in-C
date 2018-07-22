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
	return new_node ;
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
	printf("Values are:\n");
	while(node != NULL)
	{
		printf("%d <-", node->value);
		node = node->next;
	}
	printf("\n");
}

void del_head(struct Node** head)
{
	struct Node* current = *head;
	*head = current->next;
	return;
}

void del_tail(struct Node** head)
{
	struct Node* last_node = *head;
	while(last_node->next != NULL)
	{
		if((last_node->next)->next == NULL)
		{
			last_node->next = (last_node->next)->next;
			return;
		}
		else
			last_node = last_node->next;
	}

}

void del_any(struct Node** head, int key)
{
	struct Node* current = *head;
	struct Node* prev_node;
	if(current->value == key)
	{
		*head = current->next;
		return;
	} 
	while((current->next) != NULL)
	{
		if((current->next)->value == key)
		{
			current->next = (current->next)->next;
			return;
		}
		else
		{
			prev_node= current;
			current = current->next;
		}
		prev_node->next = current->next;
	}
}


 int main()
 {
 	int ch,item,key;
 	struct Node* node = NULL;
 	
 	while(1)
 	{
 		printf("Enter the choice: 1. insert 2. delete head 3. delete tail 4. delete middle 5. display\n");
 		scanf("%d", &ch);
 		switch(ch)
 		{
 			case 1:
 				printf("Enter the item\n");
 				scanf("%d", &item);
 				insert(&node, item);
 				break;

 			case 2:
 				del_head(&node);
 				break;

 			case 3:
 				del_tail(&node);
 				break;

 			case 4:
 				printf("Enter the key to be deleted:");
 				scanf("%d",&key);
 				del_any(&node,key);
 				break;

 			case 5:
 				display(node);
 				break;

 			default:
 				exit(0);
 		}
 	}
 	return 0;
}