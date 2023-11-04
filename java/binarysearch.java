import java.util.Scanner;

class binarysearch
{
    public static void main(String[] args) 
    {
    Scanner s1 = new Scanner (System.in);
       

int linearSearch(int arr[],int size,int element)
{
   for(int i=0;i<size;i++)
   {



    if(arr[i]==element)


    return i;

   }}


   return -1;






int binarySearch(int arr[],int size,int element)
{

 int low,mid,high;

 mid=(low+high)/2;

if(arr[mid]==element)
{

 return mid;


}

if(arr[mid]<element)
{

low=mid+1;



}

else{


high = mid-1;


}


}






int main()
{


int arr[]= {1,3,5,56,4,3,23,5,4,54634,36,34};

int size=sizeof(arr)/sizeof(int);
int element=54;
int searchindex= linearsearch(arr,size,4);

System.out.print("the element %d was found at index %d \n",element,searchindex);


}