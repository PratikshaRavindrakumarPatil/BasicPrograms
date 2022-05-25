#include<stdio.h>
struct Hello
{
	int Arr[5];
	int Brr[2];
};
int main()
{
	struct Hello obj;
	
	obj.Arr[0]=10;
	obj.Arr[1]=20;
	
	
	printf("size of hello:%d\n",sizeof(obj));
	printf("%d\n",obj.Arr[0]);
	return 0;
}