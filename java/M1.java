import java.util.Scanner;

class employee
{
  int empno;
  String name;

Scanner s1 = new Scanner (System.in);
  void getdata()
  {
     empno=s1.nextInt();
     name= s1.next();
    

  }


 public void setdata()
  {
     System.out.println("empno+name");



}};


class manager extends employee
{

 int salary;


void input()

{

   System.out.println("hh");

}






}