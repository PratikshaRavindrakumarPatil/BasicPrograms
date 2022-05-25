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
		
		Demo(int a,int b):i(a),j(b)
		{
			cout<<"Inside parameterized\n";
		}
};	
int main()
{
	Demo obj(11,21);
	cout<<"i="<<obj.i<<"\n";
	cout<<"j="<<obj.j<<"\n";
	
	return 0;
}
