import java.util.Scanner;

class A 

{

    A()

    {


   System.out.println("parent class constructor invoked");

}}

class B2 extends A

{

 B2()

 {                                                     //  2nd example of instance initializer block

 super();

 System.out.println("child class constructor invoked");


 }

 {
 System.out.println("instance initializer block is invoked");

}
}
public class M19

{

public static void main(String[] args)
{

   B2 b = new  B2();


}

}





//isme phle parent class ka constructor call hoga fr  instance block call hoga fr super function cll hoga