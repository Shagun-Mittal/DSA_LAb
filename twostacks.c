#include <stdio.h>
#define SIZE 10
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
void push_stack1 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[++top1] = data;
  }
  else
  {
    printf ("Stack Full! \n");
  }
}
void push_stack2 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[--top2] = data; 
  }
  else
  {
    printf ("Stack Full!\n");
  }
}
void pop_stack1 ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack 1\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! \n");
  }
}
void pop_stack2 ()
{
  if (top2 < SIZE)
  {
    int popped_value = ar[top2++];
    printf ("%d is being popped from Stack 2\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! \n");
  }
}
void print_stack1 ()
{
  int i;
  for (i = top1; i >= 0; --i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
void print_stack2 ()
{
 int i;
  for (i = top2; i < SIZE; ++i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
int main()
{
  int ar[SIZE];
  int i,c;
  int ele;
  
do{
  printf("Enter a Choice:\n 1) Push in stack1\n 2) Push in stack 2\n 3) Pop in stack 1\n 4) Pop in stack 2 \n 5) Print stack 1 \n 6) Print stack 2\n");
  scanf("%d",&c);
  switch(c){
    case 1:{
      printf("Enter element to be pushed\n");
      scanf("%d",&ele);
      push_stack1 (ele);
      break;
    }
    case 2:{
      printf("Enter element to be pushed\n");
      scanf("%d",&ele);
      push_stack2 (ele);
      break;
    }
    case 3:{
      
      pop_stack1 ();
      break;
    }
    case 4:{
      
      pop_stack2 ();
      break;
    }
    case 5:{
      print_stack1 ();
      break;
    }
     case 6:{
      print_stack2 ();
      break;
    }
    default:
    printf("invalid choice");


  }}while( c!=0 );

return 0;
}