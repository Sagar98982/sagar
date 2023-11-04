import java.lang.Exception;

class M13

{

 public static void main(String[] args)
 {
   String str = "Sagar";
   //String str = "123";                // is string ko integer m convert krna h  uske lie java
                                          //   me mehod h  =  parseInt
        try{

                                        
  int a = Integer.parseInt(str);                    //    is line m exception aya
  System.out.println(a);
  
   

 }

catch(NumberFormatException n)
{


System.out.println("String " +str+" cannot be converted to integer");

}


   System.out.println("main method ended");


}}







