class myexc extends Exception
{//String s;
myexc(String s)
{
super(s);
}
}
class j17
{
void check(int n) throws myexc{
if(n<100)
throw new myexc("Invalid product");
}
public static void main(String args[])
{
j17 a=new j17();
try{
a.check(40);
}
catch(myexc ex)
{
System.out.println("Error caught");
System.out.println(ex.getMessage());
}
finally
{
System.out.println("Thank you");
}
}
}

