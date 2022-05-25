import java.lang.*;

class Base
{
	public int i,j;
	
	
	public void fun()
	{
		System.out.println("Inside base fun");
	}
	
	public void gun()
	{
		System.out.println("Inside base gun");
	}
}

class Derived1 extends Base1
{
	public int k,l;
	
	public void mun()
	{
		System.out.println("Inside derived1 mun");
	}
	
	public void sun()
	{
		System.out.println("Inside derived1 sun");
	}
}

class Derived2 extends Derived1
{
	public int m;
	
	public void run()
	{
		System.out.println("Inside derived2 run");
	}
}

class inheritance33
{
	public static void main(String arg[])
	{
		Derived2 dobj=new Derived2();
		dobj.fun();
		dobj.gun();
		dobj.mun();
		dobj.sun();
		dobj.run();
	}
}