import java.util.*;

class j18
{
public static void main(String args[])
{
 int invalid=0,valid=0,num;
 for(int i=0;i<args.length;i++)
 {
   try{
   num=Integer.parseInt(args[i]);
   }
catch(NumberFormatException e)
{
 invalid=invalid+1;
 continue;
 }
 valid=valid+1;
 }
 System.out.println("Invalid"+invalid+"Valid"+valid);
 }
 }
 
 
