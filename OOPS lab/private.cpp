#include<iostream>
using namespace std;
class C
{
	private :
		int x,y;
	public:
	    void getdata()
	    {
	    	cout<<"enter the value of x :";
	    	cin>>x;
	    	cout<<"enter the value of y :";
	    	cin>>y;
		}
		int sum()
		{
			return x+y;
			
		}
		void showdata()
		{
			int s;
			s=sum();
			cout<<"sum of  x+y = "<<s<<endl;
		}
};
int main()
{
	C add;
	add.x;
	add.y;
	add.getdata();
	add.showdata();
	return 0;
}
