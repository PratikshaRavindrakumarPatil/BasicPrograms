#include<stdio.h>

void fun(int I)
{
	auto int i;
	auto int k=20;
	int j=30;
	
	printf("Scope of auto storage class variable starts from function fun.\n\n");
	
	printf("The value of uninitailized variable i:%d\n\n",i);
	
	
	printf("The scope of storage class variable end with function fun.\n\n");
	
}


int main()
{
	fun(100);
	return 0;
}