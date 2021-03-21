#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node*last=NULL;
void display(struct node *last);    //to display the list
struct node *addatbeg(struct node *last,int value);   //insert new node in linklist at begning
struct node* addatempty(struct node *last,int value);           //insert node at empty list
struct node* addatend(struct node *last,int value);              //add node at the end of linklist
struct node* addafter(struct node *last,int value,int item);     //add node at particular position in linklist
struct node* createlist(struct node *last);


void display(struct node *last)   //access the link list using the last pointer
{
	struct node *t;
	if (last==NULL)
	{
		printf("no list is there\n");
	}
	else
	{
		do
		{
			t=last->next;
			printf("the givin data is %d\n",t->data);
			t=t->next;
		}while(t!=last->next);
	}
	
}
struct node *addatbeg(struct node *last,int value)
{
	struct node *n;
	n=malloc(sizeof(struct node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	return(last);
}
struct node* addatempty(struct node *last,int value)
{
	struct node *n;
	n=malloc(sizeof(struct node));
	n->data=value;
	last=n;
	last->next=last;
	return(last);
}
struct node* addatend(struct node *last,int value)
{
	struct node *n;
	n=malloc(sizeof(struct node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	last=n;
	return(last); 
}

struct node* addafter(struct node *last,int value,int item)
{
	struct node *n,*t;
	t=last->next;
	do{
		if(t->data==item)
		{
			n=malloc(sizeof(struct node));
			n->data=value;
			n->next=t->next;
			t->next=n;
		}
		
		t=t->next;
	}while(t!=last->next);
	printf("%d id not present in the list\n");
	return (last);
	
	
}
struct node* createlist(struct node *last)
{
	int n,value,i;
	printf("enter the number of value you need\n");
	scanf("%d",&n);
	printf("enter the frist data\n");
	scanf("%d",&value);
	last=addatempty(last,value);
	for(i=2;i<=n;i++)
	{
		printf("enter the remaining data\n");
	    scanf("%d",&value);
	    last=addatend(last,value);
	    
	}
	return(last);
	
}
int main()
{
	int choice,value,item;
	struct node *last=NULL;
	printf("1. create list\n");
		printf("2. display list\n");
		printf("3. add node at beginning in circular linklist\n");
		printf("4. add at empty in circular linklist\n");
		printf("5. add at end in circular linklist\n");
		printf("6. add after a particular position in circular linklist\n");
		printf("7. EXIT\n");
	while(1)
	{
		
		
		printf("1. enter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1:
				last=createlist(last);
			break;
			case 2:
				display(last);
			break;
			case 3:
				printf("enter the value for the list\n");
				scanf("%d",&value);
				last=addatbeg(last,value);
			break;
			case 4:
				printf("enter the value for the list\n");
				scanf("%d",&value);
				last=addatempty(last,value);
			break;
			case 5:
				printf("enter the value for the list");
				scanf("%d",&value);
				last=addatend(last,value);
			break;
			case 6:
				printf("enter the item value after new value to be inserted in list");
				scanf("%d",&item);
				printf("enter the value for the list");
				scanf("%d",&value);
				last=addafter(last,value,item);
			break;
			case 7:
				exit(0);
			break;
			default:
				printf("enter the correct value");
				
				
		}
	}
	return 0;
	
	
}













