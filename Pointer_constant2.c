#include<stdio.h>
int main()
{
	const int no=20;
	const int *p=&no;
	
	//no++;
	printf("*p=%d\n",*p);

	return 0;
}