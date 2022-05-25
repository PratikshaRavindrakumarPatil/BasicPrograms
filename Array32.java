import java.lang.*;
import java.io.*;
class Array32
{
	public static void main(String arg[]) throws IOException
	{
		int iCnt=0;
		
		
		InputStreamReader iobj=new InputStreamReader(System.in);
		BufferedReader bobj=new BufferedReader(iobj);
		
		System.out.println("Enter the size of array:");
		int iSize=Integer.parseInt(bobj.readLine());
	
		int arr[]=new int[iSize];
		System.out.println("Enter the element of array:");
		for(iCnt=0;iCnt<arr.length;iCnt++)
		{
			int[] arr=Integer.parseInt(bobj.readLine());
		}
	
	}
}