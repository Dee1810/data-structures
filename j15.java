import java.util.*;
class a extends Thread
{
public void run()
{
  for(int i=0;i<5;i++)
  {if(i==1)yield();
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
  if(i==3)stop();
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
  if(i==1)
  try{
  sleep(1000);
  }
catch(Exception e){}

  }
  System.out.println("Exit from Thread C");
  }
  
  }
  class j15
  {
  public static void main(String args[])
  {
   a A=new a();
   //Thread x=new Thread(A);
   //x.start();
   A.start();
   b B=new b();
   //Thread y=new Thread(B);
   //y.start();
   B.start();
   c C=new c();
   //Thread z=new Thread(C);
   
   C.start();
   }
   }
  
