#include<stdio.h>
#include<stdlib.h>
struct cqueue
{
	int size,f,r,*array;
	
};
int isfull(struct cqueue *q)
{
	if ((q->r+1)%q->size==q->f)
	return 1;
return 0;	
}
void enqueue(struct cqueue *q,int value)
{
	if(isfull(q))
	{
		printf("circular queue is full");
	}
	else
	{
		q->r=(q->r+1)%q->size;
		q->array[q->r]=value;
		printf("enqueue value is %d : \n",value);
	}
}
int isempty(struct cqueue *q)
{
	if(q->f==q->r)
	return 1;
return 0;	
}
int dequeue (struct cqueue *q)
{
	int a=-1;
	if(isempty(q))
	{
		printf("cqueue is empty\n");
	}
	else
	{
		q->f=((q->f+1)%q->size);
		a=q->array[q->f];
		
	}
	return a;
}
int main()
{
	struct cqueue q;
	q.size=4;
	q.f=q.r=0;
	q.array=(int *)malloc(q.size*sizeof(int));
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	
	printf("deleting the value 1 = %d\n",dequeue(&q)); 
	enqueue(&q,50);
}
