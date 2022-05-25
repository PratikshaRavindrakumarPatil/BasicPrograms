#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		int Add(int a,int b)
		{
			return a+b;
		}
		
		virtual int Sub(int a,int b)=0;
	
};
class Derived :public Base
{
	public:
		int i,j;
		
		int Sub(int a,int b)
		{
			return a-b;
			
		}
		 
		int Multi(int a,int b)
		{
			return a*b;
		}
};
int main()
{
	Base *bp=new Derived();
	int ret=0;
	
	ret=bp->Add(11,10);
	cout<<"ret="<<ret<<"\n";
	
	ret=bp->Sub(11,10);
	cout<<"ret="<<ret<<"\n";
	
	//ret=bp->Multi(11,10);
	cout<<"ret="<<ret<<"\n";
	
	return 0;
}