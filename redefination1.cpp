#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
	
	
		
		void fun()   //Defination
		{
			cout<"Inside fun \n";
		
		}
		
		void gun()    //  Defination
		{
				cout<"Inside fun \n";
		}
};

class Hello:public Demo
{
	public:
		int x,y;
		
		
		void sun() //   Defination
		{
			cout<<"Inside sun \n";
		}
		
		void gun(int no)  //Re-defination
		{
			cout<<"Inside gun of child \n";
		}
	
};

int main()
{
	Demo obj;
	//obj.fun();
	
	return 0;
}