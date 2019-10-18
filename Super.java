class a
{
 int i,j;
 a(int a,int b)
 {
 i=a;j=b;
 
 }
 void show()
 {
 System.out.println("i= "+i+"j= "+j);
 }
 }
 class b extends a
 {
 int k;
 b(int a,int b,int c)
 {
 super(a,b);
 k=c;
 }
 void show()
 {
 super.show();
 System.out.println("k= "+k);
 }
 }
 
 class Super
 {
 public static void main(String args[])
 {
 b obj =new b(1,2,3);
 obj.show();
 }
 }
 
 
 
