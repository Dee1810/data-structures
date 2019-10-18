import java.util.*;
class delimiter
{
public static void main(String args[])
{
  Scanner s=new Scanner(System.in);
  String str=s.nextLine();
  //String a[]=new String[2];
  String a[]=str.split("\\ ");
  //String a1=str.split("\\ ");
  for(String i:a)
  {
    System.out.println(i);
  }
}
}
