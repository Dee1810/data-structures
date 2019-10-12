import java.util.*;
public class ComplexNumber{
   //for real and imaginary parts of complex numbers
   double real, img;
	
   //constructor to initialize the complex number
   ComplexNumber(double r, double i){
	this.real = r;
	this.img = i;
   }
   
	public static ComplexNumber sum(int n, ComplexNumber c2)
   {
	//creating a temporary complex number to hold the sum of two numbers
        ComplexNumber temp = new ComplexNumber(0, 0);

        temp.real = c2.real + n;
        temp.img = c2.img;
        
        //returning the output complex number
        return temp;
    }
   public static ComplexNumber sum(ComplexNumber c1, ComplexNumber c2)
   {
	//creating a temporary complex number to hold the sum of two numbers
        ComplexNumber temp = new ComplexNumber(0, 0);

        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        
        //returning the output complex number
        return temp;
    }
    public static void main(String args[]) {
    Scanner s=new Scanner(System.in);
    double r=s.nextDouble();
    double i=s.nextDouble();
	ComplexNumber c1 = new ComplexNumber(r,i);
	r=s.nextDouble();
    i=s.nextDouble();
	ComplexNumber c2 = new ComplexNumber(r,i);
	
      ComplexNumber temp = sum(c1,c2);
        System.out.printf("Sum is: "+ temp.real+" + "+ temp.img +"i");
        int n=s.nextInt();
        
	ComplexNumber t=sum(n,c1);
	System.out.println("Adding "+n+" to "+c1.real+" + "+c1.img+"is "+ t.real+" + "+ t.img +"i");
	t=sum(n,c2);
	System.out.println("Adding "+n+" to "+c2.real+" + "+c2.img+"is "+ t.real+" + "+ t.img +"i");
	
    }
}
