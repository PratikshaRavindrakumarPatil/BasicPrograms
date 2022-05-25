#include<iostream>
using namespace std;

class Demo 
{
	public:
		int a;
		const int b;
		
		Demo():b(20)
		{
			cout<<"Inside default constructor\n";
			a=10;
			//b=20;
			a++;
			//b++;
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
		void fun()
		{
			cout<<"Inside fun\n";
			a++;
			cout<<"a="<<a<<"\n";
		}
		void gun() const
		{
			cout<<"Inside constant gun\n";
			//a++;
			//cout<<"a="<<a<<"\n";
			int i=21;
			const int j=51;
			
			i++;
			cout<<"i="<<i<<"\n";
			
			//j++;
			cout<<"j="<<j<<"\n";
		}
	
};
int main()
{
	Demo obj;
	obj.fun();
	obj.gun();
	
	const Demo obj1;
	//obj1.fun();
	obj1.gun();
	
	return 0;
}