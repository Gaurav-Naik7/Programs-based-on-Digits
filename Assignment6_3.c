//Program which accepts number from user and count the frequency of 2

#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
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
		if(iDigit==2)
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
	
	iRet=CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}