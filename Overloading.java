import java.lang.*;

class Demo
{
	public int Add(int i,int j)
	{
		return i+j;
	}
	public int Add(int i,int j,int k)
	{
		return i+j+k;
	}
	public int Add(int i,int j,int k,int m)
	{
		return i+j+k+m;
	}
}

class Overloading
{
	public static void main(String arg[])
	{
			Demo obj=new Demo();
			
			int ret=0;
			ret=obj.Add(10,11);
			System.out.println(ret);
			
			ret=obj.Add(10,11,20);
			System.out.println(ret);
			
			ret=obj.Add(10,11,20,30);
			System.out.println(ret);
	}
}