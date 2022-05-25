#include<stdio.h>

struct Demo
{
	int a;
	float b;
	int c;
	
	//struct Demo *p;     self referential structure
};


int main()
{
	struct Demo obj1;
	struct Demo *p=&obj1;
	
	p->a=10;
	p->b=20.2020;
	p->c=20;
	
	printf("a=%d\n",p->a);
	printf("b=%f\n",p->b);
	printf("c=%d\n",p->c);
	
	return 0;
}