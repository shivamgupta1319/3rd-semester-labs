#include<iostream>
using namespace std;
class Bank
{
	private:
		int account;
		float balance;
		char name[20];
	public:
		void open();
		void deposit(int);
		void withdraw(int);
		void searchs(int);
		void display();
};
void Bank::open()
{
	cout<<"\nEnter your name: ";
	cin>>name;
	cout<<"Enter your account number: ";
	cin>>account;
	cout<<"Enter the money: ";
	cin>>balance;
}
void Bank::deposit(int d)
{
	int b;
	if(account==d)
	{
		cout<<"Enter the amount of money: ";
		cin>>b;
		balance=balance+b;
		cout<<endl<<"Deposit has done well!!"<<endl;
		cout<<"================================================"<<endl;
	}
}
void Bank::withdraw(int w)
{
	int b,p;
	if(account==w)
	{
		cout<<"Your account balance is: "<<balance<<endl;
		cout<<"Amount of money you want to withdraw: ";
		cin>>b;
		p=balance-b;
		if(p<=0)
		{
			cout<<endl<<"Sorry!There is not enough money"<<endl;
			cout<<"================================================"<<endl;
		}
		else if(p>=0)
		{
			cout<<endl<<"Your request has done."<<endl;
			cout<<"Your current balance is: "<<p<<endl;
			cout<<endl<<"================================================"<<endl;
			balance=p;
		}
	}
}
void Bank::searchs(int s)
{
	if(account==s)
	{
		cout<<endl<<" Account Holder:-"<<endl;
		cout<<"\n\tName: "<<name<<"\n\tAccount no.: "<<account<<"\n\tBalance: "<<balance<<"\n\n";
	}
	else
	{
		cout<<endl<<"Account doesn't exist."<<endl;
		cout<<endl<<"================================================"<<endl;
	}
}
void Bank::display()
{
	cout<<"\n\tName: "<<name<<"\n\tAccount no.: "<<account<<"\n\tBalance: "<<balance<<"\n\n";
	cout<<endl<<"================================================"<<endl;
}
int main()
{
	int i,j,k,l,m,y=0;
	int choice;
	Bank b[100];
	cout<<" Welcome to My Bank "<<endl;
	do
	{
		cout<<"\n Press1 to create an account";
		cout<<"\n Press2 to deposit money";
		cout<<"\n Press3 to withdraw money"; 
		cout<<"\n Press4 to display";
		cout<<"\n Press5 to search"; 
		cout<<"\n Press6 to exit\n\n";
		cout<<"\n Your choice: ";
		cin>>choice;
		cout<<endl<<"================================================"<<endl;
		
		switch(choice)
		{
			case 1:
				{
					cout<<"\nHow many accounts you want to open?";
					cin>>y;
					for(i=0;i<y;i++)
					b[i].open();
					cout<<endl<<"Account created successfully!"<<endl;
					cout<<endl<<"================================================"<<endl;
					break;
				}
			case 2:
				{
					cout<<"\t\t\nEnter your account no.: ";
					cin>>j;
					for(i=0;i<y;i++)
					b[i].deposit(j);
					break;
				}
			case 3:
				{
					cout<<"\t\t\nEnter your account no.: ";
					cin>>k;
					for(i=0;i<y;i++)
					b[i].withdraw(k);
					break;
				}
			case 4:
				{
					for(i=0;i<y;i++)
					b[i].display();
					break;
				}
			case 5:
				{
					cout<<"\n Enter your account no.: ";
					cin>>m;
					for(i=0;i<y;i++)
					b[i].searchs(m);
					break;
				}
			case 6:
				{
					exit(0);
					break;
				}
			default:
				{
					cout<<endl<<" You have passed the wrong key"<<endl;
					cout<<endl<<"================================================"<<endl;
					break;
				}
		}
	}while(1);
}
