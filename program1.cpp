#include<iostream>
using namespace std;

class Base
{
	private:
		virtual void fun()
		{
			cout<<"Inside fun\n";
		}
		
		bp->fun();
};
class Derived:public Base
{
	public:
		void fun()
		{
			cout<<"Inside derived fun\n";
		}
};
int main()
{
	Base *bp=new Derived();

	return 0;
}
