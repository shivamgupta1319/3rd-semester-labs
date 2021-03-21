#include<iostream>
using namespace std;
class base
{
	private:
		int a,b;
	public:
		void input()
		{
			cout<<"enter the value of a and b"<<endl;
			cin>>a>>b;
			
		}
		void show()
		{
			cout<<"sum = "<<a+b<<endl;
		}
};
class derive1:public base
{
	private:
		int m;
	public:
		void getdata()
		{
			cout<<"enter the value of m :";
			cin>>m;
		}
		void display()
		{
			cout<<"m = "<<m<<endl;
		}
};
class derive2:public base
{
	private:
		int n;
	public:
		void putdata()
		{
			cout<<"enter the value of n :";
			cin>>n;
		}
		void viewdata()
		{
			cout<<"n = "<<n<<endl;
		}
		
};
int main()
{
	derive1 obj1;
	derive2 obj2;
	obj1.input();
	obj1.show();
	obj1.getdata();
	obj1.display();
	obj2.putdata();
	obj2.viewdata();
	obj2.input();
	obj2.show();
	return 0;
}
