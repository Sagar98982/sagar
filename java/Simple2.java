import javax.swing.*;
import java.awt.event.*;

public class Simple2 extends JFrame implements ActionListener

{


Simple2()


{

  
  JTextField t1=new JTextField();
  JTextField t2=new JTextField();
  JButton b = new JButton("click");
  JLabel l1 = new JLabel("welcome to the java");

  l1.setBounds(100,150,200,40);

 
   
   t1.setBounds(150,200,250,100);
   t2.setBounds(150,350,250,100);
   b.setBounds(130,100,100,40);
// b.addActionListener(new h1());

  t1.setText("");

 add(b);

 add(t1);

 add(t2);

 add(l1);
                                      //  3rd example of swing using constructor
 setSize(400,500);

 setLayout(null);

 setVisible(true);




}

// class h1 implements ActionListener
// {

//   public void labelperformed(ActionEvent e)

//   {

//   int a =Integer.parseInt(t1.getText());
//   int b =Integer.parseInt(t2.getText());
//   int s=a+b;
//   t1.setText("result is "+s);

// }}


public static void main(String[] args)
{

  new Simple2();
  //labelperformed(o);

}


}