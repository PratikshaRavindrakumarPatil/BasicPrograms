#include<iostream>
using namespace std;

class Hello
{
	public:
		void fun();
};
class Demo
{
	public:
		int i;
	protected:
		int j;
	private:
		int k;
		
		
	public:
	
	Demo()
	{
		i=10;
		j=20;
		k=30;
	}
	
	friend void Hello::fun();
};

void Hello::fun()
	{
		Demo obj1;
		cout<<"i="<<obj1.i<<"\n";
		cout<<"j="<<obj1.j<<"\n";
		cout<<"k="<<obj1.k<<"\n";
	}


int main()
{
	
	Hello obj;
	obj.fun();
	return 0;
}