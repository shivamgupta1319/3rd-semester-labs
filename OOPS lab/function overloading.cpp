#include<iostream>
using namespace std;
class fun
{
	public:
	void swap(int &,int & );
	void swap(float &,float &);
	void swap(char &,char &);	
};
void fun::swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;	
	cout<<"x = "<<a<<endl;
	cout<<"y = "<<b<<endl;
	
}
void fun::swap(float &a,float &b)
{
	float t;
	t=a;
	a=b;
	b=t;
	cout<<"p = "<<a<<endl;
	cout<<"q = "<<b<<endl;
}
void fun::swap(char &a,char &b)
{
	char t;
	t=a;
	a=b;
	b=t;
	cout<<"a1 = "<<a<<endl;
	cout<<"b1 = "<<b<<endl;
}

int main()
{
	int x,y;
	float p,q;
	char a1,b1;
	fun obj;
	cout<<"--------------------function overloading--------------------------"<<endl;
	cout<<" 1. swap the int type input"<<endl;
	cout<<" 2. swap the float type input"<<endl;
	cout<<" 3. swap the char type input"<<endl;
	cout<<" 4. exit"<<endl;
	
	int choice;
	
	while (1)
	{
		cout<<"which type of swapping you want to do :-"<<endl;
		cin>>choice;
		switch (choice)
	    {
		case 1:
			cout<<"tell the value of x : ";
			cin>>x;
			cout<<"tell the value of y : ";
			cin>>y;
			obj.swap(x,y);
			break;
		case 2:
			cout<<"tell the value of p : ";
			cin>>p;
			cout<<"tell the value of q : ";
			cin>>q;
			obj.swap(p,q);
			break;
		case 3:
			cout<<"enter a1 : ";
			cin>>a1;
			cout<<"enter b1 : ";
			cin>>b1;
			obj.swap(a1,b1);
			break;
		case 4:
			exit (0);
		default:
		 	cout<<"enter the correct choice"<<endl;
	    }
	}
}
