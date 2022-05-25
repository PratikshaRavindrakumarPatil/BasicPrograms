#include<stdio.h>
int main()
{
	int iAge=0;
	printf("Enter the Age:\n");
	scanf("%d",&iAge);
	
	if(iAge==7)
	{
		printf("you are in first standard");
	}
	else if(iAge==8)
	{
		printf("you are in second standard");
	}
	else if(iAge==9)
	{
		printf("you are in third standard");
	}
	else if(iAge==10)
	{
		printf("you are in 4th standard");
	}
	else if(iAge==11)
	{
		printf("you are in 5th standard");
	}
	else
	{
		printf("out of bound age");
	}
	return 0;
}