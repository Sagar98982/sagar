import java.util.Scanner;

class emirpnumber

{
    public static void main(String[] args) 

    {

    Scanner s1 = new Scanner (System.in);



     int a,b=0,i=0,c=0,n;


      System.out.println("Enter the number");

      n = s1.nextInt();


      for(i=1;i<=n;i++)
      
      {

       if(n%i==0)

       {


        c++;


       }



      }




      while(n>0)

      {

       if(c==2)
       {

        b = n%10;
        n=n/10;

        System.out.println("this is a emprip number");

        break;


       }



       else

       {


            System.out.println("this is not a emrip number");

         break;

       }



      }


}}