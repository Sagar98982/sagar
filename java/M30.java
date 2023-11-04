import java.io.*;

class M30

{

    public static void main(String[] args)

    {

        try

        {
            File f1=new File("gg.txt");
            FileWriter f=  new FileWriter(f1);

            try
            
            {
                
                f.write("java programming is the best language");              //  file write k liye


            }

            finally

            {

                f.close();

            }

            System.out.println("successfully data wrote in file");

        }


        catch(IOException i)
        {

            System.out.println(i);


        }

    }
}