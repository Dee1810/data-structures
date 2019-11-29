interface a
{
int i=10;
int j=20;
}
interface b extends a
{
void sum();
}
class c implements b
{
public void sum()
{
System.out.println("Sum="+(i+j));
}
}
class j8
{
public static void main(String args[])
{
c co=new c();
co.sum();
}
}
