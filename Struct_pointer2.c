#include<stdio.h>

struct Demo
{
	int a;
	int b;
	struct Demo *p;
};

int main()
{
	struct Demo obj;
	obj.a=10;
	obj.b=20;
	
	struct Demo *p=NULL;
	
	p=&obj.a;
	printf("a=%d\n",*p);
	
	p=&obj.b;
	printf("b=%d\n",*p);
	
	return 0;
}