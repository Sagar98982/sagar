import java.io.*;

class M31
{

    public static void main(String[] args)

    {                                                          // file read k lie

        try

        {
            File f1 = new File("gg.txt");
            FileReader f =  new FileReader(f1);

            try
            {

               // f.write("hello how r you");
                                                               // 1st example
                int i;

            while((i=f.read())!=-1)                               // r.read() ek method h jo character by character method ko read krta
                                                                // or integer ki form m value return kr dega  or ye data jb tk read krta

                                                                // rahega jb tk ye -1 na ho jaye

                System.out.println((char)i);                      //  ye typecating h

            }
            finally

            {

                f.close();
                System.out.println("File Closed");

            }
            


        }

        catch(IOException e)
        {

            System.out.println("Exception Handled");

        }



    }

}
