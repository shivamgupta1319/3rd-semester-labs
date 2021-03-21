#include<iostream>
using namespace std;
class car 
{
	public:
		virtual void acon()
		{
			cout<<"AC of car class"<<endl;
		}
};
class sportscar:public car
{
	public:
		void acon()               //method overriding
		{
			cout<<"AC of sportscar class"<<endl;
		}
};
int main ()
{
	car *p;
	sportscar oddi;
	//oddi.acon();             //early binding
	p=&oddi;                //base class pointer is storing the address of child class(base class pointer to child class object)
	//p->acon();             //early binding
	p->acon();               //dynamic binding because we use virtual keyword in base class function as prefix
	return 0;
}
// for dynamic binding we use virtuals function
