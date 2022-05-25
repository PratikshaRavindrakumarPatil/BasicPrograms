#include<stdio.h>
int a=10,b=20;
int fun()
{
	printf("inside the fun.\n");
	
	return a+b;
		
}
int main()
{
	printf("Inside main\n");
	void *p=NULL;
	p=&a;
	
	printf("*p=%d\n",*(int*)p);
	int(*fptr)();
	fptr=fun;
	
	fun();
	printf("a+b=%d",a+b);
	return 0;
}