import java.util.*;
class Book
{ int n=0;
  String name[]=new String[10];
  int code[]=new int[10];
  float price[]=new float[10];
  int quan[]=new int[10];
  double tot[]=new double[10];
  Scanner s=new Scanner(System.in);
 /* Book(int x)
  {
   for(int i=0;i<x;i++)
   {
     this.name[i]=" ";
     this.code[i]=0;
      this.price[i]=0.0f;
       this.quan[i]=0;
        this.tot[i]=0.0;
   }
  }*/
  void read()
  {
   
   System.out.println("Enter book code:");
   code[n]=s.nextInt();
   System.out.println("Enter book name:");
   //System.out.flush();
   name[n]=s.nextLine();
   name[n]=s.nextLine();
   
   System.out.println("Enter book unit price:");
   price[n]=s.nextFloat();
   System.out.println("Enter book quantity:");
   quan[n]=s.nextInt();
   tot[n]=price[n]*quan[n];
   n++;
  }
  void display()
  {
  if(n==0)
  {
   System.out.println("No record to display");
   }
   else
   {System.out.println("Name\tCode\tprice\tquantity  total");
   for(int i=0;i<n;i++)
   {
    System.out.println(name[i]+"\t"+code[i]+"\t"+price[i]+"\t"+quan[i]+"\t"+tot[i]);
   }
   }
   }
  }
  class book
  {
    public static void main(String args[])
    { int ch;
      Scanner s=new Scanner(System.in);
      //x=s.nextInt();
      Book b=new Book();
      for(;;)
      {
        System.out.println("Enter choice:\n1.Add record\n2.Display record\n3.Exit");
        ch=s.nextInt();
        switch(ch)
        {
         case 1:b.read();
            break;
         case 2:b.display();
           break;
         default:System.exit(0);
        }
      }
    }
  }

