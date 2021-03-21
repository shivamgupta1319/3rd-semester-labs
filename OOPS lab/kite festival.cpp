#include<iostream>
using namespace std;
class kitefestival
{
	private:
		int kite;                      //instance member variable
		static int charkha;          //static member variable
	public:
	    void setkite(int k)
		{
			kite=k;
			cout<<"number of kites fly  "<<k<<endl;
			charkha++;
			
		}
		void displaycharkhause()//instance member function
		{
			cout<<"charkha use  "<<charkha<<endl;
		}
		static void see()     //static member function
		{
			cout<<"charkha use  "<<charkha<<endl;
		}		
};
int kitefestival::charkha=0;
int main ()
{
	kitefestival::see();    
	kitefestival a,b,c;
	a.displaycharkhause();
	b.displaycharkhause();
	c.displaycharkhause();
	a.setkite(5);
	a.displaycharkhause();
	b.setkite(14);
	b.displaycharkhause();
	c.setkite(6);
	c.displaycharkhause();
	return 0;
}
