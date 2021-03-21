#include<iostream>
using namespace std;
class Parent{
public:
void parentMethod( void )
{ 
cout<<"Inside parent method"<<endl;}
};

class Child : private Parent{
public:
void childMethod( void){
cout<<"Inside child method"<<endl;
parentMethod();
}
};
int main( void ){
Child C;
C.childMethod();
return 0;
}
