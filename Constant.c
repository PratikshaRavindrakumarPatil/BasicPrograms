#include<stdio.h>
float area=0.0;
int Area()
{
	int R=11;
	const float pi=3.14;
	
	
	
	area=pi*R*R;
	return area;
}
int main()
{
	
	Area();
	
	printf("area of circle is:%f\n",area);
	return 0;
}