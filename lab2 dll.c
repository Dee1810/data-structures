#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *prev,*next;
	
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

node * ins_beg(int item,node *head)
{
	node *newnode;
	newnode=getnode();
	newnode->data=item;
	newnode->prev=NULL;
	newnode->next=head;
	head=newnode;
	printf("Node inserted\n");
	return head;
}

node * ins_rear(int item,node  *head)
{
    node *newnode;
	newnode=getnode();
	newnode->data=item;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
	printf("Node inserted\n");
	return head;
}

node * ins_pos(int item,int pos,node *head)
{
	int count=1;
	node *newnode,*temp;
	newnode=getnode();
	newnode->data=item;
	newnode->next=NULL;
	newnode->prev=NULL;

	if(head==NULL||pos<1)
	{
		printf("Invalid position\n");
		return head;
	}
	if(pos==1)
	{
		head=ins_beg(item,head);
		
		return head;
	}
	
	temp=head;
    while(temp->next!=NULL)
    {
    	count++;
    	if(pos==count)
    		break;
    	temp=temp->next;
    	
    }
    if(pos==count)
    {
    	temp->prev->next=newnode;
    	newnode->prev=temp->prev;
    	newnode->next=temp;
    	temp->prev=newnode;
    	printf("Node inserted\n");
    }
    else
    {
      printf("Positon out of range\n");}
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
	  printf("%d at position 1 deleted\n",head->data);
	  head=head->next;
	  head->prev=NULL;
	}
	else
	{
	int count=0;
	node *temp;
	temp=head;
	while(temp!=NULL)
    {
    	count++;
    	if(pos==count)
    		break;
    	temp=temp->next;
    }
    if(pos==count)
    {
    	temp->prev->next=temp->next;
    	printf("%d at position %d deleted\n",temp->data,pos);
    	free(temp);
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
			temp=temp->next;
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
			temp=temp->next;
		}
	}
}


void main()
{
	int ch,item,key,pos;
	node *head=NULL;
	for(;;)
	{
		printf("\nEnter the choice\n1.Insert at front\n2.Insert at rear\n3.Insert at any position\n4.Delete at any position\n5.Display\n6.Search\n7.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
	    case 1:printf("Enter the item to be inserted:\n");
                   scanf("%d",&item);
                   head=ins_beg(item,head);
                   break;
            case 2:printf("Enter the item to be inserted:\n");
                   scanf("%d",&item);
                   head=ins_rear(item,head);
                   break;
            case 3:printf("Enter the item to be inserted:\n");
                   scanf("%d",&item);
                   printf("Enter the position:\n");
                   scanf("%d",&pos);
                   head=ins_pos(item,pos,head);
                   break;
            case 4:printf("Enter the position\n");
                   scanf("%d",&pos);
                   head=del_pos(pos,head);
                   break;
            case 5:display(head);
                   break;
           
            case 6:printf("Enter the key element:\n");
                   scanf("%d",&key);
                   search(key,head);
                   break;
            case 7:exit(0);
            default:exit(0);

		}

	}
}

