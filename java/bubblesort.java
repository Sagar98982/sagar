import java.util.Scanner;

class bubblesort

{
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);

        
      
      int n,i,s,j;

      System.out.println("enter the number");

      n=s1.nextInt();

      int a[] = new int [5];


      System.out.println("input the value");

      for(i=0;i<a.length;i++)

      {

        a[i]= s1.nextInt();


      }

      for(i=0;i<a.length;i++)
     
     {

       for(j=0;j<a.length-i-1;j++)

       {

           if(a[j]>a[j+1])

           {

            s=a[j];
            a[j]=a[j+1];
            a[j+1]=s;


           }
           


       }}



       for(i=0;i<a.length;i++)
       {

        System.out.print("the sorted array is " + a[i]);



       }



     }}
      












