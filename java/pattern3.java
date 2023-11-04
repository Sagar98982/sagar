import java.util.Scanner;

class pattern3

{
    public static void main(String[] args)
     {
        Scanner s1 = new Scanner (System.in);
        
        int i, j,k,a,b,l,c,d;

for(i=1;i<=4;i++)
{



for(j=1;j<=9;j++)

{

 if(j>=i && j<=10-i)

 {
    
    System.out.print("*");



 }


 else
 {
    System.out.print(0);
  

 }
}

System.out.println();


}}}
