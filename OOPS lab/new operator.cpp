#include<iostream>
using namespace std;
int main()
{
	int n,*pointer,i;
	cout<<"how many integer block you need"<<endl;
	cin>>n;
	pointer=new int[n];  //DMA
	cout<<"tell the value of "<<n<<" one by one "<<endl;
	for(i=0;i<n;i++)
	 cin>>pointer[i];
	cout<<"the enter values are"<<endl;
	for(i=0;i<n;i++)
	 cout<<pointer[i]<<endl;
	return 0;
}
