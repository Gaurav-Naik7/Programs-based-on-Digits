// Program to accept number from user and display digits in reverse order

#include<stdio.h>

void displayDigits(int iNo)
{
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number : \n");
	scanf("%d",&iValue);
	
	displayDigits(iValue);
	
	return 0;
}