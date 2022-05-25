#include<stdio.h>
const float Pi=3.14;
float Area_circle(int r)
{
	float Ret=0.0;
	Ret=r*Pi;
	
	return Ret;
	
}

int main()
{
	int radius=0;
	
	float Area=0.0;
	printf("Enter the radius of circle:");
	scanf("%d",&radius);
	
	Area=Area_circle(radius);
	
	printf("Area of circle=%f",Area);
	return 0;
}