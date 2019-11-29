import java.util.*;
class Bank
{
  int term=3;
 int getroi()
 {
   return 0;
 }
}
class a extends Bank
{
  int getroi()
  {
    return 6;
  }
}
class b extends Bank
{
 int getroi()
 {
  return 7;
 }
 }
 class j1
 {
 public static void main(String args[])
 {
   float interest,amt;
   a ao=new a();
   b bo=new b();
   Scanner sc=new Scanner(System.in);
   amt=sc.nextFloat();
   interest=amt*ao.term*ao.getroi();
   System.out.println("IN bank 1 interest is "+interest);
   interest=amt*bo.term*bo.getroi();
   System.out.println("IN bank 2 interest is "+interest);
 }}
  
