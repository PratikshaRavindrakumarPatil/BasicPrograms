import java.lang.*;


class Marvellous extends Thread
{
	public void run()
	{
		System.out.println("Inside thread:"+Thread.currentThread().getName());
		for(int i=0;i<=1000;i++)
		{
			System.out.println("Thread Scheduled:"+Thread.currentThread().getName()+":"+i);
		}
	
	}
	
}	

class Mythread4
{
	public static void main(String arg[])
	{
		Marvellous mobj1=new Marvellous(); 
		Thread t1=new Thread(mobj1,"First");
		
		Marvellous mobj2=new Marvellous(); 
		Thread t2=new Thread(mobj1,"Second");
		
		t1.start();
		t2.start();
	}
}