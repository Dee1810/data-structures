import java.util.Scanner;    


public class fib {
        public static void main(String[] args) {
Scanner s=new Scanner(System.in);            
int n,i,t1 = 0, t2 = 1;
System.out.println("Enter the number of terms");
n=s.nextInt();
            System.out.println("First " + n + " terms: ");
            for (i = 1; i <= n; ++i)
            {
                System.out.println(t1);
                int sum = t1 + t2;
                t1 = t2;
                t2 = sum;
            }
        }
    }
