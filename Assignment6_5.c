// Program which accepts number from user and count the frequency of digits less than 6

#include<stdio.h>
#include<stdbool.h>

int CountLtSix(int iNo)
{
	int iDigit=0;
	int ifreq=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			ifreq=ifreq+1;
		}
		iNo=iNo/10;
	}
	return ifreq;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter a number : \n");
	scanf("%d",&iValue);
	
	iRet=CountLtSix(iValue);
	
	printf("%d",iRet);
	
	return 0;
}