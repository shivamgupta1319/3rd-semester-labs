#include<iostream>
using namespace std;
class car2;
class car1
{
	private:
		
	int p1,d1;
	public:
	void setdata()
	{
		
		cout<<"enter the value of petrol in car 1"<<endl;
		cin>>p1;
		cout<<"enter the value of distance travel by car 1"<<endl;
		cin>>d1;
		
	}
	friend void sum(car1,car2);
};
class car2
{
	private:
		int p2,d2;
	public:	
	void setdata()
	{
		
		cout<<"enter the value of petrol in car 2"<<endl;
		cin>>p2;
		cout<<"enter the value of distance travel by car 2"<<endl;
		cin>>d2;
		
	}
	friend void sum(car1,car2);
};
void sum(car1 obj1,car2 obj2)
{
	cout<<"total petrol use by car1 and car2 is : "<<obj1.p1+obj2.p2<<endl;
	cout<<"total distance travel by car1 and car2 is : "<<obj1.d1+obj2.d2<<endl;
}
int main()
{
	car1 audi;
	car2 bmw;
	audi.setdata();
	bmw.setdata();
	sum(audi,bmw);
	return 0;
}
