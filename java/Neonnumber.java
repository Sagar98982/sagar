import java.util.Scanner;
public class Neonnumber

{

public static void main (String[] args)

{

  Scanner S = new Scanner (System.in);

  int a,sq,r,sum=0;

  System.out.println("Enetr the number : ");

  a = S.nextInt();

  sq = a*a;

  while(sq!=0)

  {

    r=sq%10;

    sum = sum+r;

    sq = sq/10;

  }

  if(sum==a)

    {

      System.out.println("It is a neon number");


    }

    else

    {

      System.out.println("It is not a neon number");



    }








}}





