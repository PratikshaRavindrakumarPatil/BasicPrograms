import java.lang.*;

class Base
{
	public void fun()
	{
		System.out.println("Inside base fun");
	}
	
	public final void gun()
	{
		System.out.println("Inside base gun");
	}
	
}	


class Derived extends Base
{
	public void fun()  //overriding
	{
		System.out.println("Inside derived fun");
	}
	/*public void gun()
	{
		System.out.println("Inside derived gun");
	}*/
	
}

class Final2
{
	public static void main(String arg[])
	{
		Derived dobj=new Derived();
		
		dobj.fun();
		dobj.gun();
		
	}
}