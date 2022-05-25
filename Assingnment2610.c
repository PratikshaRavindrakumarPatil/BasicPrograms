#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size=0,iCnt=0;
	int *p=NULL;
	printf("Enter the number of element:\n");
	scanf("%d",&size);
	
	p=(int*)malloc(size*sizeof(int));
	
	printf("Enter the elemnts:\n");
	for(iCnt=0;iCnt<size;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	printf("Entered element are:\n");
	for(iCnt=0;iCnt<size;iCnt++)
	{
		printf("%d\n",p[iCnt]);
	}
	
	free(p);
	
	return 0;
}