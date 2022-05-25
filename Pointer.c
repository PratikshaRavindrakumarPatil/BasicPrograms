#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	
	printf("The value of a  :%d\n",a);
	printf("The address of a:%d\n",&a);
	printf("The value of p  :%d\n",p);
	printf("The value of *p :%d\n",*p);
	printf("The size of a   :%d\n",sizeof(a));
	printf("The size of *p  :%d\n",sizeof(*p));
	printf("The size of p   :%d\n",sizeof(p));
	return 0;
}