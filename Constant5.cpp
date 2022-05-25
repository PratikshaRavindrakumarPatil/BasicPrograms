#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		
		
		Demo(int a,int b):j(b)
		{
			i=a;
		}
		
		void fun()
		{
			
			cout<<"Inside fun\n";
			i++;//allowed
			cout<<"i="<<i<<"\n";
			//j++;  not allowed
		}
		
		void gun(int a,const int b) const
		{
			int x=10;
			const int y=20;
			cout<<"Inside gun\n";
			
			
			//i++;//Not allowed
			//j++;
			
			x++;//allowed
			//y++;//not allowed
			
			a++;
			//b++;
		}
};	
int main()
{
	Demo obj(11,21);
	
	//obj.fun();
	//obj.gun();
	
	return 0;
}
