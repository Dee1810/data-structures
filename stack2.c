#include<stdio.h>
 #include<stdlib.h>
 struct stack
   {
     int * a;
     int top;
     int maxSize;
   };
void initialize(struct stack * p, int maxSize);
void push(struct stack * p, int item);
void display(struct stack *p);
int pop(struct stack * p);


  int main()  
   {
     struct stack p;
     int data,ch, data1, m;
     printf("Enter the maximum size of the stack\n");
     scanf("%d",&m);
     initialize(&p,m);
     while(1)
       {
         
      printf("Choice 1 : Push\n");
      printf("Choice 2 : Pop\n");
      printf("Choice 3 : Display\n");
      printf("Any other choice : Exit\n");
     
         printf("Enter your choice\n");
         scanf("%d",&ch);

         switch(ch)
           {
              case 1:
              printf("Enter the element to be pushed\n");
              scanf("%d",&data);
              push(&p, data);
              break;

              case 2:
              data1 = pop(&p);
              if(data1 != -1000)
              printf("The popped element is %d\n",data1);
              break;

              case 3:
              printf("The contents of the stack are");
              display(&p);
              printf("\n");
              break;

              default:
              return 0;
           }
       }
    
    return 0;
  }


    void initialize(struct stack * p, int maxSize) 
     {
       p->top=-1;
       p->maxSize=maxSize;
     }

   void push(struct stack * p, int item) 
     {
       if (p->top == p->maxSize-1) 
         {
          printf("Stack is full\n");
          return;
         }
    p->a = (int *)malloc(sizeof(int));
    p->top++;
    p->a[p->top] =item;
   

   }

    void display(struct stack* p) 
     {
       struct stack *p1;
p1=p;       int n=0,i;
       for (i = p1->top ; i >= 0; i--)
        {
          printf("\n%d", p1->a[i]);

        }

      }

     int pop(struct stack * p) 
      {
        int num;
        if(p->top == -1)
         {
           printf("Stack is empty\n");
           return -1000;
         }
      num = p->a[p->top];
      p->top--;
      return num;
    }
