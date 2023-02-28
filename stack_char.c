#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct{
	int top;
	char item[MAX];
}stack;

int isEmpty(stack *p);
int isFull(stack *p);
void push(stack *p, char x);
void pop(stack *p);
void display(stack *p);

int isEmpty(stack *p){
	if(p->top == -1)
		return 1;
	else
		return 0;
}
int isFull(stack *p){
	if(p->top == MAX -1)
		return 1;
	else
		return 0;
}
void push(stack *p, char x){
	if(isFull(p))
		printf("Stack Overflow\n");
	else{
		p->item[++(p->top)] = x;
	}
}
void pop(stack *p){
	if(isEmpty(p))
		printf("Stack Underflow\n");
	else{
		char c = p->item[p->top];
		(p->top)--;
		printf("Popped: %c",c);
	}
}
void display(stack *p){
	for(int i = 0; i<= p->top; i++)
	{
		printf("%c", p->item[i]);
	}
	printf("\n");
}
int main(){
	int c;
	char x;
	stack s;
	s.top =-1;
	do{
	printf("Choose one of the option:\n 1)Push\n 2)Pop\n 3)Display\n 4)Exit\n");
	scanf("%d",&c);
	switch(c){
		case 1:
		{
		  printf("Enter character to be pushed:\n");
		  scanf("%c ",&x);
		  push(&s,x);
		  break;
		}
		case 2:
		{
			pop(&s);
			break;
		}
		case 3:
		{
			display(&s);
			break;
		}
		default: {
			printf("Invalid Input\n");
		   }
	}
}while(c != 0);
return 0;
}