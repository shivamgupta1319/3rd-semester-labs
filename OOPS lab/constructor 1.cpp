#include<iostream>
using namespace std;
class car         //class name is car 
{
	private:                            //ascces specifier
	float petrol,distance;              //instance variable
	public:                            //ascces specifier
	car();                             //constructor

	void show();
	car (float p)          //singal paramatrized
	{
		petrol=p;
		distance=0;
	}
	car(float p,float d)   //multi paramatrized
	{
		petrol=p;
		distance=d;
	}
	car(car &t)	          //copy cnstructor
	{
		petrol=t.petrol;
		distance=t.distance;
	}
	
	
};
void car::show()      //member function outside the class
{
	cout<<"gadi mai "<<petrol<<"liter petrol hai"<<endl;
	cout<<"gadi "<<distance<<"km chali hai"<<endl;
}
car::car()           //constructor declear outside the class
{
		petrol=0;
		distance=0;
}
int main ()
{
	car hondacity(78,0),civic(83,5),audi,bmw(hondacity);
	hondacity.show();
	civic.show();
	audi.show();
	bmw.show();
	return 0;
	
}
