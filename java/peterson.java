import java.util.Scanner;

class peterson
{

public static void main(String[] args)
{
    Scanner s1 = new Scanner (System.in);
int a,i,b,r,f,sum=0;
   
System.out.print("enter the no of a");
a=s1.nextInt();

b=a;

 while(b!=0)

{

 r=b%10;


 for(i=r-1;i>=1;i--)
 
 {

   r=r*i;


 }
    sum=sum+r;

    b=b/10;

}



if(sum==a)

{


System.out.println("peterson no");


}


else
{

System.out.println("not peterson no");

}






}


}
