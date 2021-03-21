
/*#include<iostream>
using namespace std;
class car              //base class
{
	private:
		int colournum;
		char fuel;
	public:
		void inputdata()
		{
			cout<<"choice the colour of your car :-\n1.silver\n2.golden\n3.black"<<endl;
			cin>>colournum;
			cout<<"fuel type of your car"<<endl;
			cin>>fuel;
		}
		void showdata()
		{
			if(colournum==1)
			cout<<"your car is :silver"<<endl;
			else if(colournum==2)
			cout<<"your car is :golden"<<endl;
			else
			cout<<"your car is :black"<<endl;
			cout<<"your car fuel type is : "<<fuel<<endl;
		}
			
};
class sportscar:public car
{
	private:
		int maxspeed;
		int airbag;
		int alarm;
	public:
		void getdata()
		{
			cout<<"max speed of your car :-"<<endl;
			cin>>maxspeed;
			cout<<"number of air bag in your car"<<endl;
			cin>>airbag;
			cout<<"number of alarm in your car"<<endl;
			cin>>alarm;
		}
		void displaydata()
		{
		
			cout<<"your car max speed is : "<<maxspeed<<endl;
			
			cout<<"number of air bag in your car : "<<airbag<<endl;
			
			cout<<"number of alarm in your car : "<<alarm<<endl;
			
		}
			
};
int main()
{
	car swift;
	sportscar tesla;
	swift.inputdata();
	swift.showdata();
	tesla.getdata();
	tesla.displaydata();
	return 0;
}*/



//varitation 2


/*#include<iostream>
using namespace std;
class car              //base class
{
	private:
		int colournum;
		char fuel;
	public:
		void inputdata()
		{
			cout<<"choice the colour of your car :-\n1.silver\n2.golden\n3.black"<<endl;
			cin>>colournum;
			cout<<"fuel type of your car"<<endl;
			cin>>fuel;
		}
		void showdata()
		{
			if(colournum==1)
			cout<<"your car is :silver"<<endl;
			else if(colournum==2)
			cout<<"your car is :golden"<<endl;
			else
			cout<<"your car is :black"<<endl;
			cout<<"your car fuel type is : "<<fuel<<endl;
		}
			
};
class sportscar:public car
{
	private:
		int maxspeed;
		int airbag;
		int alarm;
	public:
		void getdata()
		{
			cout<<"max speed of your car :-"<<endl;
			cin>>maxspeed;
			cout<<"number of air bag in your car"<<endl;
			cin>>airbag;
			cout<<"number of alarm in your car"<<endl;
			cin>>alarm;
		}
		void displaydata()
		{
		
			cout<<"your car max speed is : "<<maxspeed<<endl;
			
			cout<<"number of air bag in your car : "<<airbag<<endl;
			
			cout<<"number of alarm in your car : "<<alarm<<endl;
			
		}
			
};
int main()
{

	sportscar tesla;
	tesla.inputdata();
	tesla.showdata();
	tesla.getdata();
	tesla.displaydata();
	return 0;
}*/


//varitation 3 


#include<iostream>
using namespace std;
class car              //base class
{
	protected:
		int colournum;
		char fuel;
	public:
		void inputdata()
		{
			cout<<"choice the colour of your car :-\n1.silver\n2.golden\n3.black"<<endl;
			cin>>colournum;
			cout<<"fuel type of your car"<<endl;
			cin>>fuel;
		}
		/*void showdata()
		{
			if(colournum==1)
			cout<<"your car is :silver"<<endl;
			else if(colournum==2)
			cout<<"your car is :golden"<<endl;
			else
			cout<<"your car is :black"<<endl;
			cout<<"your car fuel type is : "<<fuel<<endl;
		}*/
			
};
class sportscar:public car
{
	private:
		int maxspeed;
		int airbag;
		int alarm;
	public:
		void getdata()
		{
			cout<<"max speed of your car :-"<<endl;
			cin>>maxspeed;
			cout<<"number of air bag in your car"<<endl;
			cin>>airbag;
			cout<<"number of alarm in your car"<<endl;
			cin>>alarm;
		}
		void displaydata()
		{
		
			cout<<"your car max speed is : "<<maxspeed<<endl;
			
			cout<<"number of air bag in your car : "<<airbag<<endl;
			
			cout<<"number of alarm in your car : "<<alarm<<endl;
			if(colournum==1)
			cout<<"your car is :silver"<<endl;
			else if(colournum==2)
			cout<<"your car is :golden"<<endl;
			else
			cout<<"your car is :black"<<endl;
			cout<<"your car fuel type is : "<<fuel<<endl;
			
		}
			
};
int main()
{

	sportscar tesla;
	tesla.inputdata();
	//tesla.showdata();
	tesla.getdata();
	tesla.displaydata();
	return 0;
}
