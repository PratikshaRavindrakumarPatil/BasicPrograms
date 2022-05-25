#include<iostream>
using namespace std;

class Hello
{
	public:
		void fun();
		void gun();
		
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
	
	
	friend class Hello;
	//friend void Hello::fun();
	//friend void Hello::gun();
};

void Hello::fun()
	{
		Demo obj1;
		cout<<"i="<<obj1.i<<"\n";
		cout<<"j="<<obj1.j<<"\n";
		cout<<"k="<<obj1.k<<"\n";
	}

void Hello::gun()
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
	obj.gun();
	return 0;
}