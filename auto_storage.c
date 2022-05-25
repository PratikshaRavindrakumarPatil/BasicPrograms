#include<stdio.h>
void Demo()
{
	auto int C=30;
	printf("C=%d\n\n",C);
}


int main()
{
	auto int A=10;
	int B=20;
	printf("A=%d\n",A);
	printf("B=%d\n",B);
	
	Demo();
	Demo();
	Demo();
	
	
	return 0;
}
