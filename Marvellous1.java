import java.lang.*;

interface Circle
{
	float PI=3.14f;	//public static final PI=3.14f;
	
	float Calculate_Area(float Radius); //public abstract float Calculate_Area(float Radius);
	
	float Calculate_Circumfarence(float Radius);
}

class Area implements Circle
{
	public float Calculate_Area(float Radius)
	{
		return(PI*Radius*Radius);
	}
	
	public float Calculate_Circumfarence(float Radius)
	{
		return(2*PI*Radius);
	}
	
}
class Marvellous1
{
	public static void main(String arg[])
	{
		System.out.println("Value of Pi:"+Circle.PI);
		//Circle.PI=6.14;
		
		Area obj=new Area();
		float fRet=0.0f;
		
		fRet=obj.Calculate_Area(10.5f);
		System.out.println("Area is:"+fRet);
		
		
		fRet=obj.Calculate_Circumfarence(10.5f);
		System.out.println("Circumference is:"+fRet);
		
	}
	
}