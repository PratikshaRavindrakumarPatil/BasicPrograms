#include<stdio.h>
int main()
{
	static int roll_no;
	printf("Enter the roll no 1st student:");
	scanf("%d",&roll_no);
	
	roll_no++;
	printf("Roll no of 2nd student:%d\n",roll_no);
	roll_no++;
	printf("Roll no of 3rd student:%d\n",roll_no);
	roll_no++;
	printf("Roll no of 4th student:%d\n",roll_no);
	return 0;
}