import java.util.Scanner;


class A 

{
    

A get()

{


return(this);


}}


class B1 extends A

{
    
B1 get()

{      
    System.out.println("sagar");                                             //covariant type

    return (this);

}

void message()
{

  System.out.println("welcome to covariant type");


}}

 public class M17

{
public static void main(String[] args)

{


 //B1 b = new B1();

  new B1().get().message();
   



}}