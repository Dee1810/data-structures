import java.util.Scanner;

class BankWork
{
          final int max_limit=5;
          final  int min_limit=1;
          final double min_bal=500;
         private  String name[]=new String[5];
         private int accNo[]=new int[5];
         private  String accType[]=new String[5];
         private double balAmt[]=new double[5];
         static int totRec=0;
        //constructor
        BankWork()
        {
             for(int i=0;i<max_limit;i++)
             {
                name[i]="";
                accNo[i]=0;
                accType[i]="";
                balAmt[i]=0.0;
            }
        }

        
        
        //TO  ADD NEW RECORD
public void newEntry()
        {
              /* String str;
               int acno;
               double amt;*/
               
               
               
               totRec++;         // Incrementing Total Record               
               System.out.println("\n\n\n=====RECORDING NEW ENTRY=====");
               
                          accNo[totRec]=totRec;    //Created  AutoNumber  to accNo so no invalid id occurs
                        System.out.println("Account Number :  "+accNo[totRec]);
                        
               Scanner s=new Scanner(System.in);
                     System.out.print("Enter Name :  ");
                   //  System.out.flush();
                     name[totRec]=s.nextLine();

                     System.out.print("Enter Account Type : ");
                     //System.out.flush();
                     accType[totRec]=s.nextLine();

                    
                           System.out.print("Enter Initial  Amount to be deposited : "); balAmt[totRec]=s.nextDouble();
                       //    System.out.flush();
                         /*  str=s.nextLine();
                           balAmt[totRec]=Double.parseDouble(str);
                               //Validation that minimun amount must be 500*/

                
            
        }

        
        
        //TO DISPLAY DETAILS OF RECORD
public void display()
        {
            
            
              //boolean valid=true;
                           
              System.out.println("\n\n=====DISPLAYING DETAILS OF CUSTOMER=====\n");
              
              //   BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
/*Scanner obj=new Scanner(System.in);                
 System.out.print("Enter Account number : ");
                 System.out.flush();
                 str=obj.nextLine();
                // acno=Integer.parseInt(str);*/
                  
                 
                        System.out.println("\n\nAccount Number : "+accNo[acno]);
                        System.out.println("Name : "+name[acno]);
                        System.out.println("Account Type : "+accType[acno]);
                        System.out.println("Balance Amount : "+balAmt[acno]+"\n\n\n");
                      
                 
        }



          //TO DEPOSIT AN AMOUNT
public void deposit()
        {
             // String str;
              double amt;
            /*  int acno;
              //boolean valid=true;
              System.out.println("\n\n\n=====DEPOSIT AMOUNT=====");
              
              //try{
                   //Reading deposit value
                //   BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
              Scanner obj=new Scanner(System.in);
                        System.out.print("Enter Account No : ");
                        System.out.flush();
                        str=obj.nextLine();
                        acno=Integer.parseInt(str);
                         if (acno<min_limit || acno>totRec)   //To check whether accNo is valid or Not
                         {
                              System.out.println("\n\n\nInvalid Account Number \n\n");
                              //valid=false;
                         }
           
                        else
                       {*/
                            System.out.print("Enter Amount you want to Deposit  : ");
                            System.out.flush();
                            str=obj.nextLine();
                            amt=Double.parseDouble(str);

                            balAmt[acno]=balAmt[acno]+amt;

                            //Displaying Depsit Details
                            System.out.println("\nAfter Updation...");
                            System.out.println("Account Number :  "+acno);
                            System.out.println("Balance Amount :  "+balAmt[acno]+"\n\n\n");
                        
                
       }



     //TO WITHDRAW BALANCE
public void withdraw()
        {
            //  String str;
              double amt,checkamt;
              //int acno;
              //boolean valid=true;
              System.out.println("\n\n\n=====WITHDRAW AMOUNT=====");
              
              //try{
                   //Reading deposit value
                //   BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
                /*  Scanner obj=new Scanner(System.in); 
                        System.out.print("Enter Account No : ");
                        System.out.flush();
                        str=obj.nextLine();
                        acno=Integer.parseInt(str);

                          if (acno<min_limit || acno>totRec)   //To check whether accNo is valid or Not
                             {
                                System.out.println("\n\n\nInvalid Account Number \n\n");
                                //valid=false;
                            }

                        else
                        {*/
                                System.out.println("Balance is : "+balAmt[acno]);
                                System.out.print("Enter Amount you want to withdraw  : ");
                                System.out.flush();
                                str=obj.nextLine();
                                amt=Double.parseDouble(str);

                                checkamt=balAmt[acno]-amt;

                                if(checkamt >= min_bal)
                                 {
                                    balAmt[acno]=checkamt;
                                    //Displaying Depsit Details
                                    System.out.println("\nAfter Updation...");
                                    System.out.println("Account Number :  "+acno);
                                    System.out.println("Balance Amount :  "+balAmt[acno]+"\n\n\n");
                                }
                                else
                                 {
                                    System.out.println("\n\nAs per Bank Rule you should maintain minimum balance of Rs 500\n\n\n");
                                }
                        
       

}

public class bank
{
    public static void main(String args[]) 
    {
        int acno;
        int choice;
        choice=0;
      for(int i=0;i<5;i++)
        BankWork BW_obj[i] = new BankWork();
        

        for(;;)
        {System.out.println("Choose Your Choices ...");
        System.out.println("1) New Record Entry ");
        System.out.println("2) Display Record Details ");
        System.out.println("3) Deposit...");
        System.out.println("4) Withdraw...");
        System.out.println("5) Exit");
         System.out.print("Enter your choice :  ");
        System.out.flush();
              //try{
                //   BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
Scanner obj=new Scanner(System.in);                  
 str=obj.nextLine();
                   choice=Integer.parseInt(str);

                          switch(choice)
                           {
                            case 1 :  //New Record Entry
                                                if (totRec<min_limit  || totRec>5)   //To check whether accNo is valid or Not
                     {
                          System.out.println("\n\n\nInvalid Account Number \n\n");
                                               }
                                              else
                                            BW_obj[totRec].newEntry();
                                           break;
                            case 2 :  //Displaying Record Details
                                              Scanner obj=new Scanner(System.in);                
 System.out.println("Enter Account number : ");
                 acno=obj.nextInt();
                                                if (acno<min_limit  || acno>totRec)   //To check whether accNo is valid or Not
                     {
                          System.out.println("\n\n\nInvalid Account Number \n\n");
                                               }
                                              else
                                           BW_obj[acno-1].display();
                                           break;
                            case 3 : //Deposit...
                                               Scanner obj=new Scanner(System.in);                
 System.out.println("Enter Account number : ");
                 acno=obj.nextInt();
                                                if (acno<min_limit  || acno>totRec)   //To check whether accNo is valid or Not
                     {
                          System.out.println("\n\n\nInvalid Account Number \n\n");
                                               }
                                              else 
                                            BW_obj[acno-1].deposit();
                                           break;
                            case 4 : //Withdraw...
                                                Scanner obj=new Scanner(System.in);                
 System.out.println("Enter Account number : ");
                 acno=obj.nextInt();
                                                if (acno<min_limit  || acno>totRec)   //To check whether accNo is valid or Not
                     {
                          System.out.println("\n\n\nInvalid Account Number \n\n");
                                               }
                                              else
                                            BW_obj[acno-1].withdraw();
                                            break;
                            case 5  :  System.out.println("\n\n.....THANKS FOR VISITING.....");
                                            break;
                            default : System.out.println("\nInvalid Choice \n\n");
                          }
                    
}
}
}
