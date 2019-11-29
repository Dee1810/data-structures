class A extends Thread
{
   public void run()
  {
  try{
  while(true)
  {
  Thread.sleep(1000);
  System.out.println("Good morning");
  }
}
catch(Exception e)
{}
}
}
class B extends Thread
{
   public void run()
  {
  try{
  while(true)
  {
  Thread.sleep(2000);
  System.out.println("Hello");
  }
}
catch(Exception e)
{}
}
}
class C extends Thread
{
   public void run()
  {
  try{
  while(true)
  {
  Thread.sleep(3000);
  System.out.println("Welcome");
  }
}
catch(Exception e)
{}
}
}
class j14
{
public static void main(String args[])
{
 new A().start();
 new B().start();
 new C().start();
 }
}
