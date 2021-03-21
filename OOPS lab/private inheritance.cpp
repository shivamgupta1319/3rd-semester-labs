#include<iostream>
using namespace std;
class parent
{
	public:
		void display()
		{
			cout<<"mai parent hoon"<<endl;
		}
};
class child:private parent
{
	public:
		void show()
		{
			cout<<"mai bacha hoon"<<endl;
			display();
		}
};
int main()
{
	child shivam;
//	shivam.display();
	shivam.show();
	return 0;
}
