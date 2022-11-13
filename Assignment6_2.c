// Program which accepts number from the user and checks whether it contains 0

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return true;
			break;
		}
		iNo=iNo/10;
	}
}

int main()
{
	int iValue=0;
	int bRet=false;
	
	printf("Enter a number : \n");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	
	if(bRet==true)
	{
		printf("It contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	
	return 0;
}