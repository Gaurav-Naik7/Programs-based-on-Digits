// Program which accepts number from user and return count of even digits

import java.io.*;
import java.util.*;

class Assignment49_1
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int ino=sobj.nextInt();
		
		Digit obj=new Digit();
		iRet=obj.CountEven(ino);
		System.out.println(iRet);
	}
}

class Digit
{
	public int CountEven(int iNo)
	{
		int iDigit=0,iSum=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit%2)==0)
			{
				iSum++;
			}
			iNo=iNo/10;
		}
		return iSum;
	}
}
