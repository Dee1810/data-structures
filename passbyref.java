import java.util.Scanner;
class swap{
int a;
int b;
static void swap1(int c,int d){

int temp;
temp = c;
c =d;
d =temp;
System.out.println("The numbers after swapping in the function are " + c+" and "+d);
}
static void swap2(swap x){
System.out.println("For pass by reference ");
int temp;
temp = x.a;
x.a = x.b;
x.b = temp;
System.out.println("The numbers after swapping in the function are " + x.a+" and "+x.b);
}
}
class passbyref{
public static void main(String args[]){
System.out.println("Enter two numbers " );
Scanner sc = new Scanner(System.in);
int num1 = sc.nextInt();
int num2 = sc.nextInt();
swap node = new swap();
node.a = num1;
node.b = num2;
System.out.println("Two numbers before swapping are " +node.a +" and "+node.b);
swap.swap1(node.a,node.b);
System.out.println("The numbers after swapping in the main are " + node.a+" and "+node.b);
swap.swap2(node);
System.out.println("Two numbers after swapping in the main are " + node.a+" and "+node.b);

}
}
