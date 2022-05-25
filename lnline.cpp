#include<iostream>
using namespace std;
class Demo
{
	
	public:
		int  Add(int no1,int no2)
		{
			int Ans=0;
			Ans=no1+no2;
			return Ans;
		}
		
};
int main()
{
	Demo obj;
	
	cout<<"size of obj:"<<sizeof(obj)<<"\n";  //1
	int ret=0;
	
	ret=obj.Add(10,11);
	cout<<"ret="<<ret<<"\n";
}