class shape
{
  int bre,len;
}
class rectangle extends shape
{
  int area;
  int cal()
  {
    area=len*bre;
    return area;
  }
}
class j2
{
  public static void main(String args[])
  {
    rectangle r=new rectangle();
    r.len=10;
    r.bre=20;
    System.out.println("Area= "+r.cal()+r.area);
  }
}
