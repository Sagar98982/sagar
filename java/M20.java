import java.util.Scanner;

class employee

{
    void show()
    {

     System.out.println("sagar");
    }

}

class manager extends employee
{
    void run()
    {
   System.out.println("hitesh");

    }
}

 public class M20
{

public static void main(String[] args)
{

manager m = new manager();

System.out.println(m instanceof employee);



}
}
 


 

