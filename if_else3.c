#include<stdio.h>
int main()
{
	int iValue=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	if(iValue>0)
	{
		printf("Positive");
	}
	else
	{
		printf("Negative");
	}
	return 0;
}