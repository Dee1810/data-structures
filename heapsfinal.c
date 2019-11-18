#include<stdio.h>
#include<stdlib.h>
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
	h->a=(int *)malloc(cap*sizeof(int));
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
{        int left=(2*i)+1;
	if(i<0||left>=h->count)
	{
		return -1;
	}
	return left;
}

int rchild(heap *h,int i)
{  int right=(2*i)+2;
	if(i<0||right>=h->count)
	{
		return -1;
	}
	return right;
}
int getMax(heap *h)
{
	if(h->count==0)
		return -1;
   return h->a[0];
}
void heapify(heap *h,int i){
	int l,r,max,m1,m2,temp;
	//m1=0;
	//m2=0;
	l=lchild(h,i);
	r=rchild(h,i);
	/*if(l!=-1)
	m1=(h->a[l]>h->a[i])?l:i;
	if(r!=-1)
	m2=(h->a[r]>h->a[i])?r:i;
	max=h->a[m1]>h->a[m2]?m1:m2;*/
	if(l!=-1&&h->a[l]>h->a[i])
	max=l;
	else
	max=i;
	if(r!=-1&&h->a[r]>h->a[max])
	max=r;
	if(max!=i)
	{temp=h->a[i];
	h->a[i]=h->a[max];
	h->a[max]=temp;}
	//i=max;
//while(l!=-1&&r!=-1);
if(l==-1||r==-1)return;
heapify(h,max);
//return;
}
int del(heap *h)
{
	int data;
	if(h->count==0)
		return -1;
	data=h->a[0];
	if(h->count>1)
	h->a[0]=h->a[h->count-1];
	//h->a[h->count-1]=-1;}
	h->count--;
	heapify(h,0);
	return data;
}
void insert(heap *h,int data){
	int i;
	if(h->count==h->capacity)
	{
		printf("Full\n");
		exit(0);

	}
	h->count++;
	i=h->count-1;
	//printf("0");
	while(i>0&&data>h->a[(i-1)/2])
	{
		h->a[i]=h->a[parent(h,i)];
		i=(i-1)/2;

	}
	/*for(i=h->count-1;(data>h->a[(i-1)/2]&&i!=0);i=(i-1)/2)
	{
	  h->a[i]=h->a[(i-1)/2];}*/
	h->a[i]=data;
	printf("Inserted\n");
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
	h=create(15);
	for(;;)
	{   printf("Enter choice 1.Insert 2.delete 3.display 4. max\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the item\n");
			       scanf("%d",&item);
			        printf("0");
			       insert(h,item);
			       break;
			case 2:printf("Deleted item:%d\n",del(h));
			break;
			case 3:display(h);
			  break;
			case 4:printf("Maximum element=%d\n",getMax(h));
		      break;
		    default:exit(0);
		}
	}
}
