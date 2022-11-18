// Program which accepts number from user and return multiplication of all digits

import java.io.*;
import java.util.*;

class Assignment49_4
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int ino=sobj.nextInt();
		
		Digit obj=new Digit();
		iRet=obj.Multiply(ino);
		System.out.println(iRet);
	}
}

class Digit
{
	public int Multiply(int iNo)
	{
		int iDigit=0,iMult=1;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iMult=iMult*iDigit;
			iNo=iNo/10;
		}
		return iMult;
	}
}
