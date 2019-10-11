#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *link;
	
};
typedef struct Node node;

node * getnode()
{
	node *x;
	x=(node *)malloc(sizeof(node));
	if(x==NULL)
	{
		printf("Memory not available...\n");
		exit(0);
	}
	return x;

}

node * insert(int item,node *head)
{
	node *newnode;
	newnode=getnode();
	newnode->data=item;
	newnode->link=NULL;
	if(head==NULL)
	{
	 head=newnode;
	}

	else
	{
	  node *cur,*prev;
	  cur=head;
	  prev=NULL;
	  while(cur!=NULL&&item>cur->data)
	  {
	    prev=cur;
	    cur=cur->link;
	  }
	  if(prev==NULL)
	  {
	    prev=newnode;
	     head=newnode;
	  }
	  else
	  {
	  prev->link=newnode;
	 
	  }
	  newnode->link=cur;
	}
	printf("Node inserted\n");
	return head;
}
node * ins_front(node *head)
{ int i,n;
  printf("Enter the number of nodes:\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the element of ordered list in ascending order:\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=a[i];
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
    node *cur=head;
    while(cur->link!=NULL)
    {
      cur=cur->link;
    }
    cur->link=temp;
  
    }
  
  }
    return head;
  }
node * ins_rear(node *head)
{ int i,n;
  printf("Enter the number of nodes:\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the element of ordered list in desecnding order:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=a[i];
    temp->link=head;
    head=temp;
    }
    return head;
  }

node * merge(node *head1,node *head2,node *head)
{
  int i,j,k,n1,n2;
  printf("Enter the number of nodes of first list:\n");
  scanf("%d",&n1);
  int a[n1];
  printf("Enter the elements of ordered list in ascending order:\n");
   for(i=0;i<n1;i++)
   scanf("%d",&a[i]);
     for(i=0;i<n1;i++)
  {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=a[i];
    if(head1==NULL)
    {
        head1=temp;
    }
    else
    {
    node *cur=head1;
    while(cur->link!=NULL)
    {
      cur=cur->link;
    }
    cur->link=temp;
  
    }
  
  }
   

  printf("Enter the number of nodes:\n");
  scanf("%d",&n2);
  int b[n2];
  printf("Enter the element of ordered list in ascending order:\n");
  for(i=0;i<n2;i++)
   scanf("%d",&b[i]);
     for(i=0;i<n2;i++)
  {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=b[i];
    if(head2==NULL)
    {
        head2=temp;
    }
    else
    {
    node *cur=head2;
    while(cur->link!=NULL)
    {
      cur=cur->link;
    }
    cur->link=temp;
  
    }
  
  }
   int c[n1+n2];
   i=0;j=0;k=0;
   while(i<n1&&j<n2)
   {
    if(a[i]<b[j])
    {
      c[k++]=a[i++];
    }
    else
    {
      c[k++]=b[j++];
    }
   }
   while(i<n1)
  {
  c[k++]=a[i++];
  }
  while(j<n2)
  {
  c[k++]=b[j++];
  }
    for(i=0;i<n1+n2;i++)
  {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=c[i];
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
    node *cur=head;
    while(cur->link!=NULL)
    {
      cur=cur->link;
    }
    cur->link=temp;
  
    }
  
  }
  printf("After merging:\n");
  display(head);
  return head;
}
    
node * del_pos(int pos,node *head)
{
	if(head==NULL||pos<1)
	{
		printf("Invalid position\n");
		return head;
	}
	if(pos==1)
	{
	  printf("%d deleted at position 1\n",head->data);
	  head=head->link;
	  }
	else
	{
	int count=0;
	node *prev,*cur;
	prev=NULL;
	cur=head;
	while(cur!=NULL)
    {
    	count++;
    	if(pos==count)
    		break;
    	prev=cur;
    	cur=cur->link;
    }
    if(pos==count)
    {
    	prev->link=cur->link;
    	printf("%d at %d position deleted\n",cur->data,pos);
    	free(cur);
    }
    }
    return head;
}



void search(int key,node *head)
{
	if(head==NULL)
	{
		printf("List is empty\n");

	}
	else
	{
		node *temp=head;
		while(temp!=NULL)
		{
			if(temp->data==key)break;
			temp=temp->link;
		}
		if(temp!=NULL)
		{
			printf("Key element is found\n");
		}
		else{
			printf("Key element is not found\n");
		}

		
	}
}

void display(node *head)
{
	node *temp=head;

	if(head==NULL)
	{
		printf("List is empty\n");

	}
	else
	{       printf("\nList contains:\n");
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}


void main()
{
	int ch,item,key,pos,n1,n2;
	node *head=NULL,*ptr,*first=NULL,*second=NULL,*head1=NULL,*head2=NULL;
	for(;;)
	{
		printf("\nEnter the choice\n1.Insert\n2.Delete at any position\n3.Display\n4.Search\n5.Insert from rear\n6.insert from front\n7.Merge\n");
		scanf("%d",&ch);
		switch(ch)
		{
	    case 1:printf("Enter the item to be inserted:\n");
                   scanf("%d",&item);
                   head=insert(item,head);
                   break;
            case 2:printf("Enter the position\n");
                   scanf("%d",&pos);
                   head=del_pos(pos,head);
                   break;
            case 3:display(head);
                   break;
            case 4:printf("Enter the key element:\n");
                   scanf("%d",&key);
                   search(key,head);
                   break;
            case 5:head=NULL;
                   head=ins_rear(head);
                   break;
            case 6:head=NULL;
                   head=ins_front(head);
                   break;
            case 7:head=NULL;
                   head=merge(head1,head2,head);
                   break;
            case 8:exit(0);
            default:exit(0);

		}

	}
}

