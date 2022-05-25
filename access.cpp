#include<iostream>

using namespace std;
class Demo
{
	public:
		int x;
	private:
		int y;
		
	public:
		Demo()
		{
				x=10;
				y=20;
		}
		void gun()
		{
			cout<<"inside public fun\n";
			cout<<y<<"\n";
			fun();
		}
	private:
		void fun()
		{
			cout<<"Inside fun";
			cout<<y<<"\n";
		}
};
int main()
{
	Demo obj;
	obj.gun();

	return 0;
}