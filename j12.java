class a implements Runnable
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
  class b implements Runnable
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
  class c implements Runnable
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
  class j12
  {
  public static void main(String args[])
  {
   a A=new a();
   Thread x=new Thread(A);
   x.start();
   //A.start();
   b B=new b();
   Thread y=new Thread(B);
   y.start();
   c C=new c();
   Thread z=new Thread(C);
   
   z.start();
   }
   }
  
