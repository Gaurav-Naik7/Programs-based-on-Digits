// Program which accepts number from the user and counts the digits between 3 and 7

#include<stdio.h>

int countRange(int iNo)
{
	int iDigit=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>3 && iDigit<7)
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
	
	iCount=countRange(iValue);
	
	printf("%d",iCount);
	return 0;
}