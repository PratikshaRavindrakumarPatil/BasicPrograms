import java.lang.*;

class Demo
{
	public int Arr[];
	
	public Demo(int size)
	{
		System.out.println("Allocating resouces in constructor.");
		this.Arr=new int[size];
	
	}
	protected void finalize()
	{
		System.out.println("Deallocating");
		this.Arr=null;
	
	}
}

class Gc 
{
	public static void main(String arg[])
	{
		Demo dobj=new Demo(10);
		dobj=null;
		System.gc();
		System.out.println("End of main");
	}
}