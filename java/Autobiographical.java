import java.util.Scanner;
class Autobiographical
{

 public static void main (String[] args)

 {


    Scanner s1 = new Scanner (System.in);

    int a,b,sum=0,c=0;

    System.out.println("Enter value of a : ");

    a=s1.nextInt();

    while(a>0)
    {

     b=a%10;
     c++;

     sum+=b;

     a= a/10;




    }

   if(sum==c)
   {

     System.out.println("this is autobiographical number");




   }

    else


    {

       System.out.println("this is not autobiographical number");




    }




 }






}