#include<iostream>
using namespace std;
class fun
{
	private:
		int feet;
		int inch;
	public:
		fun()
		{
			feet=0;
			inch=0;
		}
		fun(int f,int i)
		{
			feet=f;
			inch=i;
		}
		void display()
		{
			cout<<" feet : "<<feet<<endl<<" inch : "<<inch<<endl;
			
		}
		fun operator -()
		{
			feet=-feet;
			inch=-inch;
			return fun(feet,inch);
		}
};
int main()
{
	fun f1(10,20);
	fun f2(-10,-20);
	f1.operator -();
	f1.display();
	f2.operator -();
	f2.display();
	return 0;
}
