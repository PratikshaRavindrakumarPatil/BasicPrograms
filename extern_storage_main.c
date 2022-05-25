#include<stdio.h>
extern int A;
extern int Addition();

int main()
{
	printf("A=%d\n",A);
	
	Addition();
	
	
	return 0;
}