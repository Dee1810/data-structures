import java.util.*;
class account
{
	String name;
	String accno;
	String type;
	double bal;
	final double min=200;
	Scanner s=new Scanner(System.in);
    account()
    {
    	name="";
    	accno="";
    	type="";
    	bal=0;
    }
    void read()
    {
    	System.out.println("Enter acc no:");
    	accno=s.nextLine();
    	System.out.println("Enter name:");
    	name=s.next();
    	System.out.println("Enter acc type:");
    	type=s.next();
    	System.out.println("Enter acc balance:");
    	bal=s.nextDouble();
      

    }
    void display()
    {
    	//String a=s.nextLine();
    	System.out.println("Enter acc no:"+accno);
    	//accno=s.nextLine();
    	System.out.println("Enter name:"+name);
    	//name=s.next();
    	System.out.println("Enter acc type:"+type);
    	//type=s.next();
    	System.out.println("Enter acc balance:"+bal);
    	//bal=s.nextDouble();
    		/*if(a.equals(accno))
    		{
    			System.out.println("Name: "+name+"Account num: "+accno+"Account type: "+type+"Balance: "+bal);
    			break;
    		}*/
    	
    }
    void deposit()
    {
    	System.out.println("Enter the amount to be deposited");
    	double amt=s.nextDouble();
    	bal=bal+amt;
    	display();
    }
    void withdraw()
    {
    	System.out.println("Available balance:"+bal+"\nEnter the amount to be withdrawn:");
    	double amt=s.nextDouble();
    	if((bal-amt)>=min)
    	{bal=bal-amt;
    	System.out.println("Enter acc no:"+accno);
    	//accno=s.nextLine();
    	System.out.println("Enter name:"+name);
    	//name=s.next();
    	System.out.println("Enter acc type:"+type);
    	//type=s.next();
    	System.out.println("Enter acc balance:"+bal);	
    	}
    	else
    	{
    		System.out.println("Insuffiecient balanace");

    	}
    }
}
class bank2
{
	public static void main(String args[])
	{
	account a[]=new account[2];
	Scanner s=new Scanner(System.in);
  int flag=0;
	for(int i=0;i<2;i++)
	{ a[i]=new account();
		a[i].read();

	}
	String acc;
	for(;;)
	{
	int ch=s.nextInt();
	switch(ch)
	{
		case 1:System.out.println("Enter the accno");
		        acc=s.next();
		       flag=0;
		       for(int i=0;i<2;i++)
		       {
		       	if(acc.equals(a[i].accno))
		       	{
		       		a[i].display();
		       		flag=1;
		       		break;
		       	}

		       }
		       if(flag==0)
		       {
		       	System.out.println("Invalid accno");

		       }break;
		 case 2:System.out.println("Enter the accno");
		       acc=s.next();
		       flag=0;
		       for(int i=0;i<2;i++)
		       {
		       	if(acc.equals(a[i].accno))
		       	{
		       		a[i].deposit();
		       		flag=1;
		       		break;
		       	}

		       }
		       if(flag==0)
		       {
		       	System.out.println("Invalid accno");
		       	
		       }
		       break;
		  case 3:     System.out.println("Enter the accno");
		       acc=s.next();
		       flag=0;
		       for(int i=0;i<2;i++)
		       {
		       	if(acc.equals(a[i].accno))
		       	{
		       		a[i].withdraw();
		       		flag=1;
		       		break;
		       	}

		       }
		       if(flag==0)
		       {
		       	System.out.println("Invalid accno");
		       
		       }break;
		 default:  System.exit(0);    
	}
}

}
}

    


