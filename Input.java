import java.lang.*;
import java.util.*;


class Input
{
	public static void main(String a[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Please enter your name:");
		String name=sobj.nextLine();
		
		System.out.println("Please enter your age:");
		int Age=sobj.nextInt();
		
		System.out.println("Please enter your persentage:");
		float percentage=sobj.nextFloat();
		
		System.out.println("Enter your mobile number:");
		long mobile=sobj.nextLong();
		
		System.out.println("Your name is:"+name);
		System.out.println("Your age is:"+Age);
		System.out.println("Your percentage is:"+percentage);
		System.out.println("Your mobile is:"+mobile);
	}
}