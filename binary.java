import java.util.*;
class binary
{
 public static void main(String args[])
 {
  Scanner s=new Scanner(System.in);
 int n=s.nextInt();
 int a[]=new int[n];
 System.out.println("Enter array list:");
 for(int i=0;i<n;i++)
 {
  a[i]=s.nextInt();
 }
 int key,low=0,high=n-1;
 key=s.nextInt();
 while(low<=high)
 {
  int mid=(low+high)/2;
  if(a[mid]<key)
  {
   low=mid+1;
   }
   else if(a[mid]>key)
   {
    high=mid-1;
    }
    else
    {System.out.println("Key element foiumd");
    break;
    }
    }
    }
    }
