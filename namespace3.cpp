#include<iostream>

namespace Marvellous
{
	void fun()
	{
		std::cout<<"Inside fun Marvellous \n";
	}
	
}
namespace Infosystem
{
	void fun()
	{
		std::cout<<"Inside fun Infosystem \n";
	}
	
}

int main()
{
	
	std::cout<<"Jay Ganesh...\n";
	
	using namespace Marvellous;
	using namespace Infosystem;
	
	Infosystem::fun();
	return 0;
}
