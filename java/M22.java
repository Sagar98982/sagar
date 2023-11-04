import java.util.Scanner;


abstract class bank

{

abstract int getrateofinterest();

}

class SBI extends bank

{

int getrateofinterest()

{
  return 7;


}



}


class PNB extends bank
{

  int getrateofinterest()
  {
    return 8;


  }


}

public class M22
{


  public static void main(String[] args)
  {

bank b;

b= new SBI();

System.out.println("rate of interest :"+b.getrateofinterest());

b = new PNB();

System.out.println("rate of interest is :"+b.getrateofinterest());





  }



}
