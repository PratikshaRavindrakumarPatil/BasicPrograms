import java.lang.*;
import java.util.*;

class LL
{
	public static void main(String arg[])
	{
		LinkedList <String>obj=new LinkedList<String>();
		obj.add("Janevary");
		obj.add("Februvary");
		obj.add("Marvellous");
		obj.add("March");
		obj.add("April");
		obj.add(3,"New");
		obj.add("May");
		obj.add("Marvellous");
		obj.add("Marvellous");
		obj.add("Marvellous");

		System.out.println("ArrayList cotains:"+obj);
		
		System.out.println("Size is:"+obj.size());
		
		for(int i=0;i<obj.size();i++)
		{
			System.out.println(obj.get(i));
		}
		
		String str;
		int iCnt=0;
		for(int i=0;i<obj.size();i++)
		{
			System.out.println(obj.get(i));
			str=obj.get(i);
			if(str.equals("Marvellous"))
			{
				iCnt++;
		
			}
		
		}
		
		
		
		if(obj.contains("April"))
		{
			System.out.println("Element is there.");
		}
		
		int ret=obj.indexOf("May");
		System.out.println("Element is at:"+ret);
		
		System.out.println("Element at index at 3 :"+obj.get(3));
		
		obj.remove("New");
		System.out.println("Updated list:"+obj);
		
		Iterator iobj=obj.iterator();
		while(iobj.hasNext())
		{
			
			System.out.println(iobj.next());
		}
		
		
		obj.clear();
		
	}
}
