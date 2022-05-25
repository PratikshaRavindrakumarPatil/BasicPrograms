#include<iostream>
namespace First
{
	void fun()
	{
		cout<<"Inside first namespace\n";
	}
	
}
namespace Second
{
	void fun()
	{
		cout<<"Inside Second namespace\n";
	}
	
}

int main()
{
	
	fun();
	return 0;
}