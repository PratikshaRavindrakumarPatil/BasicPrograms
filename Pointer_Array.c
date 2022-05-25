#include<stdio.h>
int main()
{
	int Arr[5]={10,20,30,40,50};	
	
	int *p=&Arr[2];
	printf("Value of *p:%d\n",*p);
	printf("Address of Arr[2]:%d\n",&Arr[2]);
	printf("Value of p:%d\n\n\n",p);
	
	
	int *q=&Arr[4];
	printf("Value of *q:%d\n",*q);
	printf("Address of Arr[4]:%d\n",&Arr[4]);
	printf("Value of q:%d\n",q);
	
	
	
	
	return 0;
}