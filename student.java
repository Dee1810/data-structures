import java.util.*;
class Student
{ Scanner s=new Scanner(System.in);
  int roll[]=new int[5];
  int m1[]=new int[5];
  int m2[]=new int[5];
  int m3[]=new int[5];
  int total[]=new int[5];
  void read()
  {
    for(int i=0;i<5;i++)
    {
      System.out.println("Enter the roll no:");
      roll[i]=s.nextInt();
      System.out.println("Enter the m1:");
      m1[i]=s.nextInt();
      System.out.println("Enter the m2:");
      m2[i]=s.nextInt();
      System.out.println("Enter the m3:");
      m3[i]=s.nextInt();
    }
  }
  void display()
  {
     System.out.println("Roll no\tSub1\tSub2\tSub3\t");
     for(int i=0;i<5;i++)
     {
       System.out.println(roll[i]+"\t"+m1[i]+"\t"+m2[i]+"\t"+m3[i]);
     }
  }
  void total()
  { 
     for(int i=0;i<5;i++)
     total[i]=(m1[i]+m2[i]+m3[i]);
     System.out.println("Roll no\tSub1\tSub2\tSub3\tTotal");
     for(int i=0;i<5;i++)
     {
       System.out.println(roll[i]+"\t"+m1[i]+"\t"+m2[i]+"\t"+m3[i]+"\t"+total[i]);
      }
    }
    
    void highest()
    {
      int l=m1[0];
      int r=roll[0];
      for(int i=1;i<5;i++)
      {
        if(l<m1[i])
        {
          l=m1[i];
          r=roll[i];
        }
      }
      System.out.println("Roll num"+r+"Secured highest marks of"+l);
       l=m2[0];
      r=roll[0];
      for(int i=1;i<5;i++)
      {
        if(l<m2[i])
        {
          l=m2[i];
          r=roll[i];
        }
      }
      System.out.println("Roll num"+r+"Secured highest marks of"+l);
      
      l=m3[0];
      r=roll[0];
      for(int i=1;i<5;i++)
      {
        if(l<m3[i])
        {
          l=m3[i];
          r=roll[i];
        }
      }
      System.out.println("Roll num"+r+"Secured highest marks of"+l);
      
     }
  void tot()
  {
       int l=total[0];
      int r=roll[0];
      for(int i=1;i<5;i++)
      {
        if(l<total[i])
        {
          l=total[i];
          r=roll[i];
        }
      }
      System.out.println("Roll num"+r+"Secured highest marks of"+l);
      
  }
}
class student{
public static void main(String args[])
{
  Student st=new Student();
   st.read();
   
   st.display();
   st.total();
   st.highest();
   st.tot();
 }
 } 
  
