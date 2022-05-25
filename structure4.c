#include<stdio.h>
struct Hello
{
	int i;
	float f;
	int ii;
	
};

int main()
{
	struct Hello hobj1;
	struct Hello *p=&hobj1;
	

	printf("Enter the value of i:\n");
	scanf("%d",&p->i);
	
	printf("Enter the value of f:\n");
	scanf("%f",&p->f);
	
	printf("Enter the value of ii:\n");
	scanf("%d",&p->ii);
	
	printf("i=%d\n",p->i);
	printf("f=%d\n",p->f);
	printf("ii=%d\n",p->ii);
	
	return 0;
}