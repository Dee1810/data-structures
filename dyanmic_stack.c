#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *link;
}*top=NULL;
 

void push(int item)
{
    struct stack *tmp=(struct stack *)malloc(sizeof(struct stack));
    tmp->data=item
    tmp->link=top;
    top=tmp;
}   
void pop()
{   
    struct stack *tmp=(struct stack *)malloc(sizeof(struct stack));
    if(top==NULL)
    printf(“\nStack is empty”);
    else
    {
        tmp=top;
        printf(“\nElement deleted is %d”,tmp->data);
        top=top->link;
        free(tmp);
    }
}
void disp()
{
    struct stack *temp;
    if(top==NULL)
    printf(“\nStack is empty”);
    else
    {
        temp=top;
        While(temp!=NULL)
        {
            printf(“%d\t”,temp->data);
            temp=qtemp->link;
        }
    }
 } 
 void main()
{
    int ch,item;
for(;;)
{
    printf(“Enter choice:”);
    scanf(“%d”,&ch);
    switch(ch)
    {
    case 1:printf(“\nEnter element:\n”);

        scanf(“%d”,&item);
        push(item);
        break;
    case 2:pop();break;
    
    case 3:printf(“\nElement of stack are:\n”);
           disp();
             break;
    
    default:exit(0);
}
}
}
 