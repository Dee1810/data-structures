import java.util.*;
import java.lang.*;
class Shapes
{
  int area(int l,int b)
  {
    return(l*b);
  }
  double area(double h,double l)
  {
    return(h*l/2);
  }
  
  double area(double r)
  {
    return(3.14*r*r);
  }
  int area(int side)
  {
    return(side*side);
  }
  double volume(double side)
  {
    return(Math.pow(side,3));
  }
  double volume(double len,double breadth,double height)
  {
    return(len*breadth*height);
  }
  double volume(double r,double h)
  {
    return(3.14*Math.pow(r,2)*h);
  }
}
class shapes
{
 public static void main(String args[])
 {
   Shapes s=new Shapes();
   Scanner obj=new Scanner(System.in);
   int l,b,h,side;double res;
   double r,len,br,height;double result;
   System.out.println("Enter length and breadth of rectangle:");
   l=obj.nextInt();
   b=obj.nextInt();
   res=s.area(l,b);
   System.out.println("Area of rectangle="+res);
   
   System.out.println("Enter length and height of triangle:");
   len=obj.nextDouble();
   height=obj.nextDouble();
   //res=s.area(l,h);
   System.out.println("Area of triangle="+s.area(len,height));
   
   System.out.println("Enter radius of circle:");
   r=obj.nextDouble();
  // int b=obj.nextInt();
    result=s.area(r);
   System.out.println("Area of cirlce="+result);
   
   System.out.println("Enter side of square:");
   side=obj.nextInt();
   //int b=obj.nextInt();
   res=s.area(side);
   System.out.println("Area of square="+res);
   
   System.out.println("Enter side of cube:");
   len=obj.nextDouble();
   //int b=obj.nextInt();
   result=s.volume(len);
   System.out.println("volume of cube="+result);
   
   System.out.println("Enter length and breadth and height of cuboid:");
   len=obj.nextDouble();
   br=obj.nextDouble();
   height=obj.nextDouble();
   result=s.volume(len,br,height);
   System.out.println("Volume of cuboid="+result);
   
   System.out.println("Enter radius and height of cylinder:");
   r=obj.nextDouble();
   //b=obj.nextDouble();
   height=obj.nextDouble();
   result=s.volume(r,height);
   System.out.println("Volume of cylinder="+result);
   }
 }
   
   
   
  
