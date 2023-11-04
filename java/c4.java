import java.util.*;

    class employee

        {

              int empno;
              int salary;
              String name;

        employee (int empno, int salary ,String name)

        {

             this.empno = empno;
             this.salary = salary;                           //this keyword  or copy constructor use
             this.name = name;

           

        }

        // employee ( employee ob)
        // {

        //   empno= ob.empno;
        //   salary = ob.salary;

        // }


        
           void display()
           {
               //System.out.println(this.empno);
               System.out.println(this .empno+" "+this.salary+" "+ this.name);

           }

        }

           

        

 public class c4
 
  {
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
       
         employee e1 = new employee(101,90,"d");

            e1.display();

       // employee e2 = e1;

         //e2.display();
     }}
