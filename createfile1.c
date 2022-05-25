#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[50];
	int fd=0;
	
	printf("Enter the file name that we want to create:\n");
	scanf("%d",fname);
	
	fd=creat(fname,0777);
	if(fd==-1)
	{
		printf("file is not created.\n");
		return -1;
	}
	else
	{
		printf("file is successfully created with fd:%d\n",fd);
	}
	return 0;
	
	return 0;
}