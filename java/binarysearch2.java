
import java.util.Scanner;

class binarysearch2 {

    public static void main(String[] args) 
{

        Scanner s1 = new Scanner(System.in);

        int a[] = new int[5];
        int i, mid, first = 0, last = 0, b;

        int N;
        System.out.println("enter");

        for (i = 0; i < 5; i++)

        {

            a[i] = s1.nextInt();

        }

        System.out.println("enter the value of b is");
        b = s1.nextInt();
        last=a.length-1;
        
      while(first<=last)
      {
        mid = (first + last) / 2;

        if (a[mid]< b) 
        {
           first= mid+1;
        }

        else if (b < a[mid]) 
        {
            last = mid - 1;
        }

        else   
         {
            System.out.println("no is found");
            break;
        }

          
    }

}
}