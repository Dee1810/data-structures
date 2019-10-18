import java.util.*;
class Box
{
 double width,height,depth;
 Box()
 {
   this.width=10;
   this.height=10;
   this.depth=10;
 }
 Box(double width,double height,double depth)
 {
   this.width=width;
   this.height=height;
   this.depth=depth;
 }
 double vol()
 {
   return width*height*depth;
 }
}
class constructor
{
  public static void main(String args[])
  {
   Box b1=new Box();
   Box b2=new Box(5,5,5);
   System.out.println("Volume of Box 1:"+b1.vol()+"\nVolume of Box 2: "+b2.vol());
 }
 }
