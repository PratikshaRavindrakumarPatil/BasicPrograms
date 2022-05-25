#include<stdio.h>
void gun(); //declaration
int main()
{
	
	void fun()//defination
	{
		printf("Inside the fun.\n");
	}
	
	
	
	fun();	//function call
	gun();	//function call
	return 0;
}

void gun()//defination
{
	printf("Inside the gun.");
}