
import java.util.Scanner;


/* * 0 0 0 * 0 0 0 *
   0 * 0 0 * 0 0 * 0
   0 0 * 0 * 0 * 0 0
   0 0 0 * * * 0 0 0
*/


class pattern9
{
    public static void main(String[] args)

     {

        Scanner s1 = new Scanner (System.in);






           int l = 4;
            int i, j;

        for (i = 1; i <= l; i++)
         {
           
            for (j = 1; j <= l; j++) 
            {
               
                if (j == i) {
                    
                    System.out.print("*");
                } 
                else 
                {
                    System.out.print("0");
                }
            }
            j--;
            
            System.out.print("*");
            
            while (j >= 1) 
            {
                if (i == j) 
                {
                    System.out.print("*");
                } 
                else 
                {
                    System.out.print("0");
                }
                j--;
            }
            System.out.print(" ");
            System.out.println("\n");
        }}}