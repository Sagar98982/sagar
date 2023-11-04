import java.util.Scanner;

class pattern4
{
    public static void main(String[] args)

     {
        Scanner s1 = new Scanner (System.in);
        
    int i,j,k=1;


   for(i=1;i<=5;i++)

   {
     
 
  for(j=1;j<=5;j++)

  {

    if(j>=k & j<=i)

   {

    System.out.print(k);
    k++;

   }

   else
   {
     
    System.out.print("*");


   }
    
   
  }
 
  
  System.out.println();

}



}}