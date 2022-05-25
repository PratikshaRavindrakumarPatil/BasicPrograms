import java.lang.*;
import java.util.*;
class Array2
{
	public static void main(String arg[])
	{
		int iCnt=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the size of arrray:");
		int size=sobj.nextInt();
	
		int Arr[]=new int[size];
	
		System.out.println("Elements of array:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
				Arr[iCnt]=sobj.nextInt();
		}
		
		System.out.println("Elemnts of array:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
		
	}
	
}