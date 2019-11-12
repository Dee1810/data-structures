#include<stdio.h>
#include<stdlib.h>
struct Queue
{
  int f,r;
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
  q->a=(int *)malloc(q->capacity*sizeof(int));
  
  return q;
}

void insert_rear(Q *q,int item)
{
   if(q->r==(q->capacity-1))
   {
     printf("\nRear insertion is not possible");
   }
   else
   {
   q->a[++q->r]=item;
   printf("\nElement pushed\n");
   }
   
  
}

void delete_front(Q *q)
{ 
   
  
  if(q->f>q->r)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement popped is %d",q->a[q->f--]);
  }
   if(q->f>q->r)
         {
           q->f=0;
           q->r=-1;
         }
  
}
void insert_front(Q *q,int item)
{
  if(q->f==0&&q->r==-1)
  q->a[++q->r]=item;
  else if(q->f!=0)
  q->a[--q->f]=item;
  else
  printf("Front insertion not possible\n");
}
void delete_rear(Q *q)
{ 
   
  
  if(q->f>q->r)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement popped is %d",q->a[q->r--]);
  }
   if(q->f>q->r)
         {
           q->f=0;
           q->r=-1;
         }
  
}
void display(Q * q)
{
  int i;
  if(q->f>q->r)
  {
    printf("Queue is empty\n");
  }
  else
  {
    for(i=q->f;i<=q->r;i++)
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
    printf("\nEnter the choice\n1.Enqueue rear\n2.Dequeue front\n3.Display\n4.Enqueue front\n5.Dequeue rear\n5.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("\nEnter the element to be pushed\n");
           scanf("%d",&item);
           insert_rear(q,item);
           break;
     case 2:delete_front(q);
     
            break;
     case 3:display(q);
            break;
     case 4:printf("\nEnter the element to be pushed\n");
           scanf("%d",&item);
           insert_front(q,item);
           break;
     case 5:delete_rear(q);
     
            break;
     default:exit(0);
    }
  }
}

