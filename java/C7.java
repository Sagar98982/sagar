import java.util.*;

class employee

        {

              int empno;
              int salary;
            

       void getdata()

        {

            empno=5;
            salary = 10000;              // apni class k under funcion(constructor)ko call krna ho to 
                                            
        }                                // this k stah call krke use karte h

         void input()

        {


           this.getdata();


        }


       

        
           void display()
           {
               System.out.println(empno);
               System.out.println(salary);
               
           }

        }

           

        

 public class C7
 
  {
    public static void main(String[] args)

     {

       
       
         employee e1 = new employee();
        
            e1.input();
            e1.display();
    //   employee e2 = new employee(101,500,"dd");
    //   e2.display();
 }
    }

