import java.lang.*;

class Demo
{
	public int i,j,x,y;
	
	public Demo()
	{
		System.out.println("Inside default constructor");
		this.i=10;
		this.j=20;
		System.out.println(this.i);
		System.out.println(this.j);
	}
	
	public Demo(int i)
	{
		System.out.println("Inside parameterized constructor");
		this.x=30;
		this.y=40;	
		System.out.println(this.x);
		System.out.println(this.y);
	}
	
	
}	

class Constructor
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		
		Demo obj=new Demo();
		Demo obj1=new Demo(10);
		//Demo(10);
		
		
	}
}