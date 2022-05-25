#include<stdio.h>

struct Demo1
{
	int a;
	float b;
	
	struct Demo2
	{
	int c;
	
	
	}dobj2;
};


int main()
{
	
	
	struct Demo1 dobj1={20,30.3030};//member initilization list;
	//struct Demo2 dobj2;
	
	
	dobj1.dobj2.c=40;
	
	
	//dobj1.b=30.3030;
	
	
	
	
	printf("a=%d\n",dobj1.a);
	printf("b=%f\n",dobj1.b);
	
	printf("c=%d\n",dobj1.dobj2.c);
	
	return 0;
}