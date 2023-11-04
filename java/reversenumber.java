import java.util.Scanner;

public class reversenumber

{

 public static void main(String[] args)

 {

  Scanner s1 = new Scanner (System.in);

  

 int a=0,b=0;

 System.out.println("enter the number");

 a = s1.nextInt();

 while(a>0)

 {

    b=a%10;
    a=a/10;
    System.out.print("the reverse number is "+b);



 }




 }



}