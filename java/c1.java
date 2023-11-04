import java.util.Scanner;

      class employee

        {

              int empno;
              int salary;

        employee (int r, int m)

        {                                              //    default constructor or parameter constructor


          empno = r;

          salary = m;

           

        }



        employee ()
        {

          empno = 0;
          salary = 0;


        }

           void display()
           {
               System.out.println(empno);
               System.out.println(salary);

           }

        }

           

        

 public class  c1
 
  {
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
       
         employee e1 = new employee(7,9);

            e1.display();

        employee e2 = new employee ();

         e2.display();
     }}