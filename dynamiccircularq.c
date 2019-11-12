#include<stdio.h>
#include<stdlib.h>
struct Queue
{
  int f,r,count;
  int capacity;
  int *a;
 };
 
typedef struct Queue Q;
Q * create(int capacity)
{
 Q *q=(Q *)malloc(sizeof(Q)); 
  if(!q)
    return NULL;
  q->f=0;
  q->r=-1;
  q->capacity=capacity;
  q->count=0;
  q->a=(int *)malloc(q->capacity*sizeof(int));
  
  return q;
}

void push(Q *q,int item)
{
   if(q->count==q->capacity)
   {
     printf("\nQueue is full");
   }
   else
   {
   q->r=(q->r+1)%q->capacity;
   q->a[q->r]=item;
   q->count++;
   printf("\nElement pushed\n");
   }
   
  
}

void pop(Q *q)
{ 
   
  
  if(q->count==0)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement popped is %d",q->a[q->f]);
  }
   q->f=(q->f+1)%q->capacity;
   q->count--;
  
}
void display(Q * q)
{
  int i;
  if(q->count==0)
  {
    printf("Queue is empty\n");
  }
  else
  {
    for(i=0;i<q->count;i++)
    {
      printf("%d\t",q->a[i]);
    }
  }
}
void main()
{
  int ch,item,cap;
  printf("Enter the maximum size:");
  scanf("%d",&cap);
  Q *q=create(cap);
  for(;;)
  {  
    printf("\nEnter the choice\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("\nEnter the element to be pushed\n");
           scanf("%d",&item);
           push(q,item);
           break;
     case 2:pop(q);
     
            break;
     case 3:display(q);
            break;
     default:exit(0);
    }
  }
}
