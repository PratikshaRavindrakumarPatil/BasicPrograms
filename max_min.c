#include<stdio.h>
int main()
{
	int Max_size=100,size=0,min=0,max=0,iCnt=0;
	int arr[Max_size];
	
	printf("size of array:\n");
	scanf("%d",&size);
	
	printf("Element of array:\n");
	for(iCnt=0;iCnt<size;iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	
	
	max=arr[0];
	min=arr[0];
	
	for(iCnt=1;iCnt<size;iCnt++)
	{
		if(arr[iCnt]>max)
		{
			max=arr[iCnt];
		}
		if(arr[iCnt]<min)
		{
			min=arr[iCnt];
		}
	}
	
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	return 0;
}