import java.util.Scanner;

abstract class bike
{

abstract void run();
void show()
{
    
}

}

class honda extends bike

{

  void run()
                                                //abstract class and abstract method
  {

    System.out.println("running safely");


  }

}
public class M21
{
public static void main(String [] args)

{

  bike b  = new honda();

  b.run();


}

}












