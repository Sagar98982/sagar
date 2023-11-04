import java.util.Scanner;

    class employee

        {

              int empno;
              int salary;
              
        employee (int e, int s)

        {                                                  //   copy constructor

      
          empno = e;

          salary = s;

           

        }

        employee (employee ob)
        {

        empno= ob.empno;
         salary = ob.salary;

        }


        
           void display()
           {
               System.out.println(empno);
               System.out.println(salary);

           }

        }

           

        
 public class c2
 
  {
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
       
         employee e1 = new employee(7,9);

            e1.display();

          
     employee  e2 = new employee(e1);

         e2.display();
     }}