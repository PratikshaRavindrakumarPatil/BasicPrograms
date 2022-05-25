#include<stdio.h>
int main()
{
	int Arr[]={11,21,51,101,151,201};
	int *p=&Arr[0];
	
	p=p+1;
	printf("p+1=%d\n",p);
	
	return 0;
}