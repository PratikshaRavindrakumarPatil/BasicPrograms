//check string is palindrome or not


import java.lang.*;
import java.io.*;

class Display
{
	boolean CheckPalindrome(int iNo)
	{
		int iDigit=0;
		int iRet=0;
		int iTemp=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		iTemp=iNo;
		while(iNo>0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
		}
		
		if(iRev==iTemp)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program30
{
	public static void main(String arg[])
	{
		int iValue=0;
		boolean bRet=0;
		
		InputStreamReader iobj=new InputStreamReader(System.in);
		BufferedReader bobj=new BufferedReader(iobj);
		
		System.out.println("Enter the number:");
		try
		{
			iValue=Integer.parseInt(bobj.readLine());
		}
		catch(Exception obj)
		{
		}
		
		Display dobj=new Display();
		bRet= CheckPalindrome(iValue);
		
		if(bRet==true)
		{
			System.out.println(iValue+" is palindrome number.");
		}
		else
		{
			System.out.println(iValue+" is not palindrome number.");
		}
	}
}