import java.lang.*;

class Demo
{
	
}

class Hashcode
{
	public static void main(String arg[])
	{
			String str1="Marvellous"; 
			String str2="Marvellous";
			String str3="Infosystem";
			Demo dobj=new Demo();
			
			
			System.out.println("Hashcode str1:"+str1.hashCode());
			System.out.println("Hashcode str2:"+str2.hashCode());
			System.out.println("Hashcode str2:"+str3.hashCode());
			System.out.println("Hashcode dobj:"+dobj.hashCode());
			
	
	}
}