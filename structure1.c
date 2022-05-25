#include<stdio.h>
struct Demo
{
	int a;
	float b;
};
int main()
{
	struct Demo dobj;
	dobj.a=10;
	printf("a=%d\n",dobj.a);
	
	
	dobj.b=11;
	printf("b=%f\n",dobj.b);
	
	
	printf("size of structure Demo:%d",sizeof(dobj));
	
	return 0;
}