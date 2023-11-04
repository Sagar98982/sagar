
import java.util.*;



interface printable

{

   void print();                            //  isme abstract lagane ki need nhi h ye by default absstract h

}
                                             //   isme  sirf uper function declare krte h
class A6 implements printable

{
   public void print()

   {

     System.out.println("hello");      // isme class m uper vale fuction m koi bhi messsange print kr skte h


   }
}
public class M23{







   public static void main(String []args)
   {
      A6 s1 = new A6();
      s1.print();



   }}


   


