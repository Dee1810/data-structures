// One interface can extend another. interface A { void meth1(); void meth2(); }
// B now includes meth1() and meth2() -- it adds meth3(). interface B extends A { void meth3(); }
// This class must implement all of A and B class MyClass implements B { public void meth1() { System.out.println("Implement meth1()."); }
public void meth2() { System.out.println("Implement meth2()."); }
public void meth3() {System.out.println("Implement meth3().");
}
}
class IFExtend { public static void main(String arg[]) { MyClass ob = new MyClass();
ob.meth1(); ob.meth2(); ob.meth3();
}
}

//Creating a parent class.  
class Bank{  
int getRateOfInterest(){return 0;}  
}  
//Creating child classes.  
class SBI extends Bank{  
int getRateOfInterest(){return 8;}  
}  
  
class ICICI extends Bank{  
int getRateOfInterest(){return 7;}  
}  
class AXIS extends Bank{  
int getRateOfInterest(){return 9;}  
}  
//Test class to create objects and call the methods  
class Test2{  
public static void main(String args[]){  
SBI s=new SBI();  
ICICI i=new ICICI();  
AXIS a=new AXIS();  
System.out.println("SBI Rate of Interest: "+s.getRateOfInterest());  
System.out.println("ICICI Rate of Interest: "+i.getRateOfInterest());  
System.out.println("AXIS Rate of Interest: "+a.getRateOfInterest());  
}  
}  
