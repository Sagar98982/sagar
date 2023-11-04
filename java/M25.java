import java.io.IOException;

class A extends Thread

{

public void run()

{

try

{
                                                                                  //multithreading
for(int i=1;i<=5;i++)

{

System.out.println("sagar");

Thread.sleep(1000);

}}

catch(InterruptedException e)

{

System.out.println(e.getMessage());

}

}}

class M25

{
public static void main(String[] args) throws InterruptedException

{

A t = new A();

t.start();

for(int i=1;i<=5;i++)

{

System.out.println("hitesh");

Thread.sleep(1000);

}
}
}
