#include<iostream>
using namespace std;

class Base
{
	public:
		int i,j;
		static int k;
		
		Base()
		{
			i=10;
			j=20;
		}
		
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};
 
int Base::k=11;

class Derived:public Base
{
	public:
		int x,y;
		
		Derived()
		{
			x=40;
			y=50;
		}
		
		void gun()
		{
			cout<<"Inside Derived gun\n";
		}
};

int main()
{
	Base bobj;
	Derived dobj;
	
	cout<<"size of Base:"<<sizeof(bobj)<<"\n";
	cout<<"size of Derived:"<<sizeof(dobj)<<"\n";
	
	
	cout<<"bobj.i="<<bobj.i<<"\n";
	cout<<"bobj.j="<<bobj.j<<"\n";
	cout<<"dobj.i="<<dobj.i<<"\n";
	cout<<"dobj.j="<<dobj.j<<"\n";
	cout<<"dobj.k="<<dobj.k<<"\n";
	
	
	return 0;
}