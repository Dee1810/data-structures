#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *link;
  };
  typedef struct Node node;
  node *head=NULL,*x,*y,*z;
  void create();
  void ins_at_beg();
  void ins_at_pos();
  void del_at_pos();
  void search();
  void display();
  void main()
  {
    int ch;
    for(;;)
{    printf("\n\nEnter the choice:\n\n1.Creation\n2.Insertion at the beginning\n3.Insertion at the given position\n4.Deletion at given position\n5.Search\n6.Display\n7.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:create();
              break;
      case 2:ins_at_beg();
      break;
      case 3:ins_at_pos();
      break;
      case 4:del_at_pos();
      break;
      case 5:search();
      break;
      case 6:display();
      break;
      default:exit(0);
    }      
 }
 }
 void create()
 {
   int c;
   x=(node *)malloc(sizeof(node));
   printf("\n Enter the data:");
   scanf("%d",&x->data);
   x->link=x;
   head=x;
   printf("\nDo you wish to continue:(press 1 to continue otherwise 0):\n");
   scanf("%d",&c);
   while(c!=0)
   {
     y=(node *)malloc(sizeof(node));
     printf("\n Enter the data:");
     scanf("%d",&y->data);
     x->link=y;
     y->link=head;
     x=y;
      printf("\nDo you wish to continue:(press 1 to continue otherwise 0):\n");
      scanf("%d",&c);
    }
    printf("\nCircular list is created.\n");
  }
void ins_at_beg()
{
  x=head;
  y=(node*)malloc(sizeof(node));
   printf("\nEnter the data:");
   scanf("%d",&y->data);
   while(x->link!=head)
   {
     x=x->link;
   }
  x->link=y;
  y->link=head;
  head=y;
  printf("\nInserted at first position.\n");
  
  }
  void ins_at_pos()
  {
   node *ptr;
   int c=1,pos,count=1;
    if(head==NULL)
   {
     printf("\nEmpty list\n");
     return;
    }
   else
   {
   y=(node *)malloc(sizeof(node));

   printf("\nEnter the data:");
   scanf("%d",&y->data);
   
   x=head;
   ptr=head;
   while(ptr->link!=head)
   {
     count++;
     ptr=ptr->link;
     }
     count++;
     if(pos>count)
     {
      printf("Out of range\n");
      return;
     }
     while(c<pos)
     {
     z=x;x=x->link;
     c++;
     }
     y->link=x;
     z->link=y;
     }
     printf("\nElement inserted.");
     }
  void del_at_pos()
  {
   if(head==NULL)
   {
    printf("\nEmpty list");
   }
   else
   {
    int c=1,pos;
    printf("\nEnter the position:\n");
   scanf("%d",&pos);
   x=head;
   while(c<pos)
     {
     y=x;x=x->link;
     c++;
     }
     y->link=x->link;
     free(x);
     printf("\nElement deleted.");
   }
   }
   void display()
   {
   if(head==NULL)
   {
    printf("\nEmpty list");
   }
   else
   { printf("\nList contains:\n");
    x=head;
    while(x->link!=head)
    {
      printf("%d\t",x->data);
      x=x->link;
     }
     printf("%d",x->data);
     }
     }
     void search()
     {
       int key,count=0,flag=0;
         if(head==NULL)
   {
    printf("\nEmpty list");
   }
       
     
   else{
   printf("\nEnter the key element: ");
       scanf("%d",&key);
   x=head;
   while(x->link!=head)
   {
     if(x->data==key)
     {
        flag=1;
        
       printf("\nElement found at %d position\n",count+1);
       break;
     }
     count++;
     x=x->link;
   }
   if(x->data==key)
     {
        flag=1;
        
       printf("\nElement found at %d position\n",count+1);
       
     }
     if(flag==0)
     {
     printf("\nNot found\n");
     }
   }
 }
   
   
   
    
      
   
  
     
     
   
 
