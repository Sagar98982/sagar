import java.util.scanner;

class operation
{


   int square(int n)
   {

     return n*n;



}};


class circle                                    //aggregation
{

   operation  op;
                                                // isme uper vali class ko circle class m use krni h
   int pi = 314;
                                                  //  to operation ka object banega

  int area(int radius)

   {

     op = new operation();

   int m = op.square(radius);-->         // yha is pr aggregation use ho rha h

   return pi*m;

   }
   



public static void main(String[] args)

{

  circle c = new circle();

  int j = c.area(5);

  System.out.println(j);

}}

 




