#include<iostream>
using namespace std;
class bike
{
	public:
		void speed()
		{
			cout<<"speed of bike class is 80 km/h"<<endl;
		}
};
class sportsbike:public bike
{
	public:
		void speed()
		{
			cout<<"speed of sports bike class is 120 km/h"<<endl;
		}
};
int main()
{
	bike ktm;
	ktm.speed();
	return 0;
}
