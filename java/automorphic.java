import java.util.*;

class automorphic
{
    public static void main(String[] args) {
        Scanner s1 = new Scanner (System.in);
        int n,square,flag=0;
   
System.out.print("enter the number");
   n=s1.nextInt();
   
square=n*n;
   
System.out.print("square="+square);   
while(n>=1)
   
{
       
if(n%10!=square%10)
       
{
           
           
flag=1;
break;
       
}
   
  
 n=n/10;
 square=square/10;
   
}
   
if(flag==1)
   
{
       
System.out.println("the no is not automorphic");
       
   
}
   
else
   
{
       
System.out.println("the no is automorphic");
   
}
   

    }
}

