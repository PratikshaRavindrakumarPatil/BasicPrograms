#include<stdio.h>
//////////////////////////
//
//Function Name  :Addition 
//input          :Two integer
//output         :integer
//Discrption     :Addition of two number
//Author         :Pratiksha Ravindrakumar Patil
//Date           :11-03-2022
//
/////////////////////////////////
int Addition(int iNo1,int iNo2)
{
	int iRet=0;
	iRet=iNo1+iNo2;
	
	
	return iRet;	
}

int main()
{
	int iNum1=0,iNum2=0;
	int iSum=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iNum1);
	
	
	printf("Enter the second number:\n");
	scanf("%d",&iNum2);
	
	
	//iSum=Addition(iNum1,iNum2);
	
	int(*ptr)(int,int);
	ptr=Addition;
	iSum=ptr(iNum1,iNum2);
	
	printf("Addition of two number is:%d\n",iSum);
	
	return 0;
}