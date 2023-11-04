import java.util.Scanner;
public  class Insertion {
  
    Scanner s1=new Scanner(System.in);


 void printArray(int A[], int n)
 {

     for(int i=0;i<n;i++)
     {

      System.out.print("the output is\n"+A[i]);


     }


 }



  void insertionSort(int A[], int n)

  {

     int i,key,j;
 
    for(i=1; i<=n-1;i++)
    
    {

      key = A[i];
      j = i-1;
       

      while(j>=0 && A[j] > key)


      {


        A[j+1] = A[j];
        j--;
        
      }


      A[j+1]=key;

    }



  }





public static void main(String[] args) {
  

Insertion n1=new Insertion();
    int A[] = {12,54,65,7,23,9};

    int n=6;

  n1.printArray(&A,n);
    n1.insertionSort(A,n);
n1.printArray(A,n);
}}
