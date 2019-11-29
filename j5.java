class a
{
static int i;
static private protected int j;
static void set(int a,int b)
{
 i=a;
 j=b;
}
static void display()
{
System.out.println("In super class:"+i+"\n"+j);
}
}
class b extends a
{
 static int sum;
static int comp()
{
sum=i+j;
return sum;
}
}
class j5
{
public static void main(String args[])
{
b bo=new b();
b.set(4,5);
b.display();
int tot=b.comp();
System.out.println("Sum="+tot);
}
}
