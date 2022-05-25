#include<stdio.h>
int main()
{
	const int no=20;
	const int *const p=&no;
	
	//no++;
	printf("*p=%d\n",*p);
	//p++;

	return 0;
}