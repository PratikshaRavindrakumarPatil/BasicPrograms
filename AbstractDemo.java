import java.lang.*;


abstract class RBI
{
	public int Balence;
	public RBI()
	{
		this.Balence=0;
	}
	
	public void Credit(int Amount)
	{
		this.Balence=this.Balence+Amount;
	}
	public void Debit(int Amount)
	{
		this.Balence=this.Balence-Amount;
	}
	
	public abstract int CalculateIntrest();
	
	
}

class SBI extends RBI
{
	public int AccountNumber;
	public int IFSC;
	
	
	public int CalculateIntrest()
	{
		return 6;
	}
}

class PNB extends RBI
{
	public int AccountNumber;
	public int IFSC;
	
	
	public int CalculateIntrest()
	{
		return 7;
	}
	
}


class AbstractDemo
{
	public static void main(String arg[])
	{
		PNB pobj=new PNB();
		SBI sobj=new SBI();
		
		
		pobj.Credit(1000);
		pobj.Debit(200);
		System.out.println(pobj.Balence);
		
	}
}