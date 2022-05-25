import java.lang.*;

class Employee
{
	public String name;
	public int Salary;
	
	public Employee(String str,int no)
	{
		this.name=str;
		this.Salary=no;
	}
	public String toString()
	{
		return "Employee name is "+name+" having salary "+Salary;
	}
}

class Object1
{
	public static void main(String arg[])
	{
		Employee eobj=new Employee("Pratiksha",21000);
		System.out.println(eobj.toString());
	}
}