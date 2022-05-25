#include<stdio.h>
int Substraction(int,int);
int main()
{
	int Num1=0,Num2=0,Ans=0;
	
	printf("Enter the first number:");
	scanf("%d\n",&Num1);
	printf("Enter the second number:");
	scanf("%d\n",&Num2);
	
	Ans=Substraction(Num1,Num2);
	printf("Subtraction of two number is :%d\n",Ans);
	return 0;	
}

int Substraction(int num1,int num2)
{
	int Substraction=0;
	Substraction=num1-num2;
	return Substraction;
}
