import java.lang.*;
import java.util.*;

class AL
{
	public static void main(String arg[])
	{
		ArrayList <String>obj=new ArrayList<String>();
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
		
		
		obj.clear();
		
	}
}
