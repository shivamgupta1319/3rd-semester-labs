#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev,*next;
};
struct node *start=NULL;
void insertnodeatfrist();
void deletenodeatfrist();
int menu();
void viewnode();
void insertnodeatfrist()
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	printf("enter the infomation\n");
	scanf("%d",&newnode->info);
	newnode->prev=NULL;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
	    start->prev=newnode;
	    newnode->next=start;
	    start=newnode;
    }
}
void deletenodeatfrist()
{
	struct node *temp;
	if (start==NULL)
	{
		printf("no list is there\n");
	}
	
	else
	{
		temp=start;
	    start=start->next;
	    start->prev=NULL;
	    free(temp);
	}
	
	
}
void viewnode()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("no list is there\n");
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("information=%d\n",temp->info);
			temp=temp->next;
		}
	}
}
int menu()
{
	int ch;
	printf("1.insert node at frist in linklist\n");
	printf("2.view list in linklist\n");
	printf("3.delete node at first in linklist\n");
	printf("4.exit\n");
	
	scanf("%d",&ch);
	return ch;
}
int main()
{
    
	while(1)
	{
		switch(menu())
		{
			case 1:
				insertnodeatfrist();
				break;
			case 2:
				viewnode();
				break;
			case 3:
				deletenodeatfrist();
				break;
			case 4:
				exit(0);
				break;
	    }
    }
	return 0; 
}
