#include<stdio.h>
#include <stdlib.h>
struct Heap{
	int *a;
	int count,capacity;
};
typedef struct Heap heap;
heap * create(int cap){
	heap *h=(heap *)malloc(sizeof(heap));
	if(h==NULL){
		exit(0);
	}
	h->count=0;
	h->capacity=cap;
	h->a=(int *)malloc(sizeof(int));
	return h;
}
int parent(heap *h,int i)
{
	if(i<=0||i>=h->count)
	{
		return -1;
	}
	return (i-1)/2;
}
int lchild(heap *h,int i)
{
	if(i<=0||i>=h->count)
	{
		return -1;
	}
	return (2*i)+1;
}

int rchild(heap *h,int i)
{
	if(i<=0||i>=h->count)
	{
		return -1;
	}
	return (2*i)+2;
}
int getMax(heap *h)
{
	if(h->count==0)
		return -1;
   return h->a[0];
}
void heapify(heap *h,int i){
	int l,r,max,temp;
	l=lchild(h,i);
	r=rchild(h,i);
	max=(h->a[l]>h->a[i])?l:i;
	max=(h->a[r]>h->a[i])?r:i;
	if(max!=i)
	{temp=h->a[i];
	h->a[i]=h->a[max];
	h->a[max]=temp;
}heapify(h,max);
}
int del(heap *h)
{
	int data;
	if(h->count==0)
		return -1;
	data=h->a[0];
	h->a[0]=h->a[h->count-1];
	h->count--;
	heapify(h,0);
	return data;
}
void insert(heap *h,int data){
	int i;
	if(h->count==h->capacity)
	{
		printf("Full\n");

	}
	h->count++;
	i=h->count-1;
	while(i>=0&&data>h->a[(i-1)/2]){
		h->a[i]=h->a[(i-1)/2];
		i=(i-1)/2;

	}
	h->a[i]=data;
}
void display(heap *h){
	for(int i=0;i<h->count;i++)
	{
		printf("%d\n",h->a[i]);
	}
}
int main()
{
	int ch,item;
	heap *h;
	h=create(5);
	for(;;)
	{   printf("Enter choice 1.Insert 2.delete 3.display 4. max\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the item\n");
			scanf("%d",&item);insert(h,item);break;
			case 2:printf("Deleted item:%d\n",delete(h));break;
			case 3:display(h);
			  break;
			case 4:printf("Maximum element=\n",max(h));
		      break;
		    default:exit(0);
		}
	}
}
