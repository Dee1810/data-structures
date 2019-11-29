class a extends Thread
{
synchronized public void run()
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
synchronized public void run()
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
synchronized public void run()
{
  for(int i=0;i<5;i++)
  {
  System.out.println("From Thread C="+i);
  }
  System.out.println("Exit from Thread C");
  }
  
  }
  class j16
  {
  public static void main(String args[])
  {
   a A=new a();
    b B=new b();
    c C=new c();
    A.setPriority(Thread.MAX_PRIORITY);
   //B.setPriority(A.getPriority()+1);
   C.setPriority(Thread.MIN_PRIORITY);
   System.out.println(A.getPriority());
   A.start();
  
   B.start();
   
   C.start();
   }
   }
  
