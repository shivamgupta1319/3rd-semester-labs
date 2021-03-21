#include<iostream>
#define pi 3.14
using namespace std;
class fun
{
	public:
		void area(int);                  //area of circle
		void area(int,int);              //area of rectangle
		void area(float,int,int);        //area of triangle
};
void fun::area(int a)
{
	cout<<"area of circle : "<<pi*a*a<<endl;
}
void fun::area(int a,int b)
{
	cout<<"area of rectangle : "<<a*b<<endl;
}
void fun::area(float t,int a,int b)
{
	cout<<"area of triangle : "<<t*a*b<<endl;
}
int main()
{
	int r,l,b;
	fun obj;
	cout<<"--------------------method overloading--------------------------"<<endl;
	cout<<" 1. area of circle"<<endl;
	cout<<" 2. area of rectangle"<<endl;
	cout<<" 3. area of triangle"<<endl;
	cout<<" 4. exit"<<endl;
	
	int choice;
	
	while (1)
	{
		cout<<"which area you want to find :-"<<endl;
		cin>>choice;
		switch (choice)
	    {
		case 1:
			cout<<"tell the value of radius : ";
			cin>>r;
			obj.area(r);
			break;
		case 2:
			cout<<"tell the value of length and breath : ";
			cin>>l>>b;
			obj.area(l,b);
			break;
		case 3:
			cout<<"tell the value of triangle: ";
			cin>>r>>l>>b;
			obj.area(r,l,b);
			break;
		case 4:
			exit (0);
		default:
		 	cout<<"enter the correct choice"<<endl;
	    }
	}
	
}
