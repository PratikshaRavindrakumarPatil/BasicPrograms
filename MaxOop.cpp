#include<iostream>
using namespace std;

class Maximum
{
	public:
		int iNum1;
		int iNum2;
	
		void Max()
		{
			if(iNum1>iNum2)
			{
				cout<<"First number is maximum.\n";
			}
			else
			{
				cout<<" Secend number is maximum.\n";
			}
		}
};

int main()
{
	int iNum1;
	int iNum2;
		
	cout<<"Enter the first number:";
	cin>>iNum1;
	
	cout<<"Enter the first number:";
	cin>>iNum2;
	
	Maximum obj;
	obj.Max();
	
	return 0;
}
