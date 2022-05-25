#include<stdio.h>
int main()
{
	int iChoice=0;
	printf("Enter your choice:");
	scanf("%d",&iChoice);
	
	switch(iChoice)
	{
		case 1:printf("your standard is 1st\n");
			   break;
		case 2:printf("your standard is 2nd\n");
			   break;	
		case 3:printf("your standard is 3rd\n");
			   break;	
		case 4:printf("your standard is 4th\n");
			   break;
		case 5:printf("your standard is 5th\n");
			   break;
			   
		default:printf("Default case.");
	}
	return 0;
}