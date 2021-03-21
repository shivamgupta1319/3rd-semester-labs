#include<iostream>
using namespace std;
class time
{
	private:
		int h,m,s;
	public:
		void getdata()
		{
			cout<<"enter the hours"<<endl;
			cin>>h;
			cout<<"enter the minutes"<<endl;
			cin>>m;
			cout<<"enter the seconds"<<endl;
			cin>>s;
		}
		void showdata()
		{
			cout<<endl<<" hours : "<<h<<endl;
			cout<<" minutes : "<<m<<endl;
			cout<<" seconds : "<<s<<endl<<endl;
		}
		int addtime(time t1,time t2);
		
};
int time::addtime(time t1,time t2)
{
	s=t1.s + t2.s;
	m=t1.m + t2.m + s/60;
	h=t1.h + t2.h + m/60;
	m %=60;
	s %=60;
	return(h,m,s);
	
}
int main()
{
	cout<<"enter the time 1 detailes :-"<<endl;
	time t1;
	t1.getdata();
	t1.showdata();
	cout<<"enter the time 2 detailes :-"<<endl;
	time t2;
	t2.getdata();
	t2.showdata();
	time t3;
	cout<<"add of time 1 and time 2 is :-"<<endl;
	t3.addtime(t1,t2);
	t3.showdata();
	
	return 0;
}
