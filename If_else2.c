#include<stdio.h>
int main()
{
	int iStd=0;
	printf("Enter your standared:\n");
	scanf("%d",&iStd);
	
	if(iStd==1)
	{
			printf("Your exam at 8\n");
	}
	
	else if(iStd==2)
	{
			printf("Your exam at 9\n");
	}
	
	else if(iStd==3)
	{
			printf("Your exam at 10\n");
	}
	
	
	else if(iStd==4)
	{
			printf("Your exam at 11\n");
	}
	
	
	else if(iStd==5)
	{
			printf("Your exam at 12\n");
	}
	
	else
	{
		printf("Invalid standard \n");
	}
	return 0;
}