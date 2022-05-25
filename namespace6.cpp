#include<iostream>
using namespace std;
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
	using namespace First;
	//using namespace Second;
	
	fun();
	return 0;
}