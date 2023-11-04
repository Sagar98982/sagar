import java.util.Scanner;

    class employee

        {

              int empno;
              int salary;
             String name;

        employee (int empno, int salary )

        {

             this.empno = empno;
             this.salary = salary;
             
                                             //   ek constructor ko second constructor k under
           
                                             //     call krna h to this(empno,salary) k stah use hoga
        }

         employee(int empno, int salary, String name)

        {


            this(empno,salary);
            this.name=name;



        }


       

        
           void display()
           {
               System.out.println(empno);
               System.out.println(salary);
               System.out.println(name);
           }

        }

           

        

 public class gg
 
  {
    public static void main(String[] args)

     {

       
       
         employee e1 = new employee(101,500);

            e1.display();
    //   employee e2 = new employee(101,500,"dd");
    //   e2.display();
 }
    }
