#include <iostream>
using namespace std;
class base
{
    public:
	int fun() 
	{ 
		cout << "Base fun() called"; 
	}
	int fun(int x) 
	{ 
		cout << "Base fun(int x) called"; 
		cout<<"value of x is : "<<x<<endl;
	}
};

class Derived : public base 
{
    public:
	int fun(int y) 
	{
		cout << "Derived fun(int y) called"<<endl;
		cout<<"value of y is : "<<y<<endl;
	}
};
int main()
{
	base b;
	b.fun(10);
	Derived d;
	d.fun(5); 
	return 0;
}

