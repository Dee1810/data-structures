class a
{
int i=10;int j=10;
void readij()
{
  System.out.println("i= "+i+"j= "+j);
}
}
class b extends a
{
  //int i=15;j=10;
  int k=30;
  void readk()
{
  System.out.println("k= "+k);
}
}
class c extends b
{
  int z=7;
  void readz()
  {
   System.out.println("z= "+z);
  }
}
class multipleinheritance
{
public static void main(String args[])
{
 c obj=new c();
 obj.readz();
 obj.readk();
 obj.readij();
}
}
