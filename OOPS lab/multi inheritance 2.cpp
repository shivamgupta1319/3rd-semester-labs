#include<iostream>
#include<math.h>
using namespace std;
class A
{
	protected:
		int a,b,s;
	public:
	    void get()
		{
			cin>>a>>b;
		}	
		void cal()
		{
			s=a+b;
			cout<<"added values are "<<s<<endl;
		}
};
class B
{
	int n=5;
	public:
		void calculate()
		{
			cout<<"square of n is "<<n*n<<endl;
			 
		}
};
class C:public A,public B
{
	public:
		void calcu()
		{
			s=pow(a,3)+pow(b,3);
			cout<<"add of cube : "<<s<<endl;
	
		}
};
int main()
{
	C obj;
	obj.get();
	obj.cal();
	obj.calculate();
	obj.calcu();
	return 0;
}
