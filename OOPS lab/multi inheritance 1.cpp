#include<iostream>
using namespace std;
class student              
{
	protected:
		char name[30];
		int age;
		char gender;
	public:
		void inputdata()
		{
			cout<<"entre teacher name : "<<endl;
			cin>>name;
			cout<<"entre teacher age : "<<endl;
			cin>>age;
			cout<<"entre teacher gender : "<<endl;
			cin>>gender;
		}
		void showdata()
		{
			cout<<" your name : "<<name<<endl;
			cout<<" your name : "<<age<<endl;
			cout<<" your name : "<<gender<<endl;
		}
			
};
class teacher
{
		protected:
		char name[30];
		int age;
		char gender;
	public:
		void takedata()
		{
			cout<<"entre your name : "<<endl;
			cin>>name;
			cout<<"entre your age : "<<endl;
			cin>>age;
			cout<<"entre your gender : "<<endl;
			cin>>gender;
		}
		void show()
		{
			cout<<" teacher name : "<<name<<endl;
			cout<<" teacher age : "<<age<<endl;
			cout<<" teacher gender : "<<gender<<endl;
		}
};
class computerscience:public student,public teacher
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
	cs.takedata();
	cs.show();
	return 0;
}
