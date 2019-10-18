class Outer
{
 int x=10;
 void test()
 {
  Inner i=new Inner();
  i.display();
 }
 class Inner
 {
  void display()
  {
   System.out.println(x);
   }
  }
  }
  class nestedclass
  {
   public static void main(String args[])
   { 
   Outer o=new Outer();
   o.test();
   }
   }
