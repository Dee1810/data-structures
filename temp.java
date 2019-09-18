import java.util.*;
class Temp
{
 double cityTemp[][]=new double[5][6];
 double maxTemp[]=new double[5];
 double minTemp[]=new double[5];
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
  int day[]=new int[5];
  
   for(int i=0;i<5;i++)
{ maxTemp[i]=cityTemp[i][0];
day[i]=1;
  for(int j=1;j<6;j++)
{
   if(cityTemp[i][j]>maxTemp[i])
{
   maxTemp[i]=cityTemp[i][j];
   day[i]=j+1;
}

}
}
for(int i=0;i<5;i++)
{
  System.out.println("Maximum Temperature of "+maxTemp[i]+"recorded in the city "+(i+1)+" on day "+day[i]);
}
}
void min()
{ 
  int day[]=new int[5];
  
   for(int i=0;i<5;i++)
{ minTemp[i]=cityTemp[i][0];
day[i]=1;
  for(int j=1;j<6;j++)
{
   if(cityTemp[i][j]<minTemp[i])
{
   minTemp[i]=cityTemp[i][j];
   day[i]=j+1;
}

}
}
for(int i=0;i<5;i++)
{
  System.out.println("Minimum Temperature of "+minTemp[i]+"recorded in the city "+(i+1)+" on day "+day[i]);
}
}

}
class temp{
public static void main(String args[])
{
Temp t=new Temp();
t.read();
t.display();
t.max();
t.min();
}
}

