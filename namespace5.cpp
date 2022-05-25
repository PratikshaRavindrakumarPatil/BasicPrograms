#include<iostream>
namespace Pratiksha
{
	void Hello()
	{
		std::cout<<"Welcome to namespace Pratiksha\n";
	}
}
int main()
{
	//using namespace Pratiksha;
	Pratiksha::Hello();
	
	return 0;
}