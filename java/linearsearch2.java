import java.util.Scanner;

class linearsearch2

{
    public static void main(String[] args) 

    {

    Scanner s1 = new Scanner (System.in);

    int a[] = new int [5];
    int i;
    
    int N;

    for(i=0;i<a.length;i++)

    {

           a[i] = s1.nextInt();

    }

System.out.println("enter the value you want to search");


N= s1.nextInt();

    
for(i=0;i<a.length;i++)
{

 if(a[i]==N)
 {

 System.out.println(i);
 System.out.println(i+1);



 }


}
    }}
