import java.lang.*;

class Demo
{
	public int i,j,x,y;
	
	public void fun()
	{
		System.out.println("Inside fun");
		
	}
	
	public void gun()
	{
		System.out.println("Inside gun");
		
	}
	
}

class Encapsulation
{
	public static void main(String arg[])
	{
			Demo obj=new Demo();
			obj.fun();
			obj.gun();
	}
}