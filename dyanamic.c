#include<stdio.h>
#include<stdlib.h>

int main()
{
	int iNo=0;
	int *ptr=NULL;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iNo);
	
	ptr=(int*)calloc(iNo ,(sizeof(int)));
	if(ptr==NULL)
	{
		printf("-----\n");
	}
	else
	{
		printf("++++\n");
	}
	
	free(ptr);
	return 0;
}