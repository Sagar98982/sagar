import java.util.Scanner;

class employee

{


   String  color = "sagar";


}

class manager extends employee 

{

String color =  "hitesh";
                                           //super can be used to refer immidiate parent class instance
void input()

{   
                                            //   variable
 System.out.println(color);
 System.out.println(super.color);



}
}


class M5

{

 public static void main (String[] args)

 {

  manager m = new manager();

  m.input();



 }

}