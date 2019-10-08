#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX];
int top=-1;


void push(int item)
{
    if(top==MAX-1)
    {
            printf(“Stack is full”);
    }
    else
    {
        stack[++top]=item;
    }
}
void pop()
{
    int temp;
    if(top==-1)
    {
        printf(“Stack is empty”);
    }
    else
    {
        printf(“%d”,stack[top]);
        temp=stack[top--];
        free(temp);
    }
}
void disp()
{
    int i;
    for(i=top;i>-1;i--)
    {
        printf(“%d\t”,stack[i]);
    }
}
void main()
{
     int ch,item;
     for(;;)
    {
     printf(“Enter the choice:\n1.push\n2.pop\n3.display”);
     scanf(“%d”,&ch);
     switch(ch)
     {
     case 1:printf(“\nEnter element:\n”);
    
            scanf(“%d”,&item);
            push(item);
     
     case 3:      printf(“\nElements of stack are:\n”);
                disp();
                break;
     case 2:printf(“\nElement deleted is:\n”);
             pop();
             break;
     default:exit(0);
     }
}