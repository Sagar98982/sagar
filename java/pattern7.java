import java.util.Scanner;


/*12344321
  123**321
  12****21
  1******1
*/



class pattern7
{
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
                                                                        
  int i,j;
  
        for(i=4;i>=1;i--)
        {
            for(j=1;j<=4;j++)
            {
                if(j>i)
               
                System.out.print(" * ");
           
                else
                
                System.out.print(" "+j);
            
            }

            for(j=4;j>=1;j--)

            {
     
                if(j>i)
        
                System.out.print("*");
        
                else
        
                System . out.print(" "+j);

    }
          System.out.println();


}}}