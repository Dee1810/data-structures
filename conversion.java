class conversion
{
  public static void main(String args[])
  {
    byte b;
    int i=257;
    double d=345.23;
    System.out.println("Conversion from int to byte:");
    b=(byte)i;
    System.out.println(i+"   "+b);
    
    System.out.println("Conversion from double to int:");
    i=(int)d;
    System.out.println(d+"   "+i);
    
    System.out.println("Conversion from double to byte:");
    b=(byte)d;
    System.out.println(d+"  "+b);
   }
}
    
    
