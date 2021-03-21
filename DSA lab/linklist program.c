#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;
struct node *createnode();
void insertnode();                             //insert at last
void deletenode();                            //delete at first
void viewnode();
void insertatfirst();
int getlength();
void insertafterposition();
void deleteatlast();
int menu();
struct node *createnode()                   //create node dyanamically
{
	struct node *n;
	n=malloc(sizeof(struct node));
	return (n);
	
};
void insertnode()
{
	struct node *temp,*t;
	temp=createnode();
	printf("enter the data in node\n");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if (start==NULL)
	{
		start=temp;
	}
	
	else
	{
		t=start;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
	}
}
void deletenode()
{
	if (start==NULL)
	printf("list is empty");
	else
	{
		struct node *q;
		q=start;
		start=start->link;
		free(q);
	}

}
void viewnode()
{
	struct node *t;
	if (start==NULL)
	printf("no list");
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
			
		}
		
	}
	
	
}

int menu()
{
	int ch;
	printf("\n\n1.insert node at last in linklist\n");
	printf("2.view list in linklist\n");
	printf("3.delete node at first in linklist\n");
	printf("4.exit\n");
	printf("5.delete node at last\n");
	printf("6.insert node at frist\n");
	printf("7.get length of node\n");
	printf("8.to insert the node at position\n");
	printf("enter the choice\n");
	scanf("%d",&ch);
	return ch;
	
}
void deleteatlast()
{
	struct node *t,*q;
	if (start==NULL)
	printf("no list is there");
	else
	{
		q=start;
		t=start;
		while (t->link!=NULL)
		{
			q=t;
			t=t->link;
		}
	}
	
	if(t==start)
	{
		start==NULL;
	}
	
	else
	{
		q->link=NULL;
	    free(t);
	}
	
	
	
}
void insertatfirst()
{
	struct node *newnode;
	newnode=createnode();
	printf("enter the data in node\n");
	scanf("%d",&newnode->info);
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		newnode->link=start;
		start=newnode;
	}
	
}




int getlength()
{
	struct node *t;
	if(start==NULL)
	{
		printf("no list is there\n");
	}
	else
	{
		t=start;
		while(t!=NULL)
		{
			count+=1;
			t=t->link;
		}
	}
	return(count);
	
}
void insertafterposition()
{
	int position;
	struct node *newnode,*t;
	if(start==NULL)
	{
		printf("no list is there");
	}
	else
	{
		printf("tll the position\n");
		scanf("%d",&position);
		if (position>getlength())
		{
			printf("worng position");
			insertafterposition();
		}
		else
		{
			int i=1;
			newnode=createnode();
			printf("enter the data\n");
			scanf("%d",&newnode->info);
			newnode->link=NULL;
			if(start==NULL)
			{
				start=newnode;
			}
			else
			{
				t=start;
				while(i<position)
				{
					t=t->link;
					i++;
				}
				newnode->link=t->link;
				t->link=newnode;
				
			}
		}
	}
}




int main()
{
    int k;
	while(1)
	{
		switch(menu())
		{
			case 1:
				insertnode();
				break;
			case 2:
				viewnode();
				break;
			case 3:
				deletenode();
				break;
			case 4:
				exit(0);
				break;
			case 5:
				deleteatlast();
				break;
			case 6:
				insertatfirst();
				break;
			case 7:
				k=getlength();
				printf("length is= %d\n",k);
				break;
			case 8:
				insertafterposition();
				break;			
			default:
			    printf("\n chal yaha se");				
		}
	}
	return(0);
}
