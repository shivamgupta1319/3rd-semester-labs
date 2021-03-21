#include<iostream>
using namespace std;
struct person
{
	char name[30];
	int age;
	float salary;
	
};
person getdata(person);
void dispaly (person);

int main()
{
	person p;
	p=getdata(p);
	dispaly(p);
	
}
person getdata(person p)
{
	cout<<"tell me your name"<<endl;
	cin>>p.name;
	cout<<"tell me your age"<<endl;
	cin>>p.age;
	cout<<"tell me your salary"<<endl;
	cin>>p.salary;
	return p;
	
}
void dispaly(person p)
{
	cout<<endl<<endl<<"name = "<<p.name<<endl;
	
	cout<<"age = "<<p.age<<endl;
	cout<<"salary = "<<p.salary<<endl;
}
