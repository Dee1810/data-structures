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

void insert(Q *q,int item)
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
   printf("\nElement inserted\n");
   }
   
  
}

void delete(Q *q)
{ 
 
  if(q->count==0)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement deleted is %d",q->a[q->f]);
  
   q->f=(q->f+1)%q->capacity;
   q->count--;
   }
  
}

void display(Q * q)
{int i;
  if (q->count==0) 
    { 
        printf("\nQueue is Empty"); 
        return; 
    } 
    printf("\nElements in Circular Queue are:\n"); 
    if (q->r>=q->f) 
    { 
        for (i = q->f; i <= q->r; i++) 
            printf("%d\n",q->a[i]); 
    } 
    else
    { 
        for (i = q->f; i < q->capacity; i++) 
            printf("%d\n", q->a[i]); 
  
        for (i = 0; i <= q->r; i++) 
            printf("%d\n", q->a[i]); 
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
     case 1:printf("\nEnter the element to be inserted\n");
           scanf("%d",&item);
           insert(q,item);
           break;
     case 2:delete(q);
     
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
4

Element inserted

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
3

Elements in Circular Queue are:
2
3
4

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter the element to be inserted
5

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

Elements in Circular Queue are:
3
4

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
3

Elements in Circular Queue are:
3
4
5

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
1

Enter the element to be inserted
6

Element inserted

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
3

Elements in Circular Queue are:
4
5
6

Enter the choice
1.Enqueue
2.Dequeue
3.Display
4.Exit
4
