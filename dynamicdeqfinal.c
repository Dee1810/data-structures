//Deque

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
  q->f=-1;
  q->r=-1;
  q->capacity=capacity;
  q->a=(int *)malloc(q->capacity*sizeof(int));
  
  return q;
}

void insert_rear(Q *q,int item)
{
   if(q->r==(q->f+1)||(q->f==0&&q->r==q->capacity-1))
   {
     printf("\nQueue is full");
     return;
   }
   if(q->f==-1)
   {
     q->f=0;
     q->r=0;
   }
   else
   {
      if(q->r==q->capacity-1)
      q->r=0;
      else
      q->r++;
   }   
   q->a[q->r]=item;
   printf("\nElement inserted\n");
   
   
  
}

void delete_front(Q *q)
{ 
   
  
  if(q->f==-1)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement deleted is %d",q->a[q->f]);
  
   if(q->f==q->r)
         {
           q->f=-1;
           q->r=-1;
         }
         else{
         if(q->f==q->capacity-1)
         q->f=0;
         else
         q->f++;
         }
         
  
}
void insert_front(Q *q,int item)
{
   if(q->r==(q->f+1)||(q->f==0&&q->r==q->capacity-1))
   {
     printf("\nQueue is full");
     return;
   }
   if(q->f==-1)
   {
     q->f=0;
     q->r=0;
   }
   else
   {
      if(q->f==0)
      q->f=q->capacity-1;
      else
      q->f--;
   }   
   q->a[q->f]=item;
   printf("\nElement inserted\n");
   
}
void delete_rear(Q *q)
{ 
   
  
  if(q->f==-1)
  {
    printf("\nQueue is empty");
    
  }
  else
  {
   printf("\nElement deleted is %d",q->a[q->r]);
  
   if(q->f==q->r)
         {
           q->f=-1;
           q->r=-1;
         }
         else{
         if(q->r==0)
         q->r=q->capacity-1;
         else
         q->r--;
         }
         
  
}
void display(Q * q)
{int i;
  if (q->f==-1) 
    { 
        printf("\nQueue is Empty"); 
        return; 
    } 
    printf("\nElements in Queue are:\n"); 
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
    printf("\nEnter the choice\n1.Insert rear\n2.Delete front\n3.Display\n4.Insert front\n5.Delete rear\n6.Exit\n");
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
