#include<iostream>
using namespace std;
class a
{
	private:
		int x;
	public:
		a(int k)
		{
			x=k;
			cout<<"x : "<<x<<endl;
		}
};
class b: public a
{
	private:
		int y;
	public:
		
	b(int p,int q):a(p)               //calling of parameterized constructor of base class
	{
		y=q;
		cout<<"y : "<<y<<endl;
	}
};
int main()
{
	b obj(5,8);
	return 0;
}
