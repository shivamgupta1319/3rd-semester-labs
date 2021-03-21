#include<iostream>
using namespace std;
class student
{
	private:
	    char name[30];
	    int rollnum;
	    int semester;
	public:
		void getdata()
		{
			cout<<"enter the name :";
			cin>>name;
			cout<<"enter the roll number :";
			cin>>rollnum;
			cout<<"enter the semester :";
			cin>>semester;
			
		}
		void show()
		{
			cout<<" name : "<<name<<endl;
			cout<<" roll number : "<<rollnum<<endl;
			cout<<" semester : "<<semester<<endl;
		}
};
class marks:public student
{
	protected:
		int DSA,OOPS,AEM,SE,DE;
	public:
		void putdata()
		{
			cout<<"enter the marks of DSA : ";
			cin>>DSA;
			cout<<"enter the marks of OOPS : ";
			cin>>OOPS;
			cout<<"enter the marks of AEM : ";
			cin>>AEM;
			cout<<"enter the marks of SE : ";
			cin>>SE;
			cout<<"enter the marks of DE : ";
			cin>>DE;
			
		}
		void showdata()
		{
			cout<<"marks in DSA : "<<DSA<<endl;
			cout<<"marks in OOPS : "<<OOPS<<endl;
			cout<<"marks in AEM : "<<AEM<<endl;
			cout<<"marks in SE : "<<SE<<endl;
			cout<<"marks in DE : "<<DE<<endl;
			
		}
};
class result:public marks
{
	private:
	    int totalmarks;
	    float percentage;
	public:
	    void gettotal()
	    {
	    	totalmarks=DSA+OOPS+AEM+SE+DE;
	    	cout<<"total marks : "<<totalmarks<<endl;
		}
		void getpercentage()
		{
			cout<<"percentage : "<<(totalmarks/500)*100<<endl;
		}
	
};
int main()
{
	
	result student_1;
	student_1.getdata();
	student_1.show();
	student_1.putdata();
	student_1.showdata();
	student_1.gettotal();
	student_1.getpercentage();
	return 0;

}





















