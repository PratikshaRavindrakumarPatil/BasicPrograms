import java.lang.*;

class Base1
{
	public int i,j;
	
	public Base1()
	{
		System.out.println("inside Base1 constructor");
	}
	
	public void fun()
	{
		System.out.println("Inside fun");
	}
	
	public void fun(int k)
	{
		System.out.println("function overloading -Inside fun");
		
	}
	
	public void gun()
	{
		System.out.println("Inside gun");
	}
	
}

class Derived extends Base1
{
	public int x,y;
	
	public Derived()
	{
		System.out.println("Inside derived constructor");
		
	}
	
	public void sun()
	{
		System.out.println("Inside sun");
		
	}
	
}
	
class inheritance11 
{
	public static void main(String arg[])
	{
		Derived dobj=new Derived();
		dobj.fun();
		dobj.fun(11);
		dobj.gun();
		dobj.sun();
	}
}