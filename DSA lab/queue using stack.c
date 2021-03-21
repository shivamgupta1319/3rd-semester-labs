#include<stdio.h>
#include<stdlib.h>
# define n 5                     //macro
int stack1[n],stack2[n];
int top1=-1,top2=-1;
int count;
void enqueue(int val)
{
	push1(val);
	count++;
}
void push1(int val)
{
	if(top1==n-1)
	{
		printf("queue is full\n");
	}
	else
	{
		top1++;
		stack1[top1]=val;
	}
}
int pop1()
{
	return stack1[top1--];
}
void push2(int val)
{
	top2++;
	stack2[top2]=val;
}
int pop2()
{
	return stack2[top2--];
}
void dequeue()
{
	
	if (top1==-1&&top2==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i=0,b;
		for (i=0;i<count;i++)
		{
			push2(pop1());
		}
		b=pop2();
		count--;
		for(i=0;i<count;i++)
		{
			push1(pop2());
		}
		printf("dequeue value is : %d\n",b);
	}
}

void display()
{
	int i;
	for(i=0;i<=top1;i++)
	{
		printf("enqueue value is : %d\n",stack1[i]);
	}
	
}
int main()
{
	dequeue();                //queue is empty
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	display();
	enqueue(80);
	display();
	enqueue(90);
	
}
