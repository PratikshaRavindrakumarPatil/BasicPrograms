#include<stdio.h>
int num1=0;
float num2=0.0;
int arr[6];

void Value();
void Adderss();
void Size_of();

int main()
{
	Value();
	Adderss();
	Size_of();
	return 0;
}
void Value()
{
	printf("Enter the value of num1:");
	scanf("%d",&num1);
	
	printf("Enter the value of num2:");
	scanf("%f",&num2);
	printf("\n\n");
	

	
}

void Adderss()
{
	printf("Address of num1:%d\n",&num1);
	printf("Address of num2:%d\n",&num2);
	printf("Address of array Arr:%d\n\n",&arr);
	
}

void Size_of()
{
	printf("Size of num1:%d\n",sizeof(num1));
	printf("Size of num2:%d\n",sizeof(num2));
	printf("Size of array Arr:%d\n",sizeof(arr));
}
	
	
	





