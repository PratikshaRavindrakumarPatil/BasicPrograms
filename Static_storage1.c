#include<stdio.h>
static int a=10;
void fun()
{
	static int b=20;
	++b;
	printf("Value of b=%d\n",b);
	printf("Address of b=%d\n\n\n",&b);
}
void fun1()
{
	static int c=8;
	c--;
	if(c!=0)
	{
		printf("In fun1 the value of c is:%d\n",c);
		fun1();
	}
}

void fun2()
{
	auto int d=5;
	d--;
	printf("\n\n");
	if(d!=1)
	{
		printf("In fun2 the value of d:%d\n",d);
		fun2();
	}
}
int main()
{
	fun();
	fun();
	
	fun1();
	//fun2();
	return 0;
}