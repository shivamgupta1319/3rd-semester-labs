#include<iostream>
using namespace std;
class a
{
	public:
		a()
		{
			cout<<"i am constructor of a class"<<endl;
		}
};
class b: public a
{
	public:
		
	b()
	{
			cout<<"i am constructor of b class"<<endl;
	}
};
int main()
{
	b obj;
	return 0;
}
