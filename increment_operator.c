#include<stdio.h>
int main()
{
	int iNum1=0,iNum2=0,Ans=0;
	printf("Enter the value of iNum1:");
	scanf("%d",&iNum1);
	Ans=iNum1++;
	
	printf("Value of Ans:%d\n",Ans);
	printf("Value of iNum1++:%d\n\n",iNum1);
	
	
	printf("Enter the value of iNum2:");
	scanf("%d",&iNum2);
	Ans=++iNum2;
	
	printf("Value of Ans:%d\n",Ans);
	printf("Value of iNum2:%d",iNum2);
	
	
	return 0;
}