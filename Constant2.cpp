#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		Demo():j(20) //Member initailization
		{
			i=10;
			//j=20;
		}
};	
int main()
{
	Demo obj;
	cout<<"i="<<obj.i<<"\n";
	cout<<"j="<<obj.j<<"\n";
	return 0;
}
