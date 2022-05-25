#include<stdio.h>
int iNum1=0,iNum2=0;
void Max()
{
	if(iNum1>iNum2)
	{
		printf("First number is maximum.\n");
	}
	else
	{
		printf("Second number is maximum.\n");
	}
}
int main()
{
	
	
	printf("Enter the first number:\n");
	scanf("%d",&iNum1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iNum2);
	
	Max();
	
	return 0;
}
