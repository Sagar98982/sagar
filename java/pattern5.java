import java.util.Scanner;

class pattern5
{
    public static void main(String[] args)
     {
        Scanner s1 = new Scanner (System.in);
        
int i,j,k=1,a,b;

for(i=4;i>=1;i--)
{



  for(j=1;j<=4;j++)
  {
      if(j>i)                            

      {
         System.out.print(" *");
         
      }


      else

      {
         System.out.print(" "+j);

       
      }
    
   
    }
    
  





   for(b=4;b>=1;b--)
   {

    if(b>i)
    {
     
   
     System.out.print("* ");

   }

    else
    {

     System.out.print(" "+b);

    }


  }

    System.out.println();
   
  }

}










}