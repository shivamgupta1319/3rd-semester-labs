#include<iostream>
using namespace std;
class student              
{
	private:
		char name[30];
		int age;
		char gender;
	public:
		void inputdata()
		{
			cout<<"entre your name : "<<endl;
			cin>>name;
			cout<<"entre your age : "<<endl;
			cin>>age;
			cout<<"entre your gender : "<<endl;
			cin>>gender;
		}
		void showdata()
		{
			cout<<" your name : "<<name<<endl;
			cout<<" your name : "<<age<<endl;
			cout<<" your name : "<<gender<<endl;
		}
			
};
class computerscience:public student
{
	private:
		int totalfaculty;
		int totalcourse;
		
	public:
		void getdata()
		{
			cout<<"tell me the total number of computer science faculty : "<<endl;
			cin>>totalfaculty;
			cout<<"tell me the total number of courses : "<<endl;
			cin>>totalcourse;
			
		}
		void displaydata()
		{
			cout<<" total number of computer science faculty : "<<totalfaculty<<endl;
			cout<<" total number of computer science courses : "<<totalcourse<<endl;
		}
			
};
int main()
{
	computerscience cs;
	cs.inputdata();
	cs.showdata();
	cs.getdata();
	cs.displaydata();
	return 0;
}
