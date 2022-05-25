#include<stdio.h>
struct Hello
{
	const int i;
	int j;
};
int main()
{
	struct Hello obj={10};
	//obj.i=10;
	printf("i=%d\n",obj.i);
	//i++;
	
	
	obj.j=20;
	printf("j=%d\n",obj.j);
	obj.j++;
	printf("j=%d\n",obj.j);
	return 0;
}	