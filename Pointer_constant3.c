#include<stdio.h>
int main()
{
	int no=20;
	int const *p=&no;
	
	no++;
	printf("*p=%d\n",*p);
	//p++;

	return 0;
}