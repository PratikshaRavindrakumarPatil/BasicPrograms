#include<iostream>
using namespace std;
class Base
{
	public:
		int a;
		int b;
		
		 virtual void fun()
		{
			cout<<"Inside base fun\n";
		}
		
		virtual void gun=0;
};

class Derived:public Base
{
	public:
		int x;
		int y;
		
		void fun()
		{
			cout<<"Inside derived fun\n";
		}
		
		
		void gun()
		{
			cout<<"inside derived gun\n";
		}
	
	
};

int main()
{
	
	
	cout<<"inside main\n";
	Derived dobj;
	
	Base *p=new Derived();
	
	p->fun();
	p-.gun();
	return 0;
}