#include<stdio.h>
#define MAX 5
#include<stdlib.h>
struct queue
{
   int f,r;
   int q[MAX];
};
void push(struct queue*s,int item)
{
  
      
    if(s->r==MAX-1)
    {
        printf("Queue is FULL\n");
    }
    else
    {
        //scanf("%d",&ele);
       // s->r=(s->r+1);
        s->q[++s->r]=item;
    }
}
void pop(struct queue*s)
{
     if(s->f>s->r)
     {
	 printf("Queue is Empty\n");  return;   
     }
     
     
         int item;
         printf("element popped is %d",s->q[s->f++]);
         //s->f=(s->f)+1;
         if(s->f>s->r)
         {
           s->f=0;
           s->r=-1;
         }
     
}
void display(struct queue*s)
{
     if(s->f>s->r)
     {
        printf("Empty");
        return;
     }
     int i;
     for(i=s->f;i<=s->r;i++)
     {
         printf("%d\n",s->q[i]);
     }
}
int main()
{
   struct queue *s;
   s->f=0;
   s->r=-1;
   int ch,item;
   for(;;)
   {
      printf("Enter your choice\n1.push\n2.pop\n3.display\n4.exit");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:scanf("%d",&item);
         push(s,item);
         	break;
         case 2:pop(s);
         	break;
         case 3:display(s);
         	break;
         default:printf("Invalid choice\n");
         	exit(0);
      }
    }
  return 0;
}
         
     
