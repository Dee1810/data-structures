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

void push(Q *q,int item)
{
   if(q->r==(q->capacity-1))
   {
     printf("\nQueue is full");
   }
   else
   {
   q->a[++q->r]=item;
   printf("\nElement pushed\n");
   }
   
  
}

void pop(Q *q)
{ 
   
  
  if(q->f>q->r)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement popped is %d",q->a[q->f++]);
  
   if(q->f>q->r)
         {
           q->f=0;
           q->r=-1;
         }
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
output:
Enter the maximum size:3

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter the element to be inserted
2

Element inserted

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter the element to be inserted
3

Element inserted

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter the element to be inserted
5

Element inserted

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter the element to be inserted
6

Queue is full
Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Element deleted is 2
Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
3
Queue contains:
3	5	
Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Element deleted is 3
Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
3
Queue contains:
5	
Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Element deleted is 5
Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
3
Queue is empty

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
