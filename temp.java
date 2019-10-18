import java.util.*;
class Temp
{
 double cityTemp[][]=new double[5][6];
 double maxTemp;
 double minTemp;
 Scanner s=new Scanner(System.in);
void read()
{
 for(int i=0;i<5;i++)
{ 
  for(int j=0;j<6;j++)
{
    System.out.println("Enter the temperature on day "+(j+1)+"in city "+(i+1)); 
    cityTemp[i][j]=s.nextDouble();
}
}

}
void display()
{ 
  System.out.println("city  day1  day2  day3  day4  day5  day6");
  for(int i=0;i<5;i++)
{  
System.out.print(i+1+"    ");
  for(int j=0;j<6;j++)
{
    System.out.print(cityTemp[i][j]+"    "); 

}
System.out.println();
}
}
void max()
{ 
  //int day[]=new int[5];
  int m,n,m1,n1;
  maxTemp=cityTemp[0][0];
  minTemp=cityTemp[0][0];
  m=0;n=0;m1=0;n1=0;
   for(int i=0;i<5;i++)
{ 

  for(int j=0;j<6;j++)
{
   if(cityTemp[i][j]>maxTemp)
{
   maxTemp=cityTemp[i][j];
   m=i+1;n=j+1;
}
   if(cityTemp[i][j]<minTemp)
   {
     minTemp=cityTemp[i][j];
     m1=i+1;
     n1=j+1;

}
}
}
  System.out.println("Maximum Temperature of "+maxTemp+"recorded in the city "+m+" on day "+n);



  System.out.println("Minimum Temperature of "+minTemp+"recorded in the city "+m1+" on day "+n1);
}


}
class temp{
public static void main(String args[])
{
Temp t=new Temp();
t.read();
t.display();
t.max();

}
}

