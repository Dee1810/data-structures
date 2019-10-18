class pyr
{
 public static void main(String args[])
 {int i;
   int n=Integer.parseInt(args[0]);
   
   for( i=1;i<n;i++)
   { for(int j=(n-i);j>1;j--)
     {System.out.print(" ");
   }
    for(int j=0;j<i;j++)
     {
      System.out.print("* ");
     }
     System.out.println();
   }
   
 }
}
   
   
