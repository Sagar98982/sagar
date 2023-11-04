import java.util.*;

class Spynumber
{
    public static void main(String[] args) {
        Scanner s1 = new Scanner (System.in);

int a,b,sum=0,m=0;

System.out.println("enter the number :" );

a=s1.nextInt();

while(a>0)
{

 b=a%10;
 sum=sum+b;
 m=m*b;
 a=a/10;



}


if(sum==m)
{


System.out.println("this is a spynumber");


}


else

{

 System.out.println("not a spynumber");


}




    }}