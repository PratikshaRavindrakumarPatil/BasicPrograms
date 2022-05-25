import java.lang.*;

class Employee implements Cloneable
{
	public int EID;
	public String EName;
	public int ESalary;
	
	public Employee(int id,String str,int no)
	{
		this.EID=id;
		this.EName=str;
		this.ESalary=no;
	}
	
	public Object clone() throws CloneNotSupportedException
	{
		return super.clone();
	}
}

class Copy
{
	public static void main(String arg[])  throws Exception
	{
		Employee eobj=new Employee(11,"Pratiksha",40000);
		System.out.println("EID:"+eobj.EID+" Name:"+eobj.EName+" Salary:"+eobj.ESalary);
		
		
		Employee eobjX=(Employee)eobj.clone();
		System.out.println("EID:"+eobjX.EID+" Name:"+eobjX.EName+" Salary:"+eobjX.ESalary);
		
		eobj.EName="Ira";
		System.out.println("EID:"+eobjX.EID+" Name:"+eobjX.EName+" Salary:"+eobjX.ESalary);
	}
}