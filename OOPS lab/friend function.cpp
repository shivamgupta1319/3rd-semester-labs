#include<iostream>
using namespace std;
class home
{
	private:
		int chocolates,pastries,jellies;
	public:
	    home()        //default constructor
		{
			chocolates=0;
			pastries=0;
			jellies=0;
		}	
		void setvalues(int c,int p,int j)          //member function of the class
		{
			chocolates=c;
			pastries=p;
			jellies=j;
		}
		void show()
		{
			cout<<"fridge quantities right now :-"<<endl;
			cout<<"chocolates = "<<chocolates<<endl;
			cout<<"pastries = "<<pastries<<endl;
			cout<<"jellies = "<<jellies<<endl;
		}
		friend void eating(home o);              // eating function is now friend of class object(declaration)
		
};
 void eating(home o)               //this function is not member function of class(defination)
{
	cout<<"number of chocolates,pastries and jellies eaties by friend is "<<o.chocolates<<"," <<o.pastries<<"," <<o.jellies <<" respectively."<<endl;
	
}
int main()
{
	home shivam;                  //object creation
	shivam.setvalues(10,20,30);
	shivam.show();
	eating(shivam);
	
	return 0;
}
