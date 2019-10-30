#include<stdio.h>
#include<stdlib.h>
struct Stack
{
  int top;
  int capacity;
  int *a;
 };
 
typedef struct Stack stack;
stack * create(int capacity)
{
 stack *s=(stack *)malloc(sizeof(stack)); 
  if(!s)
    return NULL;
  s->top=-1;
  s->capacity=capacity;
  s->a=(int *)malloc(s->capacity*sizeof(int));
  
  return s;
}

void push(stack *s,int item)
{
   if(s->top==(s->capacity-1))
   {
     printf("\nStack is full");
   }
   else
   {
   s->a[++s->top]=item;
   printf("\nElement pushed\n");
   }
   
  
}

void pop(stack *s)
{ 
   
  
  if(s->top==-1)
  {
    printf("\nStack is empty");
    
  }
  else
  {
   printf("\nElement popped is %d",s->a[s->top--]);
  }
}
void display(stack * s)
{
  int i;
  if(s->top==-1)
  {
    printf("Stack is empty\n");
  }
  else
  {
    for(i=s->top;i>=0;i--)
    {
      printf("%d\t",s->a[i]);
    }
  }
}
void main()
{
  int ch,item,cap;
  printf("Enter the maximum size:");
  scanf("%d",&cap);
  stack *s=create(cap);
  for(;;)
  {  
    printf("\nEnter the choice\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("\nEnter the element to be pushed\n");
           scanf("%d",&item);
           push(s,item);
           break;
     case 2:pop(s);
     
            break;
     case 3:display(s);
            break;
     default:exit(0);
    }
  }
}
