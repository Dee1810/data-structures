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

node * ins_beg(int item,node *head)
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
		newnode->link=head;
		head=newnode;
	}
	return head;
}

node * ins_rear(int item,node  *head)
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
		node *temp;
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=newnode;
	}
	return head;
}

node * ins_pos(int item,int pos,node *head)
{
	int count=0;

	if(head==NULL||pos<1)
	{
		printf("Invalid position\n");
		return head;
	}
	node *newnode,*cur,*prev;
	newnode=getnode();
	newnode->data=item;
	newnode->link=NULL;
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
    if(cur!=NULL)
    {
    	prev->link=newnode;
    	newnode->link=cur;
    }
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
    if(cur!=NULL)
    {
    	prev->link=cur->link;
    	printf("%d at %d position deleted\n",cur->data,pos);
    	free(cur);
    }
    return head;
}

void reverse(node *head)
{
	int val;
	node *temp=head;
	if(head==NULL)
	{
	printf("List is empty\n");
	}
	else
	{ 
       val=temp->data;
       reverse(temp->link);
       printf("%d\n",val);
	}
}

node * concate(node *first,node *sec)
{
	/*if(first==NULL)
		return sec;
	if(sec==NULL)
		return first;

	node *temp;
	temp=first;
	while(temp!=NULL)
	{
		temp=temp->link;
	}
	temp->link=sec;
	return temp;*/
       if(first!=NULL&&sec!=NULL)
       {
         if(first->link==NULL)
         {
           first->link=sec;
         }
         else
         {concate(first->link,sec);}
         
       
       }
       else
       {printf("Either First or second list is empty\n");}
       return first;
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
	{       printf("\n\n\n");
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
		printf("Enter the choice\n1.Insert at front\n2.Insert at rear\n3.Insert at any position\n4.Delete at any position\n5.Display\n6.Reverse\n7.Concatenation\n8.Search\n");
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
                   printf("Enter the position\n");
                   scanf("%d",&pos);
                   head=ins_pos(item,pos,head);
                   break;
            case 4:printf("Enter the position\n");
                   scanf("%d",&pos);
                   head=del_pos(pos,head);
                   break;
            case 5:display(head);
                   break;
            case 6:reverse(head);
                   break;
            case 7:printf("Enter the size of first node:\n");
                   scanf("%d",&n1);
                   if(n1>0)
                   {printf("Enter the elements:");
                   for (int i = 0; i < n1; ++i)
                   {   scanf("%d",&item);
                   	  first=ins_rear(item,first);
                   }}
                   printf("Enter the size of second node:\n");
                   scanf("%d",&n2);
                   if(n2>0)
                   {printf("Enter the elements:");
                   for (int i = 0; i < n2; ++i)
                   {
                   	  scanf("%d",&item);
                   	  second=ins_rear(item,second);
                   }}

                   ptr=concate(first,second);
                   if(first!=NULL&&second!=NULL)
                   display(ptr);
                   
                   break;
            case 8:printf("Enter the key element:\n");
                   scanf("%d",&key);
                   search(key,head);
                   break;
            default:exit(0);

		}

	}
}
