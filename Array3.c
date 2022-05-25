#include<stdio.h>
int main()
{
	int iArr[5]={10,20,30,40,50};
	
	printf("iArr[0]=%d\n",iArr[0]);
	printf("iArr[2]=%d\n",iArr[2]);
	printf("iArr[2]=%d\n",*(iArr+2));
	printf("iArr[0]=%d\n",2[iArr]);
	
	
	return 0;
}