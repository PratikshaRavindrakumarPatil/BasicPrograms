#include<stdio.h>
int main()
{
	int no=10;
	int *p=&no;
	no++;
	printf("*p=%d\n",*p);
	return 0;
}