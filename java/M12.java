
 import java.lang.Exception;

class M12

{

    public static void main(String[] args)

    {

         System.out.println("main method started");


          int a=10,b=0,c;

          try{

          c=a/b;                             //  yha pr 10/0 nhi kr skte      //exception aya yha pr

          System.out.println(c);


          }



          catch (Exception e)          // arithmatic exception bhi likh skte h
          {

          System.out.println("can not divide");

          }

          System.out.println("main method ended");


        }}




    





   
