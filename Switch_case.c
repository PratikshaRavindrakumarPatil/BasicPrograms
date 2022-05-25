#include<stdio.h>
int main()
{
	
	int iStd=0;
	printf("Enter your standard:\n");
	scanf("%d",&iStd);
	
	switch(iStd)
	{
		
		case 1:
			printf("Your exam at 8\n");
			break;
		
		case 2:
			printf("Your exam at 9\n");
			break;

		case 3:
			printf("Your exam at 10\n");
			break;
		
		
		case 4:
			printf("Your exam at 11\n");
			break;
			
		case 5:
			printf("Your exam at 12\n");
			break;
			
		default:printf("Invalid Standard");	
	}
	
	return 0;
}
