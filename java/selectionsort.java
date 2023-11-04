import java.util.Scanner;

class selectionsort

{
    public static void main(String[] args)

     {


    Scanner s1 = new Scanner (System.in);


     int  j, s,i,n;


     System.out.println("enter the number");

      n=s1.nextInt();

      int a[] = new int [5];

      System.out.print("enter the element");

      for(i=0;i<a.length;i++)
      {

      a[i]=s1.nextInt();


      }

      for(i=0;i<=4;i++)

      {

      for(j=i+1;j<=4;j++)

      {

      if(a[i]>a[j])

      {

       s=a[j];
       a[j]=a[i];
       a[i]=s;


     }


}
}

for(i=0;i<=4;i++)
{
  
   System.out.println("the selection sort array" +a[i]);


}

     }}

