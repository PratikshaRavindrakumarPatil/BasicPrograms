#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int *p)
		{
			cout<<"First defination\n";
		}
		void fun(float *p)
		{
			cout<<"Second defination\n";
		}
		void fun(int no)
		{
			cout<<"Third defination\n";
		}
};
int main()
{
	int no=10;
	float f=3.14;
	
	Demo obj;
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);
	return 0;
}