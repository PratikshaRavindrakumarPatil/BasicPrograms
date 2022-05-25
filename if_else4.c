#include<stdio.h>
int main()
{
	int iAge=0;
	printf("Enter your age:\n");
	scanf("%d",&iAge);
	
	if(iAge>18)
	{
		printf("Eligible for votting");
	}
	else
	{
		printf("Not eligible for votting");
		
	}
	return 0;
}