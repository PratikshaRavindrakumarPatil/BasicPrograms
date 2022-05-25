#include<stdio.h>
int C=30;
void Function()
{
	 int A=10;
	printf("A=%d\n",A);
	printf("C=%d\n",C);
}
void Function1()
{
	register int B=20;
	printf("B=%d\n",B);
}

int main()
{
	Function();
	Function();
	
	Function1();
	Function1();
	
	return 0;
}