#include<iostream>
using namespace std;

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
	
	friend void fun();
};
void fun()
{
	Demo obj1;
	cout<<"i="<<obj1.i<<"\n";
	cout<<"j="<<obj1.j<<"\n";
	cout<<"k="<<obj1.k<<"\n";
}

int main()
{
	fun();
	//Demo obj;
	return 0;
}