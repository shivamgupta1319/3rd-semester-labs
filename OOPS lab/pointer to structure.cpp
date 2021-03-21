#include<iostream>
using namespace std;
struct book
{
	int bookid;
	float price;
};
int main()
{
	book b1,*ptr;
	ptr=&b1;
	cout<<"tell the book id"<<endl;
	cin>>(*ptr).bookid;
	cout<<"tell the book price"<<endl;
	cin>>(*ptr).price;
	cout<<"details of book"<<endl;
	cout<<"book id is="<<(*ptr).bookid<<endl;
	cout<<"book price is="<<(*ptr).price<<endl;
	
		
}

