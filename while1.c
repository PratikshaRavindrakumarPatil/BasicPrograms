#include<stdio.h>
int main()
{
	int iNo=0;
	printf("enter the first number:\n");
	scanf("%d",&iNo);
	do
	{
		printf("Next number is:%d\n",iNo);
		iNo++;
	}
	while(iNo<=10);
	return 0;
}