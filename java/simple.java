import javax.swing.*;


public class simple
{

JFrame f;

simple()

{

  f= new JFrame();
  
  JButton b = new JButton("Press");       //2nd example of swing by association inside constructor

   b.setBounds(130,200,100,40);

  f.add(b);

  f.setSize(400,500);

  f.setLayout(null);

  f.setVisible(true);


}


public static void main(String[] args)
{

 new simple();



}


    
}