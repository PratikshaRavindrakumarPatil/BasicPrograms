#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		void fun()
		{
			cout<<"Base fun \n";
		}
		
		void gun()
		{
			cout<<"Base gun \n";
		}
		
};

class Derived:public Base
{
	
	public:
		int i,j;
		
		void sun()
		{
			cout<<"Derived sun \n";
		}
		
		void fun()
		{
			cout<<"Derived fun\n";
		}
};


int main()
{
	
	
	//Base *bp=new Base();
	//Derived *dp=new Derived();
	
	Base *bp=new Derived(); // Upcasting 
	//Derived *dp1=new Base();//downcasting
	
	bp->fun();
	bp->gun();
	//bp->sun();// Not allowed
	
	cout<<"Size of base:"<<sizeof(Base)<<"\n";
	cout<<"Size of Derived:"<<sizeof(Derived)<<"\n";
	
	
	return 0;
}


