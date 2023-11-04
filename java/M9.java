import java.util.Scanner;

class bike

{

  final void run()

  {
     System.out.println("running");


  }                                                        // [final method]
}


class honda extends bike
{

    void run()
    {

     System.out.println("running safely");

   
    }


public static void main(String[] args)
{

honda s1 = new honda();

s1.run();



}


}