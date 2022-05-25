#include<stdio.h>
struct Hello
{
	int i;
	int j;
};
int main()
{
	const struct Hello obj={10,20};
	//obj.i=10;
	printf("i=%d\n",obj.i);
	//i++;
	
	return 0;
}	