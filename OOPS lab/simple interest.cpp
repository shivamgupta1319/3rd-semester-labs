#include<iostream>
using namespace std;
class si
{
	private:
	float s,p,r,t;
	public:
	si(float P,float R,float T)
	{
		p=P;
		r=R;
		t=T;
		
	}
	void calculation()
	{
		
		s=p*r*t/100;
		
	}
	si(si &x)
	{
		p=x.p;
		r=x.r;
		t=x.t;
	}
	
	void show()
	{
		cout<<"principal amount is "<<p<<endl;
		cout<<"rate is "<<r<<endl;
		cout<<"time is "<<t<<endl;
		cout<<"simple interest is "<<s<<endl;		
	}
};
int main()
{
	si a(1200,15,12),b(a);
	
	a.calculation();
	a.show();
	b.calculation();
	b.show();
	return 0;
}
