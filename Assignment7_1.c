// Program which accepts number from user and return the count of even digits

#include<stdio.h>

int countEven(int iNo)
{
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		if(iNo%2==0)
		{
			iSum=iSum+1;	
		}
		iNo=iNo/10;
	}
	
	return iSum; 
}

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	iCount=countEven(iValue);
	
	printf("%d",iCount);
	return 0;
}