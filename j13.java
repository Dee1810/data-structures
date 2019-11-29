import java.util.*;
class Square extends Thread
{int x;
Square(int a)
{
x=a;
}
public void run()
{
System.out.println("Square no.:"+(x*x));
}
}
class Cube extends Thread
{int x;
Cube(int a)
{
x=a;
}
public void run()
{
System.out.println("Cube no.:"+(x*x*x));
}
}
class Number extends Thread
{
public void run()
{
Random random=new Random();
for(int i=0;i<5;i++)
{
int n=random.nextInt(100);
System.out.println("Integer generated:"+n);
Square s=new Square(n);
s.start();

Cube c=new Cube(n);
c.start();
try{
 Thread.sleep(1000);
 }
 catch(Exception e)
 {}
 }
 }
 }
class j13
{
public static void main(String args[])
{
Number num=new Number();
num.start();
}
}
