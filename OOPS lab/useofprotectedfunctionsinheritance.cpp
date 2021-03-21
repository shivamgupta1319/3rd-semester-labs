#include<iostream>
using namespace std;
class parent
{
	private:
		int a;
	protected:
		void set(int k)
		{
			a=k;
			cout<<"value of a : "<<a;
		}
};
class child:private parent
{
	public:
		void putdata(int x)
		{
			set(x);
		}
};
int main()
{
	child s;
	s.putdata(8);
	return 0;
}
