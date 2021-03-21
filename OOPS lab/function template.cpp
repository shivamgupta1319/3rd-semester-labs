#include<iostream>
using namespace std;
template <class T>
T getmax(T a,T b)                 //function template
{
	T result;
	result=a>b?a:b;
	return result;
}
int main()
{
	int x=5,y=6,z;
	long i=10,j=20,k;
	z=getmax<int>(x,y);
	cout<<"greater value between x and y is : "<<z<<endl;
	k=getmax<long>(i,j);
	cout<<"greater value between i and j is : "<<k<<endl;
	return 0;
}
/*int getmax(int a,int b)
{
	int result;
	result=a>b?a:b;
	return result;
}
long getmax(long a,long b)
{
	long result;
	result=a>b?a:b;
	return result;
}*/


