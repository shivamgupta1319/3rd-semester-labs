#include<iostream>
using namespace std;
class separate
{
	private:
		double before,after;
		int a;
	public:
	    separate(double x)	
	    {
	    	before=x;
	    	
		}
		void s()
		{
			a=(int)before;
			after=before-(float)a;
		}
		void show()
		{
			cout<<"integer part= "<<a<<endl; 
			cout<<"decimal part= "<<after<<endl; 
		}
};
int main()
{
	double number;
	cout<<"enter the number"<<endl; 
	cin>>number;
	separate s1(number);
	s1.s();
	s1.show();
	return 0;
}
