#include<iostream>
using namespace std;
struct employee 
{
	int id;
	char name[30];
	int age;
	
};
int main()
{
	employee emp[3];
	int i;
	for (i=0;i<3;i++)
	{
		cout<<"tell me the id of employee\t"<<i+1<<endl;
		cin>>emp[i].id;
		cout<<"tell me the name of employee\t"<<i+1<<endl;
		cin>>emp[i].name;
		cout<<"tell me the age of employee\t"<<i+1<<endl;
		cin>>emp[i].age;
	}
	cout<<"employee detail are "<<endl;
	for (i=0;i<3;i++)
	{
		cout<<emp[i].id<<endl<<emp[i].name<<endl<<emp[i].age<<endl;
	}
		
}

