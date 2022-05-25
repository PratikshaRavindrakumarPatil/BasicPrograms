#include<iostream>

using namespace std;
class Base
{
	public:
		int x,y;
		
		virtual void fun()
		{
			cout<<"Base fun \n";
		}
		
		virtual void gun()
		{
			cout<<"Base gun \n";
		}
		void sun()
		{
			cout<<"Base sun \n";
		}
		virtual void run()
		{
			cout<<"Base run \n";
		}
};

class Derived:public Base
{
	
	public:
		int i,j;
		
		void fun()
		{
			cout<<"Derived fun \n";
		}
		virtual void gun()
		{
			cout<<"Derived gun \n";
		}
		void sun()
		{
			cout<<"Derived sun \n";
		}
		
		void mun()
		{
			cout<<"Derived mun\n";
		}
};


int main()
{
	Base *bp=new Derived(); // Upcasting 
	//Derived *dp1=new Base();
	
	bp->fun();
	bp->gun();
	//bp->sun();// Not allowed
	
	cout<<"Size of base:"<<sizeof(Base)<<"\n";
	cout<<"Size of Derived:"<<sizeof(Derived)<<"\n";
	
	
	
	return 0;
}