#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		//1000
		void fun()	//Concrete non virtual 
		{
			cout<<"Base fun \n";
		}
		
		//2000
		virtual void gun() //concrete virtual
		{
			cout<<"Base gun\n";
		}
		
		//3000
		virtual void sun() //concrete virtual
		{
			cout<<"Base sun \n";
		}
		
		//_____
		virtual void run()=0;	//adstract function
		
};
		
		
class Derived :public Base
{
	public:
		int i,j;
		
		//4000
		void fun()  //Redefination (Concrete)
		{
			cout<<"Derived fun\n";
		}
		
		//5000
		virtual void gun()//Overriding
		{
			cout<<"Derived gun\n";
		}
		
		//6000
		void run()	//Concrete function
		{
			cout<<"Derived run \n";
		}
		
};
int main()
{
	//Base bobj;   Not Allowed
	Derived dobj;
	cout<<"Size of Base :"<<sizeof(Base);
	cout<<"Size of Derived:"<<sizeof(Derived);
	
	
	Base *bp=NULL;
	bp=&dobj;//upcasting
	
	bp->fun();
	bp->gun();
	bp->sun();
	bp->run();
	
	return 0;
}