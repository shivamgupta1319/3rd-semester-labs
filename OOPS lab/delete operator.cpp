#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;   //creation of integer block dynamically using new operator in c++
	*ptr=12;
	cout<<"the value in side the new block refered by ptr "<<*ptr<<endl;
	float *ptr1;
	ptr1=new float;     //creation of float block dynamically using new operator in c++
	*ptr1=22.52;
	cout<<"the value in side the new block refered by ptr "<<*ptr1<<endl;
	int *ptr2;
	ptr2=new int[4];    //creation of integer array dynamically using new operator in c++
	int i;
	for(i=0;i<4;i++)
	cin>>ptr[i];
	cout<<"the enter values are"<<endl;
	for(i=0;i<4;i++)
	 cout<<ptr[i]<<endl;
	
	delete ptr;  //deletion of  dynamically created block which was refer by ptr using delete operator in c++
	delete ptr1;   //deletion of  dynamically created block which was refer by ptr1 using delete operator in c++
	delete[] ptr2;   //deletion of  dynamically created array which was refer by ptr2 using delete operator in c++
	return 0;  
}

