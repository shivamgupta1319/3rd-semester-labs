#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h;
	public:
	    void setdata(int l,int b,int h)
		{
			this->l=l;
			this->b=b;
			this->h=h;
		}
		void show()
		{
			cout<<"lenght = "<<l<<endl;
			cout<<"breath = "<<b<<endl;
			cout<<"height = "<<h<<endl;
		}
				
};
int main()
{
	box *p,smallbox;
	p=&smallbox;
	p->setdata(10,20,30);
	p->show();
	return 0;
}
