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
int count(struct Node* node)
{	
	int c = 0;
	while(node != NULL)
	{
		c++;
		node = node->next;
	}
	//m = c/n;
	return c;
}
void display(struct Node* node)
{
	int c = 0, m,n=3;
	while(node!= NULL)
	{	
		c++;
		printf(" %d ->", node->value);
		//printf("%d\n", c);
		node= node->next;
	}
	m= c/n;
	//printf("%d\n",m );
}

void reverse(struct Node** head)
{
	struct Node* current_node = *head;
	struct Node* next_node = NULL;
	struct Node* prev_node = NULL;

	//struct Node* new_node = create_node();
	while(current_node != NULL)
	{	
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	*head = prev_node;

}
void reverse_slots( struct Node** head,int n )
{
	struct Node* current_node = *head;
	int m=3,i=0,j=0,k=0,r,c=0;
	struct Node* new_node1;
	m = count(*head)/n;
	r = count(*head)%n;
	while(i<(m))
	{
		j=0;
		while(j<n)
		{
			if(j==0)
			{
				new_node1 = (struct Node*)malloc(sizeof(struct Node));
				printf("The first inserted value is :" );
				display(new_node1);
				insert(&new_node1,current_node->value);
				display(new_node1);
				current_node = current_node->next;
			}
			else
			{
				
				insert(&new_node1,current_node->value);
				current_node = current_node->next;
				
			}
			j++;
		}
		printf("\nThe reverse is: \n");
		display(new_node1);
		i++;
	
	}
	while(i<(m+1))
	{
		while(k<r)
		{
					if(k==0)
					{
						new_node1 = (struct Node*)malloc(sizeof(struct Node));
						printf("The first inserted value is :" );
						display(new_node1);
						insert(&new_node1,current_node->value);
						display(new_node1);
						current_node = current_node->next;
				 	}
					else
					{
						
						insert(&new_node1,current_node->value);
						current_node = current_node->next;
						
					}
				
			k++;
		}
		printf("\nThe reverse is: \n");
		display(new_node1);
		i++;
	}
	}


int main()
{
	struct Node* head = NULL ;
	//int n,m,ch;
	//printf("Enter the number of ")
	insert(&head,1);
	//display(head);
	insert(&head,2);
	//display(head);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);
	insert(&head,6);
	insert(&head,7);
	insert(&head,8);
	insert(&head,9);
	insert(&head, 10);
	display(head);
	reverse_slots(&head,3);
	//m=/n
	//r 
	//display(head);
	//reverse(&head);
	//display(head);
	//add two numbers represented by linkedl
	//automation of this prog
	//
}

