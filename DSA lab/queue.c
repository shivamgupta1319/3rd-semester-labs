#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size,f,r,*arr;
};
int isfull(struct queue *q)
{
	if(q->r==q->size-1)
	return 1;
	else 
	return 0;
}
void enqueue(struct queue *q,int val)
{
	if (isfull(q))
	{
		printf("queue is full");
		
	}
	else
	{
		
		q->r=q->r+1;
		q->arr[q->r]=val;
		printf("enqueue value is %d : \n",val);
	}
}
int isempty(struct queue *q)
{
	if(q->f==q->r)
	return 1;
	else 
	return 0;
}
int dequeue(struct queue *q)
{
	int a=-1;
	if (isempty(q))
	{
		printf("queue is empty\n");
	}
	else
	{
		q->f=q->f+1;
		a=q->arr[q->f];
	}
	return a;
}
int main()
{
	struct queue q;
	q.size=5;
	q.f=q.r=-1;
	q.arr=(int *)malloc(q.size*sizeof(int));
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	enqueue(&q,90);
	printf("\ndeleting 1st value %d : \n",dequeue(&q));
	printf("deleting 2nd value %d : \n",dequeue(&q));
	printf("deleting 3rd value %d : \n",dequeue(&q));
	printf("deleting 4th value %d : \n",dequeue(&q));
	printf("deleting 5th value %d : \n",dequeue(&q));
	enqueue(&q,80);
	return 0;
}
