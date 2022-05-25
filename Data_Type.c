#include<stdio.h>

int main()
{
	char ch='a';
	int iNo=10;
	float fNo=10.10;
	double dNo=10.1010;
	
	printf("Size of char:%d\n",sizeof(ch));
	printf("Size of integer:%d\n",sizeof(iNo));
	printf("Size of float:%d\n",sizeof(fNo));
	printf("Size of double:%d\n",sizeof(dNo));
	
	return 0;
}