#include<iostream>
#include<cstring>
using namespace std;

class Customer
{
	private:
		char c_name[30];
    	int c_age;
	    float c_balance;
	public:
		void setdata()
		{
			cout<<"Enter your name: ";
			cin>>c_name;
			cout<<"Enter your age: ";
			cin>>c_age;
			cout<<"Enter your balance: ";
			cin>>c_balance;
		}
		
		friend void display(Customer c);
};

void display(Customer c)
{
	cout<<"\nName of the Account Holder : "<<c.c_name<<endl;
	cout<<"\nCustomer Age is : "<<c.c_age<<endl;
	cout<<"\nCustomer Balance is : "<<c.c_balance<<endl;	
}
int main()
{
	Customer c1;
	c1.setdata();
	display(c1);
	return 0;
}

