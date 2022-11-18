// Program which accepts number from user and return difference between summation of even digits and summation of odd digits

import java.io.*;
import java.util.*;

class Assignment49_5
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int ino=sobj.nextInt();
		
		Digit obj=new Digit();
		iRet=obj.CountDiff(ino);
		System.out.println(iRet);
	}
}

class Digit
{
	public int CountDiff(int iNo)
	{
		int iDigit=0,iSumE=0,iSumO=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit%2)==0)
			{
				iSumE=iSumE+iDigit;
			}
			else
			{
				iSumO=iSumO+iDigit;
			}
			iNo=iNo/10;
		}
		return (iSumE-iSumO);
	}
}
