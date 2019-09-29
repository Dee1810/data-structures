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


node * del_pos(int pos,node *head)
{
	if(head==NULL||pos<1)
	{
		printf("Invalid position\n");
		return head;
	}
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
	node *head=NULL,*ptr,*first=NULL,*second=NULL;
	for(;;)
	{
		printf("\nEnter the choice\n1.Insert\n2.Delete at any position\n3.Display\n4.Search\n5.Exit\n");
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
            case 5:exit(0);
            default:exit(0);

		}

	}
}

