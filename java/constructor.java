      
      import java.util.Scanner;

      class employee

        {

        int empno;
        int salary;

        employee ()

        {


           empno = 1;

          salary = 10000;

           

        }

           void display()
           {
               System.out.println(empno);
               System.out.println(salary);

           }

        }

           

        

 public class constructor
 
  {
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
       
         employee e1 = new employee();

            e1.display();

     }}