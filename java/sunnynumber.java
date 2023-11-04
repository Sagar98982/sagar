import java.util.Scanner;

class sunnynumber
{

public static void main(String[] args)
    
{
    Scanner s1 = new Scanner (System.in);
    

int a,b,d;
    
float c;

    
System.out.println("enter the number ");
a=s1.nextInt();

    

b=a+1;
    
d=b/2;
    
c=0;
    
while(d!=c)
    
{
       
c=d;
                                            
d=(int)((b/c)+c)/2;
        
    
}
    
if(b%d==0)
    
{
        
System.out.println("it is a sunny number");
        
    
}
    
else
    
{
        
System.out.print("it is a not sunny number");

}

}

}
