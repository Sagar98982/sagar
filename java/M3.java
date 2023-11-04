import java.util.Scanner;

class A
{

  void show()

  {

    System.out.println("hello");


}}


class B  extends A

{
    
  void show()

  {

  System.out.println("sagar");                 // runtime polymorphism

  }



}


public class M3
{

  public static void main(String[] args)
  {

    A A1=new A();


   A1.show();



   A B1 = new B();

   B1.show();

   




  }







}