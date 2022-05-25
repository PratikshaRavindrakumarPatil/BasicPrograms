#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
	
	
		void gun()
		{
			cout<<"Inside gun\n";
		}
		void fun()   //Defination
		{
			cout<"Inside fun \n";
		
		}
		
		void fun(int no)    // Overloaded Defination
		{
				cout<"Inside fun \n";
		}
};

int main()
{
	Demo obj;
	obj.fun();
	obj.fun(10);
	
	return 0;
}