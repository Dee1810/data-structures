class time
{
int h,m,s;
time()
{
 h=0;
 m=0;
 s=0;
}
time(int h,int m,int s)
{
this.h=h;
this.m=m;
this.s=s;
}
 static time add(time t1,time t2)
{
 time t3=new time();
 t3.h=t1.h+t2.h;
 t3.m=t1.m+t2.m;
 t3.s=t1.s+t2.s;
 if(t3.s>=60)
 {
  t3.m++;
  t3.s=t3.s-60;
 }
 if(t3.m>=60)
 {
  t3.h++;
  t3.m=t3.m-60;
 }
 if(t3.h>=24)
 {
  t3.h=0;
 }
 return t3;
}
public static void main(String args[])
{
time a=new time(10,20,60);
time b=new time(15,6,7);
time c=add(a,b);
System.out.printf("%d:%d:%d",c.h,c.m,c.s);
}
}
 
