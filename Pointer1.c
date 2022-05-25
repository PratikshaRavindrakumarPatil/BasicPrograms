#include<stdio.h>
int main()
{
	int iValue =0;
	char cValue=0;
	float fValue=0.0;
	double dValue=0.0;
	
	
	printf("Enter the value of integer:");
	scanf("%d",&iValue);
	
	int *iPtr=&iValue;
	 
	printf("Address of iValue=%d\n",&iValue);
	printf("Address of iPtr=%ld\n",&iPtr);
	printf("Address of *iPtr=%ld\n",&*iPtr);
	printf("Value of iPtr=%d\n",iPtr);
	printf("*iPtr   =%d\n",*iPtr);
	printf("Size of *iPtr=%d\n",sizeof(*iPtr));
	printf("Size of iValue=%d\n",sizeof(iValue));
	printf("Size of iPtr=%d\n",sizeof(iPtr));

	
	printf("\n\n");
	printf("Enter the value of character:");
	scanf("%d",&cValue);
	char *cPtr=&cValue;
	printf("Value of *cPtr=%d\n",*cPtr);
	
	
	printf("\n\n");
	printf("Enter the value of float:");
	scanf("%f",&fValue);
	float *fPtr=&fValue;
	printf("Value of *fPtr:%f\n",*fPtr);
	
	
	printf("\n\n");
	printf("Enter the value of double:");
	scanf("%lf",&dValue);
	double *dPtr=&dValue;
	printf("Value of *dPtr:%lf\n",*dPtr);

	
	return 0;
}