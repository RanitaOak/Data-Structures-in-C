#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// stack struck
//create stack
//is full
//is empty
//  check for operator
// return prec
// convert
// check operand
int cap;

struct Stack
{
	int top;
	int* arr;
};
struct Stack* sta;

struct Stack* create_stack(int cap)
{
	struct Stack* sta = (struct Stack*)malloc(sizeof(struct Stack));
	sta->top = -1;
	sta->arr = (int*)malloc(cap * sizeof(int));
	return sta;
}

int is_full()
{
	if(sta->top == cap - 1)
	return 999;
}

int is_empty()
{
	if(sta->top == -1)
		return 1;
	else
		return 0;
}

void push(char item)
{

	sta->arr[++sta->top] = item;
}

char pop()
{
	if(!is_empty())
	{
		char temp = sta->arr[sta->top--];
		return temp;
	}
	//return -1;
}		


int prec(char ch)
{
	switch(ch)
	{
		case '+':
		case'-':
		return 2;
		break;

		case '*':
		case'/':
		return 3;
		break;

		case '^':
		return 4;
		break;

		case '(':
		case ')':
		return 1;
		break;

		

	}
}

int is_operand(char item)
{

	return (item >= 'a'&& item <='z');
}

int convert(char* expr)
{	

    char expr2[20];
	int i,j,k=0;
    sta = create_stack(strlen(expr));
	for (i=0;i<strlen(expr);++i)
	{
		if(is_operand(expr[i]))
			expr2[k++] = expr[i];

		else if(expr[i]== '(')
			push(expr[i]);

		else if(expr[i]==')')
		{
			while(!is_empty() && (sta->arr[sta->top]!= '('))
				expr2[k++] = pop();
			if (!is_empty() && (sta->arr[sta->top]== '('))
				//return -1; // invalid expression			 
			//else
				pop();
		}
		else
		{
			//printf("operator found yay!!");
			while(!is_empty()  && prec(expr[i]) <= prec((sta->arr[sta->top])))	
			//{	
				//char temp2 = pop();
				//expr2[k++] = temp2;
				expr2[k++]=pop();
			//}

			push(expr[i]);
		}
		
	}
	while(!is_empty())
		expr2[k++]= pop();
		printf("%s",expr2);
}

int main()
{
	char expr[] = "a+b*(c^d-e)^(f+g*h)-i";
	
	convert(expr);
	return 0;
}