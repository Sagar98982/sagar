import java.util.Scanner;


/*0
  909
  89098
  7890987
  678909876
*/



class pattern8
{
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);
   int i,j;

   System.out.println(" 0");
   System.out.println();

       for (i = 9; i>=6; i--) 

        {
            
            for (j = i; j <= 9; j++) 
            
            {
                System.out.print(" " + j);
            }

            System.out.print(" 0");

            for (j = 9; j >= i; j--) 
            {
                System.out.print(" " + j);
            }

            System.out.println("\n");
        
        }}}