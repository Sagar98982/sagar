import java.util.Scanner;

      class employee

        {
              int empno;
              int salary;

        employee (int empno, int salary)

        {


         this.empno = empno;
                      
         this.salary = salary;

           

        }

           void display()
           {
               System.out.println(empno);
               System.out.println(salary);

           }

        }

           

        

 public class  thisconstructor
 
  {
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
       
         employee e1 = new employee(10,20);

            e1.display();

     }}