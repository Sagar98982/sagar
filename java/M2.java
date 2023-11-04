import java.util.Scanner;

class employee

{

  int empno;
  String name;

Scanner s1 = new Scanner (System.in);




void getdata()
{

   System.out.println("enetr the detail of employee");

   empno=s1.nextInt();
   name=s1.next();


}



void setdata()
{
   
    System.out.println(empno+" "+name);

}}



class manager extends employee
{

int salry;

void input()
{
  
    System.out.println("sagar");



}


}

class hr extends employee

{
   
void output()
{

 System.out.println("grover");




}

}



public class M2 

{
  public static void main(String[] args)
  {


hr sagar = new hr();
manager t1 = new manager();

sagar.getdata();
sagar.setdata();
t1.input();
sagar.output();






  }





}

