#include<iostream>
using namespace std;
template <class T>
class mypair
{
	private:
		T a,b;
	public:
		mypair(T first,T second)
		{
			a=first;
			b=second;
		}
	T getmax();
	
		
};
template <class T>
T mypair<T>::getmax()
{
	T result;
	result=a>b?a:b;
	return result;
}
int main()
{
	mypair <int>myobj(100,90);
	mypair <int>mysub(10,500);
	cout<<myobj.getmax()<<endl;
	cout<<mysub.getmax()<<endl;
	return 0;
}


