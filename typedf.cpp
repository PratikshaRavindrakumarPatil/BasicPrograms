#include<iostream>
using namespace std;
int main()
{
	typedef int Number;
	typedef char Letter;
	
	Number no=10;
	Letter ch='A';
	
	cout<<"no="<<no<<"\n";
	cout<<sizeof(no)<<"\n";
	
	cout<<"ch="<<ch<<"\n";
	cout<<""<<sizeof(ch)<<"\n";
	
	typedef const int* Cptr;
	//const int *p=NULL;
	Cptr  p=&no;
	p=&no;
	cout<<"*p="<<*p<<"\n";
	
	return 0;
}