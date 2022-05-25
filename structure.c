#include<stdio.h>
struct Demo
{
	int a;
	float b;
	int c;
};
int main()
{
	
	
	struct Demo obj;
	
	obj.a=10;
	obj.b=20.20;
	obj.c=30;
	
	printf("a=%d\n",obj.a);
	printf("b=%f\n",obj.b);
	printf("c=%d\n",obj.c);
	return 0;
}