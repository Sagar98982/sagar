
//throw  keyword uses:

import java.lang.Exception;

class M15
{
   
    public static void main(String[] args)
    {

     // System.out.println(10/0);                 //   ye error jvm show karega =  ye implicity hua h


   // throw new ArithmeticException("/ by zero");  //  ye khud se banaya hua h aritmatic exception 
                                                  //    ye bhi uper ki tarah (jvm) uper vala error           
                                                   //   same show karega = ye explicity hua h

                                                  //  ye throw keyword ki help se jvm ko throw kra

                                                   // jvm us exception ko catch karega or use handle karega
    

    throw new InvalidageException(" / by zero");     // ye user defined Exception k sath jyada use hota h


}}