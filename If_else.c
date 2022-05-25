#include<stdio.h>
int main()
{
	int marks=0;
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	printf("Enter the marks are:%d\n",marks);
	if(marks>=60)
	{
		printf("First class\n");
	}
	else
	{
		printf("Not First class\n");
	}
	return 0;
}