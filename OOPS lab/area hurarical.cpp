#include<iostream>
using namespace std;
class area
{
	protected:
		int base;
		int height;

		
		
};

class rec:public area
{
	private:
	    int length;
	public:
		rec();
		rec(int l,int b)
		{
			length=l;
			base=b;
			
		}
		void showdata()
		{
			cout<<"length : "<<length<<endl;
			cout<<"breath : "<<base<<endl;
		
			
		}
		void areaofrectagle()
		{
			cout<<"area of rectangle :"<<length*base<<endl;
		}
		
};
class cyl:public area
{
	
	public:
		
		cyl(int r,int h)
		{
			base=r;
			height=h;
			
		}
		void showdata()
		{
			cout<<"radius : "<<base<<endl;
			cout<<"height : "<<height<<endl;
		
			
		}
		void areaofcylinder()
		{
			cout<<"area of clyinder :"<<2*3.14*base*(base+height)<<endl;
		}
		
};
class isot:public area
{
	
	public:
		
		isot(int b,int h)
		{
			base=b;
			height=h;
			
		}
		void showdata()
		{
			cout<<"base : "<<base<<endl;
			cout<<"height : "<<height<<endl;
		
			
		}
		void areaofisot()
		{
			cout<<"area of iso. triangle :"<<0.5*(base*height)<<endl;
		}
		
};
int main()
{
	rec r(10,5);
	
	r.showdata();
	r.areaofrectagle();
	cyl c(5,4);
	c.showdata();
	c.areaofcylinder();
	isot i(10,5);
	i.showdata();
	i.areaofisot();
	return 0;
}
