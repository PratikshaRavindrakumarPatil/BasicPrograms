import java.lang.*;

class Array3
{
	public static void main(String arg[])
	{
		int i=0,j=0;
		int arr[][]=new int[2][3];
		 
		arr[0][0]=11;
		arr[0][1]=21;
		arr[0][2]=51;
		arr[1][0]=101;
		arr[1][1]=151;
		arr[1][2]=201;
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.println(arr[i][j]);
			}
		}
	}
}