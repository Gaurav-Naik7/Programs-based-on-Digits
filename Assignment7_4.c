// Program which accepts number from user and returns multiplication of all digits

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0;
	int iMult=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iDigit*iMult;
		iNo=iNo/10;
	}
	
	return iMult; 
}

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	iCount=MultDigits(iValue);
	
	printf("%d",iCount);
	return 0;
}