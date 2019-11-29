import java.util.*;

class j19
{
public static void main(String args[])
{
 String num=new String("bf");
 
   try{
   int n=Integer.parseInt(num);
   }
   /*try{int a=30/0;
   }*/
   catch(ArithmeticException e)
   {System.out.println("Divide by zero");
   }
catch(NumberFormatException e)
{
 System.out.println("Numberformat error");

 }
 catch(ArrayIndexOutOfBoundsException e)
 {
System.out.println("Numberformat error");

 }
 }
 }
 
 
