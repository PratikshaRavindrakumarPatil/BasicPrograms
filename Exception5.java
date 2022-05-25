import java.lang.*;
import java.util.*;

class Demo
{
	public int Division(int no1,int no2) throws ArithmeticException
	{
		return no1/no2;
	}
	
}

class Exception5
{
	public static void main(String arg[])
	{
		
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the 1 number");
		int no1=sobj.nextInt();
		
		System.out.println("Enter the 2 number");
		int no2=sobj.nextInt();
		
		Demo obj=new Demo();
		try
		{
			int ret=obj.Division(no1,no2);
			System.out.println("Division is:"+ret);
		}
		
		catch(ArithmeticException obj1)
		{
			System.out.println("Inside catch"+obj1);
		}
		
	}
}