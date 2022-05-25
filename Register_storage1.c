#include<stdio.h>
void Demo1()
{
	 register int i;
}
void Demo2()
{
	float j=20.20;
	int i;
	for(i=0;i<=10;i++)
	{
		printf("i=%d\n",i);
	}
}
int main()
{
	
	printf("Inside main...\n\n");
	
	Demo1();
	Demo2();
	
	
	return 0;
}

//register keyword cha output var kahi pharak padat nahi.
//only memory milanyache thikan change hote.
//from stack section to CPU register.