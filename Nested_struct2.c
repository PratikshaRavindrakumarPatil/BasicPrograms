#include<stdio.h>

struct Hello
{
	int i;
	int j;
	
	struct Demo
	{
		int a;
		int b;
		float c;
	
	}obj1;
	
	
}obj2;
int main()
{
	//struct Demo obj1;
	//struct Hello obj2;
	
	printf("size of Hello:%d\n",sizeof(obj2));
	printf("size of Demo:%d\n",sizeof(obj2.obj1));
	
	return 0;
}
