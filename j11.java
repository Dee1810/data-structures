class a extends Thread
{
public void run()
{
  for(int i=0;i<5;i++)
  {
  System.out.println("From Thread A="+i);
  }
  System.out.println("Exit from Thread A");
  }
  
  }
  class b extends Thread
{
public void run()
{
  for(int i=0;i<5;i++)
  {
  System.out.println("From Thread B="+i);
  }
  System.out.println("Exit from Thread B");
  }
  
  }
  class c extends Thread
{
public void run()
{
  for(int i=0;i<5;i++)
  {
  System.out.println("From Thread C="+i);
  }
  System.out.println("Exit from Thread C");
  }
  
  }
  class j11
  {
  public static void main(String args[])
  {
   a A=new a();
   A.start();
   b B=new b();
   B.start();
   c C=new c();
   C.start();
   }
   }
  
