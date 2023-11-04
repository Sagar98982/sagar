import java.util.Scanner;

class pattern2
{
    public static void main(String[] args)
     {
        Scanner s1 = new Scanner (System.in);
        
        int i, j,k,a,b,l,c,d;

for(i=1;i<=4;i++)
{

for(j=1;j<=4;j++)

{
   if (i==j)
   {
    System.out.print("*");


   }

   else
   {

     System.out.print(0);

   }



}

System.out.println();

}
     




// for(i=1;i<=4;i++)
// {
//     l=5; 

// for(c=5;c<=5;c++)
// {

//     if(j<=l)
//     {
// System.out.print("*");


// }



// }

// System.out.println();







for(i=1;i<=4;i++)
{
  for(b=6;b<=9;b++)
  {

     if(b<=10-i)
     {
       System.out.print(0);



     }

     else{


      System.out.print("*");

     }



  }
    
  System.out.println();

}}











}