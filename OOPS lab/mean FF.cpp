#include<iostream>
using namespace std;
class c
{
	private:
		float value1;
		float value2;
	public:
		void getdata(float x,float y)
		{
			value1=x;
			value2=y;
		}
		friend void mean(c m);
};
void mean(c m)
{
	int mean;
	mean =(m.value1+m.value2)/2;
	cout<<"mean of value1 and value2 is : "<<mean<<endl;
}
int main()
{
	c c1;
	c1.getdata(10,20);
	mean(c1);
	return 0;
}
