class arrays
{
 public static void main(String args[])
 {
  //int a[]=new a[5];
  /*int a[]={1,2,3,4,5};
  for(int k:a)
  {
   System.out.println(k);
  }*/
  int a[][]=new int[4][];
  a[0]=new int[1];
  a[1]=new int[2];
  a[2]=new int[3];
  a[3]=new int[4];
  int k=0;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      a[i][j]=k;
      k++;
      
    }
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      System.out.print(a[i][j]+" ");
      
    }System.out.println();
  }
  
  
  }
  }
