#include<iostream>
using namespace std;
class Base
{
	public:
        int i;      // Characteristics
        int j;
		Base()
		{
			cout<<"Base constructor\n";
		}
		~Base()
		{
			cout<<"Base destructor\n";
		}
		
		
};
class Derived
{
	public:
        int i;      // Characteristics
        int j;
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Derived destructor\n";
		}
		
		
};

int main()
{
	Derived obj1;
    
	return 0;
}
