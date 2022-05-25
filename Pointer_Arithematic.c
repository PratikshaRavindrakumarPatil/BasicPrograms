#include<stdio.h>
int main()
{
	int Arr[6]={10,20,30,40,50,60};
	
	int *p=&Arr[2];
	
	int *q=&Arr[5];
	
	int *r=&Arr[0];
	
	p=p+2;//pointer+number
	printf("Value of *p:%d\n",*p);//pointer is at location Arr[5].
	
	p=p+1;
	printf("Value of *p:%d\n",*p);
	
	
	q=q-p;
	printf("Value of *q:%d\n",*q);
	return 0;
}