#include<stdio.h>
int main()
{	
	int a=10;
	void *p=NULL;
	
	p=&a;
	
	printf("*p=%d\n",*(int*)p);
	
	return 0;
}