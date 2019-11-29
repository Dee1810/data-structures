interface dis
{int d=100;
 void setdis();}
 interface time
 {
 int t=2;
 void settime();
 }
 class speed implements dis,time
 {
 int dis,tim;
 public void setdis()
 {
 dis=d;
 }
 public void settime()
 {
 tim=t;
 }
 void display()
 {
 setdis();
 settime();
 
  System.out.println("Speed"+dis/tim);
 }
}
class j6
{
public static void main(String args[])
{
speed s=new speed();
s.display();
}
}
 
 
