#include<stdio.h>
int fun()
{
	int a=10;
		printf("Inside fun\n");
		
		return a;
}
int main()
{
	printf("Inside main\n");
	 int b=0;
	int(*pfun)();
	pfun=fun;
	b=pfun;
	
	return 0;
}