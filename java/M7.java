import java.util.Scanner;


class employee

{

 employee()
 
 {

    System.out.println("sagar");

 }
}                                   //super is used to invoke parent class constructor

class manager extends employee
{

   manager()

   {

    super();
     
    System.out.println("hitesh");
    
}}

class M7
{

 public static void main(String [] args)
 {

   manager m = new manager();
  

    //System.out.println("hello");


 }

}