class myexc extends Exception
{//String s;
myexc(String s)
{
super(s);
}
}
class j20
{
void check(int n) throws myexc{
if(n%2==0)
throw new myexc("Even number");
}
public static void main(String args[])
{
j20 a=new j20();
for(int i=0;i<args.length;i++)
{
int n=Integer.parseInt(args[i]);
try{
a.check(n);
}
catch(myexc ex)
{
System.out.println("Error caught");
System.out.println(ex.getMessage());
continue;
}
System.out.println("odd");
}
/*finally
{
System.out.println("Thank you");
}*/
}
}

