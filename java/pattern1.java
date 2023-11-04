import java.util.Scanner;

class pattern1 {
  public static void main(String[] args) {
    Scanner s1 = new Scanner(System.in);

    int i, j, k;

    for (i = 5; i >= 1; i--) {
      k = 5;

      for (j = 1; j <= 5; j++) {
        if (i != j) {

          System.out.print(k);

        }

        else

        {

          System.out.print("*");

        }

        k--;

      }

      System.out.println();

    }
  }
}
