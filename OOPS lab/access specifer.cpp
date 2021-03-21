#include<iostream>
using namespace std;
struct complex
{
	
	public:
		int i ,r;
		void setdata(int x,int y)
		{
			x=r;
			i=y;
		}
		void showdata()
		{
			cout<<r<<"+"<<i<<"i";
		}
};
int main()
{
	complex c1;
	c1.r=20;
	c1.i=30;
	cout<<c1.r;
	c1.setdata (6,7);
	c1.showdata();
	return 0;
}
