//Program which accepts number from user and returns the count of odd digits

#include<stdio.h>

int countOdd(int iNo)
{
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		if(iNo%2!=0)
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
	
	iCount=countOdd(iValue);
	
	printf("%d",iCount);
	return 0;
}