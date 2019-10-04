#include<stdio.h>
#define STACK 8
int top=-1,rtop=-1;
int s[10],revstack[10];
void push(int item)
{
  if(top==STACK)
  {
    printf("Number out of range");
  }
  else
  {
    s[++top]=item;
  }
}
void rev()
{
  while(top!=-1)
  {
    revstack[++rtop]=s[top--];
 
  }
  printf("Reversed number: ");
  while(rtop!=-1)
  {
    printf("%d",revstack[rtop--]);
   }
}
void main()
{
int n,i;
printf("Enter the number to be reversed:");
scanf("%d",&n);
while(n!=0)
{
 push(n%10);
 n=n/10;
}
rev();
}
