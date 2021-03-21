#include<iostream>
using namespace std;
void fun(int a)
{
	cout<<"value of a : "<<a<<endl;
}
void fun(float b)
{
	cout<<"value of b : "<<b<<endl;
}
int main()
{
	fun(10);
	fun(10.5);
}
