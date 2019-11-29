class person
{String name;

person(String s)
{
 name=s;
}
void display()
{
System.out.println("Name:"+name);
}
}
class emp extends person
{
  int id;
  emp(String s,int id)
  {
    super(s);
    this.id=id;
  }
  void display()
  {super.display();
  System.out.println("id:"+id);
  }
  }
  class salary extends emp
  {
    int days;
    salary(String s,int id,int n)
    {
     super(s,id);
     days=n;
   }
   float compute()
   {
    return days*200;
   }
   void display()
   {
    super.display();
    System.out.println("No. of days:"+days+"\nSalary:"+compute());
   }
 }
  
  class j3
  {
  public static void main(String args[])
  {
  salary s=new salary("Dee",2,34);
  s.display();
  }
 }
