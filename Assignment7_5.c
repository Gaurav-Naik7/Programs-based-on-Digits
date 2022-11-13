// Program which accepts number from user and returns the difference between summation of even digits and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit=0;
	int iSumEven=0;
	int iSumOdd=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSumEven=iSumEven+iDigit;
		}
		else
		{
			iSumOdd=iSumOdd+iDigit;
		}
		iNo=iNo/10;
	}
	
	return iSumEven-iSumOdd; 
}

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	iCount=CountDiff(iValue);
	
	printf("%d",iCount);
	return 0;
}