import java.util.Scanner;

class employee

{

  void input()
  
  {

   System.out.println("sagar");


  }}


  class manager extends employee
                                               //super can be used to invoke parent class method
  {
    void eat()

    {
    
        System.out.println("hitesh");

    }

   void bark()
   {


   System.out.println("kumar");

   }



   void work()

   {

   super.input();
   
   bark();

}
}


class M6

{

   public static void main(String[] args)

   {


    manager m = new manager();

   m.work();


}}