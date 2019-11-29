class a extends Thread
{
public void run()
{
  for(int i=0;i<5;i++)
  {
  System.out.println("From Thread A="+i);
  }
  Sytem.out.println("Exit from Thread A");
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
  Sytem.out.println("Exit from Thread B");
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
  Sytem.out.println("Exit from Thread C");
  }
  
  }
  class j11
  
