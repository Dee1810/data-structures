abstract class fig
{
  double a,b;
  fig(double a,double b)
  {
    this.a=a;
    this.b=b;
  }
  abstract double area();
  abstract void display();
}
class rec extends fig
{
rec(double a,double b)
{
super(a,b);
}
double area()
{
return a*b;
}
void display()
{
  System.out.println("Rec:"+area());
}
}
class cir extends fig
{
cir(double a,double b)
{
super(a,b);
}
double area()
{
return 3.14*a*a;
}
void display()
{
  System.out.println("Cir:"+area());
}
}
class triangle extends fig
{
triangle(double a,double b)
{
super(a,b);
}
double area()
{
return 0.5*a*b;
}
void display()
{
  System.out.println("Tri:"+area());
}
}
class j7
{
public static void main(String args[])
{
//fig f=new fig(0,0);
rec r=new rec(2,3);
triangle t=new triangle(2,3);
cir c=new cir(2,0);
fig fref;
fref=r;
fref.display();
/*f=new triangle(3,4);
f.display();*/
r.display();
t.display();
c.display();
}
}
