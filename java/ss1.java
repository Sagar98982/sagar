import java.util.Scanner;
                                                              

class employee

{

    int empno;
    String name;

 Scanner s1 = new Scanner (System.in);

  void getdata()

   {

  System.out.println("enter the details of employee");

    empno=s1.nextInt();
    name=s1.next();
                                          //  multilevel inheritance


}

 void setdata()

{


  System.out.println(empno+" "+name);


}}

class manager extends employee

{

    int salary;

    void input()

    {


        System.out.println("sagar");


    }}

class hr extends manager 

{

void output()

{

System.out.println("kumar");


}





}
    

class ss1

{
  
 public static void main(String[] args)

{

  hr s2 = new hr ();

  s2.getdata();
  s2.setdata();
  s2.input();
  s2.output();

}
}